// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKDEBOUNCINGQUEUE_H
#define WLKDEBOUNCINGQUEUE_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface WLKDebouncingQueue : NSObject

@property unsigned int delay; // ivar: _delay
@property (retain, nonatomic) NSOperationQueue *queue; // ivar: _queue


-(id)init;
-(void)addOperationWithBlock:(id)arg0 ;


@end


#endif