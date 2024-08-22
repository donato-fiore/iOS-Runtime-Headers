// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXFAKEANCHORMODELPHASE3TRAINER_H
#define ATXFAKEANCHORMODELPHASE3TRAINER_H

@class NSMutableArray, NSString;
@protocol ATXAnchorModelPhase3TrainerProtocol;

#import <Foundation/Foundation.h>


@interface ATXFakeAnchorModelPhase3Trainer : NSObject <ATXAnchorModelPhase3TrainerProtocol>

 {
    NSMutableArray *_candidateIdsForPhase3Training;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)candidateIdsForPhase3Training;
-(id)init;
-(id)trainPhase3ForCandidate:(id)arg0 ;


@end


#endif