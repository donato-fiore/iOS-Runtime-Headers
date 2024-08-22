// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAREGISTERPUSHTOKENREQUEST_H
#define FAREGISTERPUSHTOKENREQUEST_H

@class NSData;


#import "FAFamilyCircleRequest.h"

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest

@property (readonly, copy) NSData *pushToken; // ivar: _pushToken


-(id)initWithPushToken:(id)arg0 ;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif