// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMPROVIDERBRIDGEFACTORY_H
#define KMPROVIDERBRIDGEFACTORY_H


#import <Foundation/Foundation.h>


@interface KMProviderBridgeFactory : NSObject



-(id)bridgeForOriginAppId:(id)arg0 ;
-(id)bridgeForOriginAppId:(id)arg0 languageCode:(id)arg1 ;
-(id)globalTermMultiDatasetBridgeWithModifiedOriginAppIds:(id)arg0 deletedOriginAppIds:(id)arg1 languageCode:(id)arg2 ;
-(id)intentVocabularyMultiDatasetBridge;


@end


#endif