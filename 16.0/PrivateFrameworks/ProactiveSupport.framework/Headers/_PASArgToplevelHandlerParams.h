// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASARGTOPLEVELHANDLERPARAMS_H
#define _PASARGTOPLEVELHANDLERPARAMS_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "_PASArgParser.h"

@interface _PASArgToplevelHandlerParams : NSObject

@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) _PASArgParser *parser; // ivar: _parser
@property (readonly, nonatomic) NSArray *positionalArguments; // ivar: _positionalArguments


-(id)initWithParser:(id)arg0 options:(id)arg1 positionalArguments:(id)arg2 ;


@end


#endif