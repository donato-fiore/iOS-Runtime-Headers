// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTVIEWSETPLACEMENTOFFSCREENDOWNFORFLOATINGASSISTANT_H
#define UIINPUTVIEWSETPLACEMENTOFFSCREENDOWNFORFLOATINGASSISTANT_H



#import "UIInputViewSetPlacementOffScreenDown.h"

@interface UIInputViewSetPlacementOffScreenDownForFloatingAssistant : UIInputViewSetPlacementOffScreenDown



+(id)placement;
-(BOOL)isFloatingAssistantView;
-(BOOL)showsEditItems;
-(Class)applicatorClassForKeyboard:(BOOL)arg0 ;
-(struct CGRect )remoteIntrinsicContentSizeForInputViewInSet:(id)arg0 includingIAV:(BOOL)arg1 ;


@end


#endif