// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCUSERMDMCLIENT_H
#define MCUSERMDMCLIENT_H


#import <Foundation/Foundation.h>


@interface MCUserMDMClient : NSObject



+(id)sharedClient;
-(id)pushToken;
-(void)getAssertionDescriptionsWithCompletion:(id)arg0 ;
-(void)processUserRequest:(id)arg0 encodeResponse:(BOOL)arg1 completion:(id)arg2 ;
-(void)scheduleTokenUpdate;
-(void)simulatePush;


@end


#endif