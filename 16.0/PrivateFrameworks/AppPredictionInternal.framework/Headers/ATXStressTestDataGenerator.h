// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSTRESSTESTDATAGENERATOR_H
#define ATXSTRESSTESTDATAGENERATOR_H


#import <Foundation/Foundation.h>


@interface ATXStressTestDataGenerator : NSObject



-(id)_startCallIntentWithRecipientName:(id)arg0 ;
-(id)_visitWebpageNSUAForURLString:(id)arg0 ;
-(void)_updateActionFeedbackWithConfirmsAndRejects;
-(void)_updateDonationPipelineWithIntentsAndNSUAs;
-(void)clearAllDataForStressCycler;
-(void)clearAllDataForStressCyclerWithCompletion:(id)arg0 ;
-(void)clearDataForBehavioralActionPredictions;
-(void)enumerateSampleIntentAndUserActivityATXActionsWithBlock:(id)arg0 ;
-(void)enumerateSampleIntentAndUserActivityEventsWithBlock:(id)arg0 ;
-(void)generateDataForBehavioralActionPredictions;
-(void)seedAllDataForStressCycler;
-(void)setupForStressCyclerWithCompletion:(id)arg0 ;


@end


#endif