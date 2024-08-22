// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIMODERNBARBUTTON_H
#define _UIMODERNBARBUTTON_H

@protocol _UIButtonBarButtonAppearance;


#import "UIButton.h"

@interface _UIModernBarButton : UIButton <_UIButtonBarButtonAppearance>

 {
    BOOL _guardAgainstDegenerateBaselineCalculation;
}


@property (nonatomic, setter=_setAdditionalSelectionInsets:) UIEdgeInsets _additionalSelectionInsets; // ivar: __additionalSelectionInsets
@property (nonatomic, setter=_setGuardAgainstDegenerateBaselineCalculation:) BOOL _guardAgainstDegenerateBaselineCalculation;


+(Class)_visualProviderClass;
-(BOOL)_likelyToHaveTitle;
-(BOOL)_shouldAdjustToTraitCollection;
-(BOOL)_supportsMacIdiom;
-(struct CGRect )_selectedIndicatorBounds;
-(struct CGRect )contentRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_roundSize:(struct CGSize )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif