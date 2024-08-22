// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMLISTGRAPHSRESPONSECOMMAND_H
#define CDMLISTGRAPHSRESPONSECOMMAND_H

@class NSString, NSOrderedSet;


#import "CDMBaseCommand.h"

@interface CDMListGraphsResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *activeGraphName; // ivar: _activeGraphName
@property (readonly, nonatomic) NSOrderedSet *availableServiceGraphs; // ivar: _availableServiceGraphs


-(id)commandName;
-(id)initWithGraphs:(id)arg0 activeGraphName:(id)arg1 ;


@end


#endif