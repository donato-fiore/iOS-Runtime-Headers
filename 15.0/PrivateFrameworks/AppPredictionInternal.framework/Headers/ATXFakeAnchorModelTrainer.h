// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXFAKEANCHORMODELTRAINER_H
#define ATXFAKEANCHORMODELTRAINER_H

@class NSMutableDictionary, NSString, NSMutableArray;
@protocol ATXAnchorModelTrainerProtocol;

#import <Foundation/Foundation.h>


@interface ATXFakeAnchorModelTrainer : NSObject <ATXAnchorModelTrainerProtocol>

 {
    NSMutableDictionary *_trainingResultsForAnchor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL trained; // ivar: _trained
@property (readonly, nonatomic) NSMutableArray *trainedAnchors; // ivar: _trainedAnchors


-(id)init;
-(id)trainAnchorModel:(id)arg0 ;
-(void)setTrainingResultsForAnchor:(id)arg0 results:(id)arg1 ;
-(void)train;


@end


#endif