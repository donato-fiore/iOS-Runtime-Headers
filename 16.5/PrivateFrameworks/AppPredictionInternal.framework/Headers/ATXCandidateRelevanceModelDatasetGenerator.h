// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCANDIDATERELEVANCEMODELDATASETGENERATOR_H
#define ATXCANDIDATERELEVANCEMODELDATASETGENERATOR_H

@class BPSPublisher, NSString;
@protocol ATXCandidateRelevanceModelDatasetGeneratorProtocol;

#import <Foundation/Foundation.h>

#import "ATXCandidateRelevanceModelDatasetGeneratorConfig.h"

@interface ATXCandidateRelevanceModelDatasetGenerator : NSObject <ATXCandidateRelevanceModelDatasetGeneratorProtocol>



@property (retain, nonatomic) BPSPublisher *bluetoothPublisher; // ivar: _bluetoothPublisher
@property (retain, nonatomic) ATXCandidateRelevanceModelDatasetGeneratorConfig *config; // ivar: _config
@property (retain, nonatomic) BPSPublisher *contextPublisher; // ivar: _contextPublisher
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BPSPublisher *microlocationVisitPublisher; // ivar: _microlocationVisitPublisher
@property (retain, nonatomic) BPSPublisher *modePublisher; // ivar: _modePublisher
@property (retain, nonatomic) BPSPublisher *poiCategoryPublisher; // ivar: _poiCategoryPublisher
@property (readonly) Class superclass;
@property (retain, nonatomic) BPSPublisher *userFocusComputedModePublisher; // ivar: _userFocusComputedModePublisher


+(BOOL)isContextMismatchForPreviousContext:(id)arg0 currentContext:(id)arg1 ;
+(id)candidateDataPointsForSession:(id)arg0 candidate:(id)arg1 ;
+(id)candidateDataPointsForSessions:(id)arg0 candidate:(id)arg1 ;
+(id)dataPointPublisher:(id)arg0 ;
+(id)eventAndRecentContextPublisher:(id)arg0 ;
-(id)candidateDatasetStream;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithConfig:(id)arg0 contextPublisher:(id)arg1 modePublisher:(id)arg2 poiCategoryPublisher:(id)arg3 bluetoothPublisher:(id)arg4 userFocusComputedModePublisher:(id)arg5 microlocationVisitPublisher:(id)arg6 ;
// -(void)receiveCandidateDataPoint:(id)arg0 completion:(unk)arg1 candidate:(id)arg2  ;
// -(void)receiveDataPoint:(id)arg0 completion:(unk)arg1  ;
// -(void)receiveDatasetSession:(id)arg0 completion:(unk)arg1  ;


@end


#endif