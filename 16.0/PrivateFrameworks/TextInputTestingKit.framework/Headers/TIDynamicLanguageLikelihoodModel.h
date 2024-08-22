// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIDYNAMICLANGUAGELIKELIHOODMODEL_H
#define TIDYNAMICLANGUAGELIKELIHOODMODEL_H

@class NSString, NSLinguisticTagger;
@protocol TILanguageLikelihoodModeling;

#import <Foundation/Foundation.h>


@interface TIDynamicLanguageLikelihoodModel : NSObject <TILanguageLikelihoodModeling>

 {
    map<std::string, long, std::less<std::string>, std::allocator<std::pair<const std::string, long>>> m_counts_for_language;
    NSInteger m_total_counts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLinguisticTagger *linguisticTagger; // ivar: _linguisticTagger
@property (readonly) Class superclass;


-(CGFloat)lastOfflineAdaptationTimeForApp:(id)arg0 ;
-(NSUInteger)emojiUsageCountForApp:(id)arg0 lastEmojiCountUpdateTime:(*CGFloat)arg1 ;
-(float)_priorProbabilityForLanguage:(*void)arg0 ;
-(id)init;
-(id)rankedLanguagesForRecipient:(id)arg0 ;
-(void)addEvidence:(id)arg0 forRecipient:(id)arg1 language:(id)arg2 ;
-(void)addEvidence:(id)arg0 timestamp:(CGFloat)arg1 adaptationType:(int)arg2 forRecipient:(id)arg3 app:(id)arg4 language:(id)arg5 ;
-(void)priorProbabilityForLanguages:(id)arg0 recipient:(id)arg1 handler:(id)arg2 ;


@end


#endif