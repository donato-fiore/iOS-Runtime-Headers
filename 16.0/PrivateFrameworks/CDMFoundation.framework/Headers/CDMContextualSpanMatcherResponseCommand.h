// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMCONTEXTUALSPANMATCHERRESPONSECOMMAND_H
#define CDMCONTEXTUALSPANMATCHERRESPONSECOMMAND_H

@class SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherResponse;


#import "CDMBaseCommand.h"

@interface CDMContextualSpanMatcherResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherResponse *contextualSpanMatcherResponse; // ivar: _contextualSpanMatcherResponse


-(id)commandName;
-(id)initWithContextualSpanMatcherResponse:(id)arg0 ;
-(id)initWithMentions:(id)arg0 ;


@end


#endif