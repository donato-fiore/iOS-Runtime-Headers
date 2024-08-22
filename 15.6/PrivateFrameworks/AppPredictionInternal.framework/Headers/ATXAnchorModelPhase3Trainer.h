// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXANCHORMODELPHASE3TRAINER_H
#define ATXANCHORMODELPHASE3TRAINER_H

@class NSString;
@protocol ATXAnchorModelPhase3TrainerProtocol;

#import <Foundation/Foundation.h>

#import "ATXAnchor.h"
#import "ATXAnchorModelDataStoreWrapper.h"
#import "ATXAnchorModelHyperParameters.h"

@interface ATXAnchorModelPhase3Trainer : NSObject <ATXAnchorModelPhase3TrainerProtocol>

 {
    ATXAnchor *_anchor;
    ATXAnchorModelDataStoreWrapper *_storeWrapper;
    ATXAnchorModelHyperParameters *_hyperParameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)endSecondsAfterAnchorGivenHistoricalOffsets:(id)arg0 ;
-(CGFloat)endSecondsAfterAnchorGivenHistoricalOffsets:(id)arg0 startSecondsAfterAnchor:(CGFloat)arg1 ;
-(CGFloat)startSecondsAfterAnchorGivenHistoricalOffsets:(id)arg0 ;
-(NSUInteger)indexOfPercentile:(CGFloat)arg0 array:(id)arg1 ;
-(id)initForAnchor:(id)arg0 ;
-(id)initForAnchor:(id)arg0 anchorModelDataStoreWrapper:(id)arg1 ;
-(id)trainPhase3ForCandidate:(id)arg0 ;


@end


#endif