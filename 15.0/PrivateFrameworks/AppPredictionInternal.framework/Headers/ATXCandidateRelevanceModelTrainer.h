// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCANDIDATERELEVANCEMODELTRAINER_H
#define ATXCANDIDATERELEVANCEMODELTRAINER_H

@class NSString;
@protocol ATXCandidateRelevanceModelTrainerProtocol;

#import <Foundation/Foundation.h>

#import "ATXCandidateRelevanceModelConfig.h"

@interface ATXCandidateRelevanceModelTrainer : NSObject <ATXCandidateRelevanceModelTrainerProtocol>

 {
    ATXCandidateRelevanceModelConfig *_config;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfig:(id)arg0 ;
-(void)generateAndSaveDatasetWithFilename:(id)arg0 ;
-(void)trainWithXPCActivity:(id)arg0 disregardDatasetMetadataRequirements:(BOOL)arg1 ;


@end


#endif