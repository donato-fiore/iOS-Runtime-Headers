// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TILANGUAGELIKELIHOODMODEL_H
#define _TILANGUAGELIKELIHOODMODEL_H

@class NSString;
@protocol TILanguageLikelihoodModeling;

#import <Foundation/Foundation.h>


@interface _TILanguageLikelihoodModel : NSObject <TILanguageLikelihoodModeling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void languageLikelihoodModelRef; // ivar: _languageLikelihoodModelRef
@property (readonly) Class superclass;


+(id)sharedLanguageLikelihoodModel;
+(id)singletonInstance;
+(void)setSharedLanguageLikelihoodModel:(id)arg0 ;
-(CGFloat)lastOfflineAdaptationTimeForApp:(id)arg0 ;
-(NSUInteger)emojiUsageCountForApp:(id)arg0 lastEmojiCountUpdateTime:(*CGFloat)arg1 ;
-(id)init;
-(id)rankedLanguagesForRecipient:(id)arg0 ;
-(void)addEvidence:(id)arg0 timestamp:(CGFloat)arg1 adaptationType:(int)arg2 forRecipient:(id)arg3 app:(id)arg4 language:(id)arg5 ;
-(void)priorProbabilityForLanguages:(id)arg0 recipient:(id)arg1 handler:(id)arg2 ;


@end


#endif