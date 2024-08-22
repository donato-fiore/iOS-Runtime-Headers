// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXACTIONVALUATION_H
#define ATXACTIONVALUATION_H


#import <Foundation/Foundation.h>

#import "ATXIntentMetadataCache.h"

@interface ATXActionValuation : NSObject {
    ATXIntentMetadataCache *_intentCache;
}




-(BOOL)shouldPredictCreateEventIntent:(id)arg0 ;
-(BOOL)shouldPredictIntent:(id)arg0 ;
-(BOOL)shouldPredictRequestRideIntent:(id)arg0 ;
-(BOOL)shouldPredictSendMessageIntent:(id)arg0 ;
-(id)getCurrentLocation;
-(id)init;
-(id)initWithIntentCache:(id)arg0 ;
-(void)scoreActions:(id)arg0 scoreLogger:(id)arg1 consumerSubType:(unsigned char)arg2 ;
-(void)setFeatureValuesAndFilterPredictableActions:(id)arg0 actionStatistics:(id)arg1 ;


@end


#endif