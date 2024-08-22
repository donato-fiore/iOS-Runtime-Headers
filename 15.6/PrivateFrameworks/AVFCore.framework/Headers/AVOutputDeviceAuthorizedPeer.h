// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVOUTPUTDEVICEAUTHORIZEDPEER_H
#define AVOUTPUTDEVICEAUTHORIZEDPEER_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "AVOutputDeviceAuthorizedPeerInternal.h"

@interface AVOutputDeviceAuthorizedPeer : NSObject {
    AVOutputDeviceAuthorizedPeerInternal *_ivars;
}


@property (readonly, nonatomic) BOOL hasAdministratorPrivileges;
@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) NSData *publicKey;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithID:(id)arg0 publicKey:(id)arg1 hasAdministratorPrivileges:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif