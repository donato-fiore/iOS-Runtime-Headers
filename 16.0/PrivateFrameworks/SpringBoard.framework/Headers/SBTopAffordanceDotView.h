// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTOPAFFORDANCEDOTVIEW_H
#define SBTOPAFFORDANCEDOTVIEW_H

@class UIView, NSLayoutConstraint;



@interface SBTopAffordanceDotView : UIView {
    NSLayoutConstraint *_widthConstraint;
}


@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted


+(Class)layerClass;
+(struct CAColorMatrix )darkDefaultColorMatrix;
+(struct CAColorMatrix )darkHighlightedColorMatrix;
+(struct CAColorMatrix )lightDefaultColorMatrix;
+(struct CAColorMatrix )lightHighlightedColorMatrix;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_backdropLayer;
-(id)_makeBackdropLayerFilters;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CAColorMatrix )_effectiveColorMatrix;
-(void)_updateBackdropLayerFilters;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif