// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHAPACCESSORYTASKCONTEXT_H
#define HMDHAPACCESSORYTASKCONTEXT_H

@class HMFActivity, NSNumber, HMFMessage;

#import <Foundation/Foundation.h>

#import "HMDHome.h"
#import "HMDUser.h"

@interface HMDHAPAccessoryTaskContext : NSObject

@property (retain, nonatomic) HMFActivity *activity; // ivar: _activity
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) NSNumber *identifier; // ivar: _identifier
@property (readonly) NSInteger operationType; // ivar: _operationType
@property (readonly) HMFMessage *requestMessage; // ivar: _requestMessage
@property (readonly) NSUInteger sourceType; // ivar: _sourceType
@property (readonly) BOOL supportsMultiPartResponse;
@property (readonly) HMDUser *user;


-(BOOL)isComplete;
-(BOOL)isRemoteAccessDeviceReachable;
-(BOOL)isShortActionOperation;
-(NSInteger)qualityOfService;
-(id)clientBundleIdentifier;
-(id)initWithIdentifier:(id)arg0 operationType:(NSInteger)arg1 home:(id)arg2 sourceType:(NSUInteger)arg3 requestMessage:(id)arg4 name:(id)arg5 ;
-(id)operationName;
-(id)residentMapForAccessories:(id)arg0 ;
-(id)workQueue;
-(void)dispatchMessage:(id)arg0 delegateDevice:(id)arg1 ;


@end


#endif