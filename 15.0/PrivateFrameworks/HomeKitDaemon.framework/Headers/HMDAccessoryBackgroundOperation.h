// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYBACKGROUNDOPERATION_H
#define HMDACCESSORYBACKGROUNDOPERATION_H

@class NSString;
@protocol HMFLogging;


#import "HMDBackgroundOperation.h"

@interface HMDAccessoryBackgroundOperation : HMDBackgroundOperation <HMFLogging>



@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)persistent;
+(id)logCategory;
-(BOOL)isAccessoryOperation;
-(NSUInteger)accessoryOperationStatus;
-(id)initWithAccessory:(id)arg0 userData:(id)arg1 ;
-(id)logIdentifier;


@end


#endif