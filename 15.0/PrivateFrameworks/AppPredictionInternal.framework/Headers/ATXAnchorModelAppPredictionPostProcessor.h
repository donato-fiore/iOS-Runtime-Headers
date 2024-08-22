// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELAPPPREDICTIONPOSTPROCESSOR_H
#define ATXANCHORMODELAPPPREDICTIONPOSTPROCESSOR_H


#import <Foundation/Foundation.h>

#import "ATXAnchorModelPrediction.h"
#import "ATXAnchorModelDataStoreWrapper.h"
#import "ATXAppPredictionBlacklist.h"

@interface ATXAnchorModelAppPredictionPostProcessor : NSObject {
    ATXAnchorModelPrediction *_anchorModelPrediction;
    ATXAnchorModelDataStoreWrapper *_storeWrapper;
    ATXAppPredictionBlacklist *_blacklist;
}




-(BOOL)shouldPredictAnchorModelAppPrediction;
-(id)initWithAnchorModelPrediction:(id)arg0 ;
-(id)initWithAnchorModelPrediction:(id)arg0 blacklist:(id)arg1 ;


@end


#endif