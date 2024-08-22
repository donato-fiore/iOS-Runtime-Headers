// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TILANGUAGELIKELIHOODMODELSTUB_H
#define TILANGUAGELIKELIHOODMODELSTUB_H

@class NSString;
@protocol TILanguageLikelihoodModeling;

#import <Foundation/Foundation.h>


@interface TILanguageLikelihoodModelStub : NSObject <TILanguageLikelihoodModeling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat emojiLastUsageTime; // ivar: _emojiLastUsageTime
@property (nonatomic) NSUInteger emojiUsageCount; // ivar: _emojiUsageCount
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)lastOfflineAdaptationTimeForApp:(id)arg0 ;
-(NSUInteger)emojiUsageCountForApp:(id)arg0 lastEmojiCountUpdateTime:(*CGFloat)arg1 ;
-(id)rankedLanguagesForRecipient:(id)arg0 ;
-(void)addEvidence:(id)arg0 timestamp:(CGFloat)arg1 adaptationType:(int)arg2 forRecipient:(id)arg3 app:(id)arg4 language:(id)arg5 ;
-(void)priorProbabilityForLanguages:(id)arg0 recipient:(id)arg1 handler:(id)arg2 ;


@end


#endif