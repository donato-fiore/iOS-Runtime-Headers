// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRIGGEROPTIONSELECTIONVIEW_H
#define WFTRIGGEROPTIONSELECTIONVIEW_H

@class UIView, UIImageView, UILabel;


#import "WFCircularGlyphView.h"

@interface WFTriggerOptionSelectionView : UIView

@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) BOOL selected;
@property (readonly, nonatomic) WFCircularGlyphView *selectedView; // ivar: _selectedView
@property (readonly, nonatomic) WFCircularGlyphView *unselectedView; // ivar: _unselectedView


+(CGFloat)scaledValueForValue:(CGFloat)arg0 ;
-(id)init;
-(void)updateAlpha;


@end


#endif