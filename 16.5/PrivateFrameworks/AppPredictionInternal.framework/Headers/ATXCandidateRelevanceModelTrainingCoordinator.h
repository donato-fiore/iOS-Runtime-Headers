// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCANDIDATERELEVANCEMODELTRAININGCOORDINATOR_H
#define ATXCANDIDATERELEVANCEMODELTRAININGCOORDINATOR_H

@class NSArray, NSString;
@protocol ATXCandidateRelevanceModelTrainingCoordinatorProtocol;

#import <Foundation/Foundation.h>


@interface ATXCandidateRelevanceModelTrainingCoordinator : NSObject <ATXCandidateRelevanceModelTrainingCoordinatorProtocol>

 {
    NSArray *_configs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConfigs:(id)arg0 ;
-(void)trainUsingConfig:(id)arg0 xpcActivity:(id)arg1 disregardDatasetMetadataRequirements:(BOOL)arg2 ;
-(void)trainWithXPCActivity:(id)arg0 disregardDatasetMetadataRequirements:(BOOL)arg1 ;


@end


#endif