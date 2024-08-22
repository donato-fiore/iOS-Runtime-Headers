// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASARGSUBCOMMAND_H
#define _PASARGSUBCOMMAND_H

@class NSString, NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _PASArgSubcommand : NSObject

@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly, copy, nonatomic) NSString *helpDescription; // ivar: _helpDescription
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *registeredOptions; // ivar: _registeredOptions
@property (retain, nonatomic) NSMutableSet *requiredOptions; // ivar: _requiredOptions


// +(id)simpleSubcommandWithHelpGenerator:(id)arg0 name:(unk)arg1 help:(id)arg2 handler:(id)arg3  ;
+(id)subcommandWithName:(id)arg0 help:(id)arg1 handler:(id)arg2 ;
-(id)customUsageHelpWithUsageOverride:(id)arg0 positionalArgString:(id)arg1 optionHelpOverride:(id)arg2 additionalHelpText:(id)arg3 ;
-(id)description;
-(id)initWithName:(id)arg0 help:(id)arg1 handler:(id)arg2 ;
-(id)naiveUsageHelpWithPositionalArgString:(id)arg0 ;
-(id)optionLongHelp;
-(id)optionShortHelp;
-(void)registerOption:(id)arg0 ;


@end


#endif