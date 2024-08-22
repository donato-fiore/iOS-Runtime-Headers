// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRTELEVISIONCONTROLLERBLOCKCALLBACK_H
#define _MRTELEVISIONCONTROLLERBLOCKCALLBACK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _MRTelevisionControllerBlockCallback : NSObject

@property (readonly, nonatomic) id *callbackBlock; // ivar: _callbackBlock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


// -(id)initWithCallbackBlock:(id)arg0 queue:(unk)arg1  ;


@end


#endif