// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGTOKENIZERMAPPINGTRANSFORMER_H
#define SGTOKENIZERMAPPINGTRANSFORMER_H

@class _PASLazyPurgeableResult, NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGTokenizerMappingTransformer : NSObject <PMLTransformerProtocol>

 {
    _PASLazyPurgeableResult *_tagger;
    BOOL _nameTagging;
    BOOL _trustCoreNLP;
    NSString *_punctuationMapping;
    NSString *_personalNameMapping;
    NSString *_locale;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_purgeableNLTaggerWithNameTagging:(BOOL)arg0 ;
+(id)_purgeableNSLinguisticTaggerWithTagSchemes:(id)arg0 ;
+(id)forLocale:(id)arg0 ;
+(id)forLocale:(id)arg0 tagNames:(BOOL)arg1 personalNameMapping:(id)arg2 punctuationMapping:(id)arg3 ;
+(id)forLocale:(id)arg0 tagNames:(BOOL)arg1 trustCoreNLP:(BOOL)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4 ;
+(id)forLocale:(id)arg0 withPersonalNameMapping:(id)arg1 ;
-(*void)_createOrReuseNLPTagger;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTokenizerMappingTransformer:(id)arg0 ;
-(id)initForLocale:(id)arg0 tagNames:(BOOL)arg1 trustCoreNLP:(BOOL)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;
-(void)transformWithCoreNLP:(id)arg0 block:(id)arg1 ;
-(void)transformWithNLLinguisticTagger:(id)arg0 block:(id)arg1 ;


@end


#endif