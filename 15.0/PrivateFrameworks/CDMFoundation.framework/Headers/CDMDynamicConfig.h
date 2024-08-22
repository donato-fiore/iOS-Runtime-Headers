// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMDYNAMICCONFIG_H
#define CDMDYNAMICCONFIG_H

@class NSDictionary, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CDMDynamicConfig : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *assetPaths; // ivar: _assetPaths
@property (readonly, nonatomic) NSString *cachePath; // ivar: _cachePath
@property (readonly, nonatomic) NSString *graphName; // ivar: _graphName
@property (readonly, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) NSArray *overrideSiriVocabSpans; // ivar: _overrideSiriVocabSpans
@property (readonly, nonatomic) NSString *siriVocabularySandboxId; // ivar: _siriVocabularySandboxId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualWithoutSandboxId:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getAssetForService:(Class)arg0 ;
-(id)getAssetPathForService:(Class)arg0 ;
-(id)initWithLanguageCode:(id)arg0 ;
-(id)initWithLanguageCode:(id)arg0 cachePath:(id)arg1 graphName:(id)arg2 assetPaths:(id)arg3 overrideSiriVocabSpans:(id)arg4 ;
-(id)initWithLanguageCode:(id)arg0 cachePath:(id)arg1 graphName:(id)arg2 sandboxId:(id)arg3 assetPaths:(id)arg4 ;
-(id)initWithLanguageCode:(id)arg0 cachePath:(id)arg1 graphName:(id)arg2 sandboxId:(id)arg3 assetPaths:(id)arg4 overrideSiriVocabSpans:(id)arg5 ;


@end


#endif