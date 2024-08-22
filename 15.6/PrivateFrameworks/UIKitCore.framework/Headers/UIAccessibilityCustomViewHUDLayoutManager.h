// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYCUSTOMVIEWHUDLAYOUTMANAGER_H
#define UIACCESSIBILITYCUSTOMVIEWHUDLAYOUTMANAGER_H



#import "UIAccessibilityHUDLayoutManager.h"

@interface UIAccessibilityCustomViewHUDLayoutManager : UIAccessibilityHUDLayoutManager



-(struct CGSize )minimumUnscaledSizeForHUD:(id)arg0 preferredLabelSize:(struct CGSize )arg1 ;
-(struct CGSize )preferredSizeForLabelInHUD:(id)arg0 maximumWidth:(CGFloat)arg1 ;
-(void)layoutSubviewsOfHUD:(id)arg0 ;


@end


#endif