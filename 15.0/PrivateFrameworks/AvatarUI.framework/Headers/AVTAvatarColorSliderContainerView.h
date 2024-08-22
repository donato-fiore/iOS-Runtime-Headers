// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARCOLORSLIDERCONTAINERVIEW_H
#define AVTAVATARCOLORSLIDERCONTAINERVIEW_H

@class UIView, NSArray;
@protocol AVTColorSliderDelegate, AVTAvatarColorSliderContainerViewDelegate;


#import "AVTAvatarAttributeEditorSectionColorItem.h"
#import "AVTColorSlider.h"

@interface AVTAvatarColorSliderContainerView : UIView <AVTColorSliderDelegate>



@property (weak, nonatomic) NSObject<AVTAvatarColorSliderContainerViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (retain, nonatomic) AVTAvatarAttributeEditorSectionColorItem *sectionItem; // ivar: _sectionItem
@property (retain, nonatomic) AVTColorSlider *slider; // ivar: _slider


-(id)initWithFrame:(struct CGRect )arg0 userInterfaceLayoutDirection:(NSInteger)arg1 ;
-(void)colorSlider:(id)arg0 didFinishSelectingValue:(CGFloat)arg1 ;
-(void)colorSlider:(id)arg0 valueChanged:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)updateSliderTrackLayerAnimated:(BOOL)arg0 ;
-(void)updateSliderWithColorPreset:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif