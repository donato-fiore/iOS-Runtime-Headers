// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC22HOMEAUTOMATIONINTERNAL24CONTROLHOMEINTENTHANDLER_H
#define _TTC22HOMEAUTOMATIONINTERNAL24CONTROLHOMEINTENTHANDLER_H

@protocol INControlHomeIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC22HomeAutomationInternal24ControlHomeIntentHandler : NSObject <INControlHomeIntentHandling>





-(id)init;
-(void)handleControlHome:(id)arg0 completion:(id)arg1 ;
-(void)resolveFiltersForControlHome:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveUserTaskForControlHome:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif