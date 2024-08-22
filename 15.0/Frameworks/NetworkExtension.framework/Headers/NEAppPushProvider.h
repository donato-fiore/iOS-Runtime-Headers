// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEAPPPUSHPROVIDER_H
#define NEAPPPUSHPROVIDER_H

@class NSDictionary;


#import "NEProvider.h"

@interface NEAppPushProvider : NEProvider

@property (readonly) NSDictionary *providerConfiguration; // ivar: _providerConfiguration


-(id)init;
-(void)handleTimerEvent;
-(void)reportIncomingCallWithUserInfo:(id)arg0 ;
-(void)start;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stopWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif