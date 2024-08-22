// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTVIEWSETPLACEMENTINVISIBLEFORFLOATINGTRANSITION_H
#define UIINPUTVIEWSETPLACEMENTINVISIBLEFORFLOATINGTRANSITION_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacementInvisible.h"

@interface UIInputViewSetPlacementInvisibleForFloatingTransition : UIInputViewSetPlacementInvisible <NSSecureCoding>

 {
    BOOL _isFloatingAssistantView;
}




+(id)placementWithPlacement:(id)arg0 ;
+(id)placementWithPlacement:(id)arg0 forFloatingAssistantViewTransition:(BOOL)arg1 ;
-(BOOL)isFloatingAssistantView;
-(BOOL)isHiddenForFloatingTransition;
-(BOOL)showsEditItems;
-(id)assistantView;


@end


#endif