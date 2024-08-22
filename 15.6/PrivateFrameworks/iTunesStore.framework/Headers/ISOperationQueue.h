// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISOPERATIONQUEUE_H
#define ISOPERATIONQUEUE_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}


@property BOOL adjustsMaxConcurrentOperationCount;


+(id)mainQueue;
-(NSInteger)maxConcurrentOperationCount;
-(NSInteger)operationCount;
-(id)init;
-(id)name;
-(id)operations;
-(void)addOperation:(id)arg0 ;
-(void)addOperations:(id)arg0 waitUntilFinished:(BOOL)arg1 ;
-(void)cancelAllOperations;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setMaxConcurrentOperationCount:(NSInteger)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setSuspended:(BOOL)arg0 ;


@end


#endif