// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYBACKGROUNDOPERATION_H
#define HMDACCESSORYBACKGROUNDOPERATION_H

@class NSString, NSUUID;
@protocol HMFLogging;


#import "HMDBackgroundOperation.h"

@interface HMDAccessoryBackgroundOperation : HMDBackgroundOperation <HMFLogging>



@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSUUID *accessoryUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly) Class superclass;


+(BOOL)persistent;
+(id)logCategory;
-(BOOL)isAccessoryOperation;
-(NSUInteger)accessoryOperationStatus;
-(id)attributeDescriptions;
-(id)initWithAccessory:(id)arg0 userData:(id)arg1 ;
-(id)initWithAccessoryUUID:(id)arg0 accessoryIdentifier:(id)arg1 homeUUIDWhereAccessoryWasPaired:(id)arg2 userData:(id)arg3 ;
-(id)logIdentifier;


@end


#endif