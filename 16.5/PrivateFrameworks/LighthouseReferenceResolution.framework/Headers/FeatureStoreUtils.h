// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FEATURESTOREUTILS_H
#define FEATURESTOREUTILS_H


#import <Foundation/Foundation.h>


@interface FeatureStoreUtils : NSObject



+(BOOL)insertCurareEvaluationToFeatureStore:(id)arg0 streamId:(id)arg1 interactionId:(id)arg2 ;
+(BOOL)insertDictionaryToFeatureStore:(id)arg0 streamId:(id)arg1 interactionId:(id)arg2 ;
+(id)extractJSONStringFromFSFFeature:(id)arg0 ;
+(id)getEventsFromStreamName:(id)arg0 ;
+(id)getEventsFromStreamName:(id)arg0 starting:(id)arg1 ending:(id)arg2 ;
-(id)init;


@end


#endif