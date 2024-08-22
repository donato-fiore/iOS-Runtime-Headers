// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALMIGRATIONTOOLARGUMENTPARSER_H
#define CALMIGRATIONTOOLARGUMENTPARSER_H


#import <Foundation/Foundation.h>


@interface CalMigrationToolArgumentParser : NSObject



+(NSUInteger)_argumentFromCommandLineArgument:(id)arg0 ;
+(id)_argumentParseErrorWithCode:(NSUInteger)arg0 argument:(id)arg1 ;
+(id)commandLineArgumentsForToolOptions:(id)arg0 ;
+(id)parseOptionsFromCommandLineArguments:(id)arg0 printUsage:(*BOOL)arg1 error:(*id)arg2 ;
+(id)usageStringWithToolPath:(id)arg0 parseError:(id)arg1 ;
+(void)_appendToArguments:(id)arg0 ifNeededForTriStateOption:(NSInteger)arg1 forceEnableArgument:(id)arg2 forceDisableArgument:(id)arg3 ;


@end


#endif