// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMPLUMRESPONSECOMMAND_H
#define CDMPLUMRESPONSECOMMAND_H

@class NSArray;


#import "CDMBaseCommand.h"

@interface CDMPlumResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSArray *plumSpans; // ivar: _plumSpans


-(id)commandName;
-(id)initWithPlumSpans:(id)arg0 ;


@end


#endif