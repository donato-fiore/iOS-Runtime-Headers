// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMSHORTCUTSERVICE_H
#define CDMSHORTCUTSERVICE_H



#import "CDMDAGBaseService.h"

@interface CDMShortcutService : CDMDAGBaseService



-(BOOL)shouldSpanComboProduceParse:(id)arg0 prefixSpans:(id)arg1 suffixSpans:(id)arg2 tokenChain:(id)arg3 ;
-(id)buildParseWithDelegatedUserDialogAct;
-(id)filterExactMatchVoiceCommandSpans:(id)arg0 ;
-(id)filterVoiceCommandPrefixMatchingSpans:(id)arg0 voiceCommandSpan:(id)arg1 ;
-(id)filterVoiceCommandSuffixMatchingSpans:(id)arg0 voiceCommandSpan:(id)arg1 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)handleVoiceCommandFollowUp:(id)arg0 ;
-(id)setup:(id)arg0 ;


@end


#endif