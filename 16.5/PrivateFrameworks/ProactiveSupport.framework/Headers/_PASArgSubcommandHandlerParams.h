// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASARGSUBCOMMANDHANDLERPARAMS_H
#define _PASARGSUBCOMMANDHANDLERPARAMS_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "_PASArgSubcommand.h"

@interface _PASArgSubcommandHandlerParams : NSObject

@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) NSArray *positionalArguments; // ivar: _positionalArguments
@property (readonly, nonatomic) _PASArgSubcommand *subcommand; // ivar: _subcommand


-(id)initWithSubcommand:(id)arg0 options:(id)arg1 positionalArguments:(id)arg2 ;


@end


#endif