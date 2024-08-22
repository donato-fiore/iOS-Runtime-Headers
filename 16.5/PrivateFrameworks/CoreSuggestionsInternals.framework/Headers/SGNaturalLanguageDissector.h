// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGNATURALLANGUAGEDISSECTOR_H
#define SGNATURALLANGUAGEDISSECTOR_H

@class NSMutableDictionary, NSString;
@protocol SGMailMessageProcessing, SGTextMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGNaturalLanguageDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

 {
    NSMutableDictionary *_conversations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)allowNaturalLanguageDissector;
+(id)_personForCSPerson:(id)arg0 ;
+(id)ipsosMessageWithMailMessage:(id)arg0 store:(id)arg1 ;
+(id)ipsosMessageWithTextMessage:(id)arg0 store:(id)arg1 ;
-(BOOL)_shouldProcessMessage:(id)arg0 entity:(id)arg1 ;
-(id)conversationWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithoutSharedInstance;
-(void)_tagNaturalLanguageEnrichmentsForEntity:(id)arg0 ;
-(void)addEnrichmentForEvents:(id)arg0 forMessage:(id)arg1 toEntity:(id)arg2 ;
-(void)clearConversations;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectTextMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif