// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIMODERNBARBUTTON_H
#define _UIMODERNBARBUTTON_H



#import "UIButton.h"

@interface _UIModernBarButton : UIButton

@property (nonatomic, setter=_setAdditionalSelectionInsets:) UIEdgeInsets _additionalSelectionInsets; // ivar: __additionalSelectionInsets


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