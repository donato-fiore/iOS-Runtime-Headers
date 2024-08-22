// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIACCESSIBILITYLABELONLYHUDLAYOUTMANAGER_H
#define UIACCESSIBILITYLABELONLYHUDLAYOUTMANAGER_H



#import "UIAccessibilityHUDLayoutManager.h"

@interface UIAccessibilityLabelOnlyHUDLayoutManager : UIAccessibilityHUDLayoutManager



-(BOOL)labelContainsSingleCharacter:(id)arg0 ;
-(id)labelFontForHUD:(id)arg0 ;
-(struct CGRect )labelFrameForHUD:(id)arg0 preferredSize:(struct CGSize )arg1 ;
-(struct CGSize )minimumUnscaledSizeForHUD:(id)arg0 preferredLabelSize:(struct CGSize )arg1 ;
-(struct CGSize )unscaledSizeForHUD:(id)arg0 containingSize:(struct CGSize )arg1 ;


@end


#endif