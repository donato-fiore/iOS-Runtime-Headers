// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AR3DSKELETONRETARGETINGTECHNIQUE_H
#define AR3DSKELETONRETARGETINGTECHNIQUE_H

@class NSUUID;
@protocol OS_dispatch_semaphore;


#import "ARTechnique.h"
#import "ARCoreRESkeletonResults.h"

@interface AR3DSkeletonRetargetingTechnique : ARTechnique {
    NSUUID *_skeletonIdentifier;
    *CoreIKSolver _coreIKSolver;
}


@property (retain, nonatomic) ARCoreRESkeletonResults *latestResults; // ivar: _latestResults
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *resultSemaphore; // ivar: _resultSemaphore


+(BOOL)producesResultDataForAnchorOfClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_retargetSkeleton:(id)arg0 ;
-(id)init;
-(id)processData:(id)arg0 ;
-(void)dealloc;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif