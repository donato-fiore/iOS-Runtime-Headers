// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERACTIONPREDICTIONSINGLEITEMGROUP_H
#define HMDUSERACTIONPREDICTIONSINGLEITEMGROUP_H

@class HMFObject, NSString, NSUUID, HMUserActionPrediction, NSArray;
@protocol HMDUserActionPredictionGroup;



@interface HMDUserActionPredictionSingleItemGroup : HMFObject <HMDUserActionPredictionGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSUUID *groupUUID;
@property (readonly) NSUInteger hash;
@property (retain) HMUserActionPrediction *prediction; // ivar: _prediction
@property (readonly) CGFloat predictionScore;
@property (readonly, copy) NSArray *predictions;
@property (readonly) Class superclass;
@property (readonly, copy) HMUserActionPrediction *userActionRepresentation;


-(BOOL)containsPrediction:(id)arg0 ;
-(BOOL)shouldContainPrediction:(id)arg0 ;
-(id)initWithPrediction:(id)arg0 ;
-(void)updateWithPrediction:(id)arg0 ;


@end


#endif