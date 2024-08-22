// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMSHORTCUTSERVICE_H
#define CDMSHORTCUTSERVICE_H

@class NSArray;


#import "CDMDAGBaseService.h"

@interface CDMShortcutService : CDMDAGBaseService

@property (retain, nonatomic) NSArray *denyList; // ivar: _denyList


+(BOOL)isAssetRequired;
+(id)getAssetFolderNamesByTrialFactorNames;
+(id)voiceCommandPredicate;
-(BOOL)hasAutoShortcutIdentifier:(id)arg0 ;
-(BOOL)isPhrase:(id)arg0 inDenyList:(id)arg1 ;
-(BOOL)shouldSpanComboProduceParse:(id)arg0 prefixSpans:(id)arg1 suffixSpans:(id)arg2 tokenChain:(id)arg3 ;
-(id)buildParseWithDelegatedUserDialogAct;
-(id)extractShortcutDataFromSpan:(id)arg0 ;
-(id)filterExactMatchVoiceCommandSpans:(id)arg0 ;
-(id)filterVoiceCommandPrefixMatchingSpans:(id)arg0 voiceCommandSpan:(id)arg1 ;
-(id)filterVoiceCommandSuffixMatchingSpans:(id)arg0 voiceCommandSpan:(id)arg1 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)handleVoiceCommandFollowUp:(id)arg0 locale:(id)arg1 ;
-(id)loadDenyListFromBundle:(id)arg0 languageCode:(id)arg1 ;
-(id)setup:(id)arg0 ;
-(id)validateDenyListArray:(id)arg0 ;


@end


#endif