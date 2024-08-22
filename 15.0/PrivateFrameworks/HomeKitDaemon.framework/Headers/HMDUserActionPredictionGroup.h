// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERACTIONPREDICTIONGROUP_H
#define HMDUSERACTIONPREDICTIONGROUP_H

@class HMFObject, NSString, NSUUID, NSMutableArray, NSArray, HMUserActionPrediction;
@protocol HMDUserActionPredictionGroup;



@interface HMDUserActionPredictionGroup : HMFObject <HMDUserActionPredictionGroup>

 {
    CGFloat _maxScore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSUUID *groupUUID;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSMutableArray *mutablePredictions; // ivar: _mutablePredictions
@property (readonly) CGFloat predictionScore;
@property (readonly, copy) NSArray *predictions;
@property (readonly) Class superclass;
@property (readonly, copy) HMUserActionPrediction *userActionRepresentation;


-(BOOL)containsPrediction:(id)arg0 ;
-(BOOL)shouldContainPrediction:(id)arg0 ;
-(NSUInteger)frameworkPredictionTypeForGroup;
-(NSUInteger)targetGroupType;
-(id)initWithPredictions:(id)arg0 ;
-(void)_updateMaxScore;
-(void)updateWithPrediction:(id)arg0 ;


@end


#endif