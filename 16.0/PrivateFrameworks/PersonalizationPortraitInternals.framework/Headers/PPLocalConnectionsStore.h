// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPLOCALCONNECTIONSSTORE_H
#define PPLOCALCONNECTIONSSTORE_H

@class NSCache;
@protocol PPFeedbackAccepting, PPFeedbackProcessing;

#import <Foundation/Foundation.h>

#import "PPConnectionsPredictionStore.h"
#import "PPConnectionsDonationStore.h"

@interface PPLocalConnectionsStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing>

 {
    PPConnectionsPredictionStore *_predictionStore;
    PPConnectionsDonationStore *_donationStore;
    NSCache *_identifierToSourceBundleMap;
    NSCache *_nameToIdentifierMap;
}




+(id)defaultStore;
-(id)init;
-(id)initWithPredictionStore:(id)arg0 donationStore:(id)arg1 ;
-(id)recentLocationDonationsSinceDate:(id)arg0 error:(*id)arg1 ;
-(id)recentLocationsForConsumer:(NSUInteger)arg0 criteria:(id)arg1 limit:(NSUInteger)arg2 explanationSet:(id)arg3 timeout:(NSUInteger)arg4 error:(*id)arg5 ;
-(void)processFeedback:(id)arg0 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif