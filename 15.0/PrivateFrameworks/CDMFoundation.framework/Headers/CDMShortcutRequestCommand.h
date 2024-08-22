// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMSHORTCUTREQUESTCOMMAND_H
#define CDMSHORTCUTREQUESTCOMMAND_H

@class SIRINLUEXTERNALTurnContext, NSArray, SIRINLUINTERNALTokenChain;


#import "CDMBaseCommand.h"

@interface CDMShortcutRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUEXTERNALTurnContext *currentTurnContext; // ivar: _currentTurnContext
@property (readonly, nonatomic) NSArray *matchingSpans; // ivar: _matchingSpans
@property (readonly, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // ivar: _tokenChain


-(id)commandName;
-(id)initWithMatchingSpans:(id)arg0 tokenChain:(id)arg1 currentTurnContext:(id)arg2 ;


@end


#endif