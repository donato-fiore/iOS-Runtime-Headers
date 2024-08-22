// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SHELLLAUNCHER_H
#define _SHELLLAUNCHER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _ShellLauncher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _launching;
    NSMutableArray *_launchCompletions;
}




-(id)init;
-(void)_queue_completeWithPid:(int)arg0 error:(id)arg1 ;
-(void)_queue_launchWithCompletion:(id)arg0 ;
-(void)_queue_launchWithRetries:(int)arg0 ;
-(void)launchWithCompletion:(id)arg0 ;


@end


#endif