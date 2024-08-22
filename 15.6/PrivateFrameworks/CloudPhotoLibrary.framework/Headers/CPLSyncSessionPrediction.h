// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLSYNCSESSIONPREDICTION_H
#define CPLSYNCSESSIONPREDICTION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CPLSyncSessionPrediction : NSObject {
    NSDictionary *_predictions;
}




-(BOOL)_oldPredictionWithKey:(char *)arg0 inCriteria:(id)arg1 matchesPredictionWithKey:(id)arg2 ;
-(BOOL)matchesXPCActivity:(id)arg0 ;
-(BOOL)matchesXPCActivityCriteria:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPredictedValuesAndTypes:(id)arg0 ;
-(id)predictedValueForType:(id)arg0 ;
-(id)redactedDescription;
-(id)updatedPredictionWithValuesAndTypes:(id)arg0 ;
-(void)updateXPCActivity:(id)arg0 ;
-(void)updateXPCActivityCriteria:(id)arg0 ;


@end


#endif