// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAPEOPLEPROMOTERPROCESSINGJOB_H
#define PHAPEOPLEPROMOTERPROCESSINGJOB_H

@class NSString, PVPersonPromoter;
@protocol PVPersonPromoterDelegate, OS_dispatch_queue;


#import "PHAWorkerJob.h"
#import "PHAVisionServiceFaceProcessingWorker.h"

@interface PHAPeoplePromoterProcessingJob : PHAWorkerJob <PVPersonPromoterDelegate>

 {
    BOOL _finished;
    float _completionScore;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue; // ivar: _backgroundTaskQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PVPersonPromoter *personPromoter; // ivar: _personPromoter
@property (readonly) Class superclass;
@property (weak, nonatomic) PHAVisionServiceFaceProcessingWorker *worker; // ivar: _worker


-(BOOL)finished;
-(BOOL)startProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(BOOL)stopProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(float)completionScore;
-(id)densityClusteringForObjects:(id)arg0 maximumDistance:(CGFloat)arg1 minimumNumberOfObjects:(NSUInteger)arg2 withDistanceBlock:(id)arg3 ;
-(id)initWithWorkerType:(short)arg0 scenario:(NSUInteger)arg1 library:(id)arg2 ;
-(id)keyFaceForPerson:(id)arg0 qualityMeasureByFace:(id)arg1 updateBlock:(id)arg2 ;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg0 forPersons:(id)arg1 overTheYearsComputation:(BOOL)arg2 updateBlock:(id)arg3 ;
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg0 forPersons:(id)arg1 updateBlock:(id)arg2 ;
-(void)setCompletionScore:(float)arg0 ;
-(void)setFinished:(BOOL)arg0 ;


@end


#endif