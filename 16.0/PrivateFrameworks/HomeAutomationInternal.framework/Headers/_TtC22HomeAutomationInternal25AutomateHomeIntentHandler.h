// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC22HOMEAUTOMATIONINTERNAL25AUTOMATEHOMEINTENTHANDLER_H
#define _TTC22HOMEAUTOMATIONINTERNAL25AUTOMATEHOMEINTENTHANDLER_H

@protocol AutomateHomeIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC22HomeAutomationInternal25AutomateHomeIntentHandler : NSObject <AutomateHomeIntentHandling>

 {
    ? genericErrorResponse;
    ? deviceIsSupported;
    ? climateAttributes;
}




-(id)init;
-(void)confirmAutomateHome:(id)arg0 completion:(id)arg1 ;
-(void)handleAutomateHome:(id)arg0 completion:(id)arg1 ;
-(void)resolveAutomatableTaskForAutomateHome:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTriggerForAutomateHome:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif