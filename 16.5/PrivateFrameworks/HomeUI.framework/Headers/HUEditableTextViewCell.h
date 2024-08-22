// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUEDITABLETEXTVIEWCELL_H
#define HUEDITABLETEXTVIEWCELL_H

@class UITableViewCell, NSString, UITextView;
@protocol HUDisableableCellProtocol, UITextViewDelegate;



@interface HUEditableTextViewCell : UITableViewCell <HUDisableableCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (nonatomic) BOOL editEnabled; // ivar: _editEnabled
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *placeholderText; // ivar: _placeholderText
@property (nonatomic) BOOL showingPlaceholder; // ivar: _showingPlaceholder
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UITextView *textView; // ivar: _textView
@property (weak, nonatomic) NSObject<UITextViewDelegate> *textViewDelegate;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)trimmedStringForText:(id)arg0 ;
-(void)handleUITextViewTextDidBeginEditingNotification:(id)arg0 ;
-(void)handleUITextViewTextDidEndEditingNotification:(id)arg0 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateTextColor;


@end


#endif