// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMUSERACTIONPREDICTIONCONTROLLER_H
#define HMUSERACTIONPREDICTIONCONTROLLER_H

@class NSString, NSUUID;
@protocol HMUserActionPredictionSubscriber, HMFLogging, HMUserActionPredictionControllerDelegate;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMUserActionPredictionProvider.h"

@interface HMUserActionPredictionController : NSObject <HMUserActionPredictionSubscriber, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (retain) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMUserActionPredictionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (readonly) HMUserActionPredictionProvider *predictionProvider; // ivar: _predictionProvider
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHomeIdentifier:(id)arg0 predictionProvider:(id)arg1 ;
-(id)predictions;
-(void)configureWithContext:(id)arg0 ;
-(void)didUpdatePredictions:(id)arg0 forHomeWithIdentifier:(id)arg1 ;
-(void)fetchPredictionsWithCompletion:(id)arg0 ;


@end


#endif