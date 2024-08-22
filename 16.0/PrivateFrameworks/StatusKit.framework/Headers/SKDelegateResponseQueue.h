// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKDELEGATERESPONSEQUEUE_H
#define SKDELEGATERESPONSEQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SKDelegateResponseQueue : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


-(id)initWithQueue:(id)arg0 ;


@end


#endif