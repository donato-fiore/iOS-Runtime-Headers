// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMFEATURESTOREUTILS_H
#define CDMFEATURESTOREUTILS_H


#import <Foundation/Foundation.h>


@interface CDMFeatureStoreUtils : NSObject



+(BOOL)checkFeatureStoreEnabledForExternalBuilds:(id)arg0 ;
+(BOOL)insertJsonStringToFeatureStore:(id)arg0 interactionId:(id)arg1 streamId:(id)arg2 ;
+(BOOL)insertMDRequestToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertMDResponseToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertMRRequestToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertMRResponseToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertNLv4ParserRequestToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertNLv4ParserResponseToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertPSCRequestToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertPSCResponseToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertRequestToFeatureStoreAsJson:(id)arg0 ;
+(BOOL)insertResponseToFeatureStoreAsJson:(id)arg0 ;
+(BOOL)insertSNLCRequestToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertSNLCResponseToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertSpanMatchResponseToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertTokenizerResponseToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertUaaPParserRequestToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)insertUaaPParserResponseToFeatureStore:(id)arg0 interactionId:(id)arg1 ;
+(BOOL)platformSupportedAndEnabled;
+(id)allowedFSMessagesOnExternalBuilds;


@end


#endif