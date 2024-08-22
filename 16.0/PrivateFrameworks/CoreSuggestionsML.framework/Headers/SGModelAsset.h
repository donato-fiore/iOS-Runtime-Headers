// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMODELASSET_H
#define SGMODELASSET_H


#import <Foundation/Foundation.h>


@interface SGModelAsset : NSObject



+(id)_assetWithName:(id)arg0 andLoadBlock:(id)arg1 ;
+(id)asset;
+(id)dictionaryWithPlistFilename:(id)arg0 ;
+(id)dpRecorderRules;
+(id)mappings;
+(id)metricsConfig;
+(id)nameDetectorRules;
+(id)quickResponses;
+(id)quickResponsesVocab;
+(id)rules;
+(id)signatureRules;
+(id)vocabWithTrieFilename:(id)arg0 ;
+(void)_invokeOnUpdateBlock;
+(void)_reset;
+(void)registerOnUpdateBlock:(id)arg0 ;


@end


#endif