// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASARGPARSER_H
#define _PASARGPARSER_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _PASArgParser : NSObject

@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) NSMutableArray *registeredOptions; // ivar: _registeredOptions
@property (readonly, nonatomic) NSMutableArray *registeredSubcommands; // ivar: _registeredSubcommands
@property (retain, nonatomic) NSMutableSet *requiredOptions; // ivar: _requiredOptions


+(id)boolValueForArgument:(id)arg0 error:(*id)arg1 ;
+(id)enumValueForArgument:(id)arg0 withMapping:(id)arg1 error:(*id)arg2 ;
+(id)numberValueForArgument:(id)arg0 error:(*id)arg1 ;
+(id)parserWithHandler:(id)arg0 ;
// +(id)simpleParserWithHelpGenerator:(id)arg0 version:(unk)arg1 handler:(id)arg2  ;
-(id)_argumentParseTemplate:(id)arg0 longArgs:(struct option **)arg1 ;
-(id)description;
-(id)initWithHandler:(id)arg0 ;
-(id)naiveUsageHelpWithPositionalArgString:(id)arg0 ;
-(id)optionLongHelp;
-(id)optionShortHelp;
-(id)subcommandLongHelp;
-(int)invokeHandlerWithArguments:(*char *)arg0 count:(int)arg1 parseErrorCode:(int)arg2 error:(*id)arg3 ;
-(void)registerOption:(id)arg0 ;
-(void)registerSubcommand:(id)arg0 ;


@end


#endif