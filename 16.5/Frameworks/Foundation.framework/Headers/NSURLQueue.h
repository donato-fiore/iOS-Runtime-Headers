// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLQUEUE_H
#define NSURLQUEUE_H


#import <Foundation/Foundation.h>

#import "NSURLQueueNode.h"

@interface NSURLQueue : NSObject {
    NSUInteger count;
    NSURLQueueNode *head;
    NSURLQueueNode *tail;
    id *monitor;
    BOOL waitOnTake;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}




+(id)newNode;
-(BOOL)isEmpty;
-(BOOL)remove:(id)arg0 ;
-(BOOL)waitOnTake;
-(NSInteger)indexOf:(id)arg0 ;
-(NSUInteger)count;
-(id)init;
-(id)peek;
-(id)peekAt:(NSUInteger)arg0 ;
-(id)take;
-(void)clear;
-(void)dealloc;
-(void)put:(id)arg0 ;
-(void)setWaitOnTake:(BOOL)arg0 ;


@end


#endif