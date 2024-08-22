// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYAUTHSERVICE_H
#define OSPREYAUTHSERVICE_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "OspreyGRPCChannel.h"

@interface OspreyAuthService : NSObject {
    OspreyGRPCChannel *_channel;
    NSUUID *_authUUID;
    NSUInteger _authStrategyVersion;
}




-(id)initWithChannel:(id)arg0 authStrategyVersion:(NSUInteger)arg1 ;
// -(void)certificateDataWithSuccess:(id)arg0 failure:(unk)arg1  ;
// -(void)createClientSessionWithData:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;


@end


#endif