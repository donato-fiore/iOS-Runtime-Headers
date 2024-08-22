// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMUSERACTIONPREDICTIONTRANSFORMER_H
#define HMUSERACTIONPREDICTIONTRANSFORMER_H

@class NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>


@interface HMUserActionPredictionTransformer : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isValidPredictionForAccessory:(id)arg0 targetServiceIdentifier:(id)arg1 ;
-(id)matchingAccessoryForDuetAccessoryPrediction:(id)arg0 home:(id)arg1 ;
-(id)matchingServiceForDuetAccessoryPrediction:(id)arg0 onAccessory:(id)arg1 home:(id)arg2 ;
-(id)predictionForDuetAccessoryPrediction:(id)arg0 home:(id)arg1 ;
-(id)predictionForDuetScenePrediction:(id)arg0 home:(id)arg1 ;
-(id)predictionWithSameTargetGroupAsPrediction:(id)arg0 inPredictions:(id)arg1 ;
-(id)predictionsWithDuetPredictions:(id)arg0 forHome:(id)arg1 ;


@end


#endif