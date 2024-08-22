// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMSETACTIVEGRAPHREQUESTCOMMAND_H
#define CDMSETACTIVEGRAPHREQUESTCOMMAND_H

@class NSString;


#import "CDMBaseCommand.h"

@interface CDMSetActiveGraphRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *activeGraphName; // ivar: _activeGraphName


-(id)commandName;
-(id)initWithActiveGraphName:(id)arg0 ;


@end


#endif