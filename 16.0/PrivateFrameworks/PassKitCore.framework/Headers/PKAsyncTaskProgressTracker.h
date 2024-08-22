// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKASYNCTASKPROGRESSTRACKER_H
#define PKASYNCTASKPROGRESSTRACKER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface PKAsyncTaskProgressTracker : NSObject {
    NSMutableSet *_completionHandlers;
}


@property (readonly, nonatomic) NSUInteger status; // ivar: _status


-(id)init;
-(void)_executeCompletionHandlers;
-(void)notifyOnCompletion:(id)arg0 ;
-(void)taskDidComplete;
-(void)taskDidStart;


@end


#endif