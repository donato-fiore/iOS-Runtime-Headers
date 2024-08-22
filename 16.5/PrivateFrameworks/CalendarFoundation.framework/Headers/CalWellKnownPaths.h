// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALWELLKNOWNPATHS_H
#define CALWELLKNOWNPATHS_H


#import <Foundation/Foundation.h>


@interface CalWellKnownPaths : NSObject



+(BOOL)checkOrCreatePath:(id)arg0 ;
+(id)calendarFileHandlerPath;
+(id)eventsPendingChangesPath;
+(id)realHomeDirectoryPath;
+(void)initialize;
+(void)resetPaths;


@end


#endif