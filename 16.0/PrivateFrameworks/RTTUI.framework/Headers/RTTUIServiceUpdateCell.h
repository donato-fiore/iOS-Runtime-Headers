// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTTUISERVICEUPDATECELL_H
#define RTTUISERVICEUPDATECELL_H

@class UITableViewCell, UITextView, RTTServiceUpdate;
@protocol RTTUIServiceCellDelegate;



@interface RTTUIServiceUpdateCell : UITableViewCell {
    UITextView *_titleView;
    UITextView *_subtitleView;
    RTTServiceUpdate *_serviceUpdate;
}


@property (weak, nonatomic) NSObject<RTTUIServiceCellDelegate> *delegate; // ivar: _delegate


+(CGFloat)heightForWidth:(CGFloat)arg0 delegate:(id)arg1 serviceUpdate:(id)arg2 ;
-(BOOL)isAccessibilityElement;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)accessibilityLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 serviceUpdate:(id)arg2 ;
-(id)serviceMessage;
-(id)serviceTitle;
-(void)adjustTextViewSize;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateLayout;


@end


#endif