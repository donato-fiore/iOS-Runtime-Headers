// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXFAKEANCHORMODELPHASE2TRAINER_H
#define ATXFAKEANCHORMODELPHASE2TRAINER_H

@class NSMutableArray, NSString;
@protocol ATXAnchorModelPhase2TrainerProtocol;

#import <Foundation/Foundation.h>


@interface ATXFakeAnchorModelPhase2Trainer : NSObject <ATXAnchorModelPhase2TrainerProtocol>

 {
    NSMutableArray *_candidateIdsForPhase2Training;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)candidateClassifierType;
-(id)candidateIdsForPhase2Training;
-(id)init;
-(id)trainPhase2ForCandidate:(id)arg0 candidateType:(id)arg1 ;


@end


#endif