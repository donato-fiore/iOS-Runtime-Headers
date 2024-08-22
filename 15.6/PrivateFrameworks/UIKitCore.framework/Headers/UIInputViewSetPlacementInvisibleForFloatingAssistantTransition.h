// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTVIEWSETPLACEMENTINVISIBLEFORFLOATINGASSISTANTTRANSITION_H
#define UIINPUTVIEWSETPLACEMENTINVISIBLEFORFLOATINGASSISTANTTRANSITION_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacementInvisible.h"

@interface UIInputViewSetPlacementInvisibleForFloatingAssistantTransition : UIInputViewSetPlacementInvisible <NSSecureCoding>





+(id)placementWithPlacement:(id)arg0 ;
-(BOOL)isCompactAssistantView;
-(BOOL)isFloatingAssistantView;
-(CGFloat)alpha;
-(struct CGAffineTransform )transform;


@end


#endif