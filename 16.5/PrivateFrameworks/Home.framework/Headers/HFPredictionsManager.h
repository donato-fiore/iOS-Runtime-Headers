// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFPREDICTIONSMANAGER_H
#define HFPREDICTIONSMANAGER_H

@class NSString, NSArray, HMHome, NAFuture;
@protocol HMUserActionPredictionControllerDelegate, HFPredictionsManagerDelegate, OS_dispatch_queue, HFPredictionsController;

#import <Foundation/Foundation.h>


@interface HFPredictionsManager : NSObject <HMUserActionPredictionControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HFPredictionsManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *filterTypes; // ivar: _filterTypes
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NAFuture *initialPredictionUpdateFuture; // ivar: _initialPredictionUpdateFuture
@property (nonatomic) NSUInteger predictionLimit; // ivar: _predictionLimit
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *predictionQueue; // ivar: _predictionQueue
@property (retain, nonatomic) NSArray *predictions; // ivar: _predictions
@property (retain, nonatomic) NSObject<HFPredictionsController> *predictionsController; // ivar: _predictionsController
@property (readonly) Class superclass;
@property (nonatomic) BOOL wasQueriedForInFlightPredictions; // ivar: _wasQueriedForInFlightPredictions


-(id)_homeKitObjectForAccessoryUUID:(id)arg0 ;
-(id)_homeKitObjectForMediaSystemUUID:(id)arg0 ;
-(id)_homeKitObjectForSceneUUID:(id)arg0 ;
-(id)_homeKitObjectForServiceGroupUUID:(id)arg0 ;
-(id)_homeKitObjectForServiceUUID:(id)arg0 ;
-(id)_processUserActionPredictions:(id)arg0 ;
-(id)fetchUserActionPredictions;
-(id)fetchUserActionPredictionsAndWaitForInitialUpdate:(BOOL)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 predictionsController:(id)arg1 delegate:(id)arg2 predictionLimit:(NSUInteger)arg3 ;
-(id)initWithHome:(id)arg0 predictionsController:(id)arg1 delegate:(id)arg2 predictionLimit:(NSUInteger)arg3 filterTypes:(id)arg4 ;
-(void)_queryUserActionPredictions;
-(void)_queryUserActionPredictionsOnQueue;
-(void)userActionPredictionController:(id)arg0 didUpdatePredictions:(id)arg1 ;


@end


#endif