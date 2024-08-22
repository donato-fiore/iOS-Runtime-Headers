// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYLOGS_H
#define SYLOGS_H


#import <Foundation/Foundation.h>


@interface SYLogs : NSObject



+(BOOL)shouldDisplaySyncErrorMessage;
+(BOOL)shouldDumpIDSOnSyncError;
+(BOOL)shouldLogBubblesToAggD;
+(id)logFolder;
+(void)initialize;


@end


#endif