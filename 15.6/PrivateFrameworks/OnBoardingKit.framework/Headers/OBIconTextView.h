// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBICONTEXTVIEW_H
#define OBICONTEXTVIEW_H

@class UIView, UIImageView, UITextView;



@interface OBIconTextView : UIView

@property (readonly, nonatomic) CGFloat baselineFromBoundsTop; // ivar: _baselineFromBoundsTop
@property (nonatomic) CGSize iconSize; // ivar: _iconSize
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (nonatomic) CGFloat padding; // ivar: _padding
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(id)initWithIcon:(id)arg0 iconSize:(struct CGSize )arg1 text:(id)arg2 dataDetectorTypes:(NSUInteger)arg3 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateFont;


@end


#endif