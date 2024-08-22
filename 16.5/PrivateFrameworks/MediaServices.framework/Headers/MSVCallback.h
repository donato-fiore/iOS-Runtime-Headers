// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVCALLBACK_H
#define MSVCALLBACK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSVCallback : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)callbackWithQueue:(id)arg0 block:(id)arg1 ;
-(void)invoke;
-(void)invokeWithObject:(id)arg0 ;


@end


#endif