// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYCOMMANDDISCOVERABILITYHUDVISUALSTYLECOMPACT_H
#define UIKEYCOMMANDDISCOVERABILITYHUDVISUALSTYLECOMPACT_H

@class UIFont;


#import "UIKeyCommandDiscoverabilityHUDVisualStyleRegular.h"

@interface UIKeyCommandDiscoverabilityHUDVisualStyleCompact : UIKeyCommandDiscoverabilityHUDVisualStyleRegular {
    UIFont *_summaryFont;
}




-(CGFloat)HUDPageControlBottomMargin;
-(CGFloat)maxHUDWidthForWidth:(CGFloat)arg0 ;
-(CGFloat)summaryDescriptionToModifiersSpacing;
-(CGFloat)summaryModifiersSpacing;
-(CGFloat)summaryXPadding;
-(id)summaryFont;
-(struct UIEdgeInsets )HUDViewInsets;


@end


#endif