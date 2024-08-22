// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMSHORTCUTRESPONSECOMMAND_H
#define CDMSHORTCUTRESPONSECOMMAND_H

@class NSArray;


#import "CDMBaseCommand.h"

@interface CDMShortcutResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSArray *autoShortcutParses; // ivar: _autoShortcutParses
@property (readonly, nonatomic) NSArray *voiceCommandsUserParses; // ivar: _voiceCommandsUserParses


-(id)commandName;
-(id)initWithVoiceCommandUserParses:(id)arg0 autoShortcutParses:(id)arg1 ;


@end


#endif