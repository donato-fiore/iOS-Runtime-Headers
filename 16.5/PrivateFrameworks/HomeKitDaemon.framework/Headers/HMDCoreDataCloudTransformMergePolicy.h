// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREDATACLOUDTRANSFORMMERGEPOLICY_H
#define HMDCOREDATACLOUDTRANSFORMMERGEPOLICY_H

@class NSMergePolicy, NSString;
@protocol HMFLogging;



@interface HMDCoreDataCloudTransformMergePolicy : NSMergePolicy <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)resolveOptimisticLockingVersionConflicts:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif