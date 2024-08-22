// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSERVICEFACILITYSERVERCLIENTHANDLE_H
#define FBSERVICEFACILITYSERVERCLIENTHANDLE_H

@class BSServiceConnection, NSString, BSProcessHandle, RBSProcessIdentity;
@protocol FBSServiceFacilityClientHandle_Internal, BSInvalidatable, BSXPCServiceConnectionMessaging, FBSServiceFacilityClientContext;

#import <Foundation/Foundation.h>

#import "FBProcess.h"

@interface FBServiceFacilityServerClientHandle : NSObject <FBSServiceFacilityClientHandle_Internal, BSInvalidatable>

 {
    BSServiceConnection *_connection;
    FBProcess *_process;
}


@property (readonly, nonatomic) NSObject<BSXPCServiceConnectionMessaging> *clientHandle_messageBuilder;
@property (retain, nonatomic) NSObject<FBSServiceFacilityClientContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *facilityID; // ivar: _facilityID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BSProcessHandle *processHandle; // ivar: _processHandle
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;


-(id)initWithFacilityID:(id)arg0 connection:(id)arg1 ;
-(id)prettyProcessDescription;
-(void)invalidate;


@end


#endif