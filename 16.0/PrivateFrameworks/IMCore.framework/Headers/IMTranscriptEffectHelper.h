// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMTRANSCRIPTEFFECTHELPER_H
#define IMTRANSCRIPTEFFECTHELPER_H


#import <Foundation/Foundation.h>


@interface IMTranscriptEffectHelper : NSObject



+(BOOL)effectIdentifierIsFullScreenMoment:(id)arg0 ;
+(BOOL)effectIdentifierIsImpactEffect:(id)arg0 ;
+(BOOL)identifierIsEffectIdentifier:(id)arg0 ;
+(BOOL)isFeatureEnabled;
+(BOOL)shouldShowReplayButtonForEffectIdentifier:(id)arg0 ;
+(id)allEffectIdentifiers;
+(id)findIdentifierByMathcingPartialSufix:(id)arg0 ;
+(id)identifierNameMap;
+(id)nameForEffectIdentifier:(id)arg0 ;
+(id)replayStringForEffectIdentifier:(id)arg0 ;
+(id)replayStringMap;
+(id)sendWithEffectStringMap;
+(id)sendWithStringForEffectIdentifier:(id)arg0 ;
+(void)setFeatureEnabled:(BOOL)arg0 ;


@end


#endif