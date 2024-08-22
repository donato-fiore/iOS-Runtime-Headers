// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTTUIUTTERANCECELL_H
#define RTTUIUTTERANCECELL_H

@class UITableViewCell, UITextView, CALayer, NSString, RTTUtterance;
@protocol UITextViewDelegate, RTTUIUtteranceCellDelegate;



@interface RTTUIUtteranceCell : UITableViewCell <UITextViewDelegate>

 {
    UITextView *_textView;
    CALayer *_bubbleLayer;
}


@property (nonatomic, getter=_accessibilityIsUnread, setter=_accessibilitySetIsUnread:) BOOL accessibilityIsUnread; // ivar: _accessibilityIsUnread
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RTTUIUtteranceCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditingUtterance) BOOL editingUtterance; // ivar: _editingUtterance
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) RTTUtterance *utterance; // ivar: _utterance


+(CGFloat)heightForUtterance:(id)arg0 andWidth:(CGFloat)arg1 ;
-(BOOL)_accessibilityRealtimeCompleted;
-(BOOL)_accessibilityRealtimeHasUnread;
-(BOOL)isAccessibilityElement;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(struct _NSRange )selectedTextRange;
-(void)_accessibilityHandleATFocused:(BOOL)arg0 assistiveTech:(id)arg1 ;
-(void)_accessibilitySetIsUnread:(BOOL)arg0 ;
-(void)adjustTextViewSize;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSendProgressIndex:(NSUInteger)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)updateLayout;
-(void)updateUtterance:(id)arg0 ;
-(void)updateUtterance:(id)arg0 postNotifications:(BOOL)arg1 ;


@end


#endif