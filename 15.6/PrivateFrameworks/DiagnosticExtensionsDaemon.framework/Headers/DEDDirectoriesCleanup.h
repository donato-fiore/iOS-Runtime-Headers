// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDDIRECTORIESCLEANUP_H
#define DEDDIRECTORIESCLEANUP_H


#import <Foundation/Foundation.h>


@interface DEDDirectoriesCleanup : NSObject



+(BOOL)isDryRun;
+(BOOL)shouldRun;
+(void)didRun;
+(void)run;


@end


#endif