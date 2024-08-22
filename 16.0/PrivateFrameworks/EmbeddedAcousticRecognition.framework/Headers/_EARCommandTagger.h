// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARCOMMANDTAGGER_H
#define _EARCOMMANDTAGGER_H


#import <Foundation/Foundation.h>


@interface _EARCommandTagger : NSObject {
    unique_ptr<quasar::CommandTagger, std::default_delete<quasar::CommandTagger>> _tagger;
}




+(void)initialize;
-(BOOL)isCommandPhraseTag:(id)arg0 ;
-(BOOL)isParameterTag:(id)arg0 ;
-(id)commandPhraseTagForIndex:(NSInteger)arg0 ;
-(id)commandTaggingFromRecognitionResult:(id)arg0 activeCommands:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 usage:(NSInteger)arg1 ;
-(id)parameterTagForIndex:(NSInteger)arg0 ;


@end


#endif