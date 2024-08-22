// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRCARGUMENTPARSER_H
#define SCRCARGUMENTPARSER_H

@class NSArray, NSMutableArray, NSString;


#import "SCRCArgumentSubcommand.h"

@interface SCRCArgumentParser : SCRCArgumentSubcommand

@property (copy, nonatomic) NSArray *_arguments; // ivar: __arguments
@property (retain, nonatomic) SCRCArgumentSubcommand *_subcommand; // ivar: __subcommand
@property (retain, nonatomic) NSMutableArray *_subcommandArray; // ivar: __subcommandArray
@property (copy, nonatomic) NSString *appName; // ivar: _appName
@property (nonatomic) BOOL isLaunchedAtLogin; // ivar: _isLaunchedAtLogin


+(id)commandPath;
+(id)processIdentifier;
+(id)versionString;
-(BOOL)parse;
-(id)_displayHelp:(id)arg0 ;
-(id)_displayVersion:(id)arg0 ;
-(id)initWithArgc:(int)arg0 argv:(*char *)arg1 ;
-(id)setRunningAtStartup:(id)arg0 ;
-(int)run;
-(void)addSubcommand:(id)arg0 ;
-(void)stop;


@end


#endif