// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMUSERACTIONPREDICTIONCONTROLLER_FRAMEWORKIMPL_H
#define HMUSERACTIONPREDICTIONCONTROLLER_FRAMEWORKIMPL_H

@class NSString, NSUUID;
@protocol HMUserActionPredictionSubscriber, HMFLogging;


#import "HMUserActionPredictionController.h"
#import "HMUserActionPredictionProvider.h"

@interface HMUserActionPredictionController_FrameworkImpl : HMUserActionPredictionController <HMUserActionPredictionSubscriber, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (readonly) HMUserActionPredictionProvider *predictionProvider; // ivar: _predictionProvider
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHomeIdentifier:(id)arg0 predictionProvider:(id)arg1 ;
-(id)predictions;
-(void)didUpdatePredictions:(id)arg0 forHomeWithIdentifier:(id)arg1 ;
-(void)fetchPredictionsWithCompletion:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif