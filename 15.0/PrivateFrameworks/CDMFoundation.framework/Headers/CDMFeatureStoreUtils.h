// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMFEATURESTOREUTILS_H
#define CDMFEATURESTOREUTILS_H


#import <Foundation/Foundation.h>


@interface CDMFeatureStoreUtils : NSObject



+(BOOL)insertJsonStringToFeatureStore:(id)arg0 interactionId:(id)arg1 streamId:(id)arg2 error:(*id)arg3 ;
+(BOOL)insertRequestToFeatureStore:(id)arg0 ;
+(BOOL)insertResponseToFeatureStore:(id)arg0 ;
+(BOOL)insertSNLCRequestToFeatureStore:(id)arg0 interactionId:(id)arg1 error:(*id)arg2 ;
+(BOOL)insertSNLCResponseToFeatureStore:(id)arg0 interactionId:(id)arg1 error:(*id)arg2 ;
+(BOOL)insertSpanMatchResponseToFeatureStore:(id)arg0 interactionId:(id)arg1 error:(*id)arg2 ;


@end


#endif