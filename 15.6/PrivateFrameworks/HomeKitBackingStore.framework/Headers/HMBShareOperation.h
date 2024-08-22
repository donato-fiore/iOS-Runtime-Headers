// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBSHAREOPERATION_H
#define HMBSHAREOPERATION_H

@class NSString;
@protocol HMFLogging;


#import "HMBFutureOperation.h"
#import "HMBCloudZone.h"

@interface HMBShareOperation : HMBFutureOperation <HMFLogging>



@property (readonly) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithCloudZone:(id)arg0 block:(id)arg1 ;
-(void)main;


@end


#endif