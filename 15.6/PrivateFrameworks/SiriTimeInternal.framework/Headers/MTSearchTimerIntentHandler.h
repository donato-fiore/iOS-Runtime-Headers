// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSEARCHTIMERINTENTHANDLER_H
#define MTSEARCHTIMERINTENTHANDLER_H

@class NSString;
@protocol INSearchForTimersIntentHandling;


#import "MTTimerIntentHandler.h"

@interface MTSearchTimerIntentHandler : MTTimerIntentHandler <INSearchForTimersIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleSearchForTimers:(id)arg0 completion:(id)arg1 ;


@end


#endif