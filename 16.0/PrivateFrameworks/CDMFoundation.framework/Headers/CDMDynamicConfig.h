// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMDYNAMICCONFIG_H
#define CDMDYNAMICCONFIG_H

@class NSString, NSDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CDMEmbeddingConfigs.h"

@interface CDMDynamicConfig : NSObject <NSCopying>

 {
    CDMEmbeddingConfigs *_embeddingConfigs;
}


@property (readonly, nonatomic) NSString *assetDirPath; // ivar: _assetDirPath
@property (readonly, nonatomic) NSDictionary *assetPaths; // ivar: _assetPaths
@property (readonly, nonatomic) NSString *graphName; // ivar: _graphName
@property (readonly, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) NSArray *overrideContextualSpans; // ivar: _overrideContextualSpans
@property (readonly, nonatomic) NSArray *overrideMentions; // ivar: _overrideMentions
@property (readonly, nonatomic) NSArray *overrideSiriVocabSpans; // ivar: _overrideSiriVocabSpans
@property (readonly, nonatomic) NSString *siriVocabularySandboxId; // ivar: _siriVocabularySandboxId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualWithoutSandboxId:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createCDMEmbeddingConfigs;
-(id)description;
-(id)getAssetForService:(Class)arg0 ;
-(id)getAssetPathForService:(Class)arg0 ;
-(id)getEmbeddingConfigs;
-(id)initWithLanguageCode:(id)arg0 ;
-(id)initWithLanguageCode:(id)arg0 graphName:(id)arg1 sandboxId:(id)arg2 assetDirPath:(id)arg3 ;
-(id)initWithLanguageCode:(id)arg0 graphName:(id)arg1 sandboxId:(id)arg2 assetDirPath:(id)arg3 overrideSiriVocabSpans:(id)arg4 overrideMentions:(id)arg5 overrideContextualSpans:(id)arg6 ;
-(id)initWithLanguageCode:(id)arg0 graphName:(id)arg1 sandboxId:(id)arg2 assetPaths:(id)arg3 ;
-(id)initWithLanguageCode:(id)arg0 graphName:(id)arg1 sandboxId:(id)arg2 assetPaths:(id)arg3 assetDirPath:(id)arg4 overrideSiriVocabSpans:(id)arg5 overrideMentions:(id)arg6 overrideContextualSpans:(id)arg7 ;
-(id)initWithLanguageCode:(id)arg0 graphName:(id)arg1 sandboxId:(id)arg2 assetPaths:(id)arg3 overrideSiriVocabSpans:(id)arg4 overrideMentions:(id)arg5 overrideContextualSpans:(id)arg6 ;


@end


#endif