// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFKEYVALUEOBSERVINGDELIVERYOPTIONS_H
#define AFKEYVALUEOBSERVINGDELIVERYOPTIONS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFKeyValueObservingDeliveryOptions : NSObject

@property (readonly, nonatomic) BOOL asynchronous; // ivar: _asynchronous
@property (readonly, nonatomic) unsigned int qosClass; // ivar: _qosClass
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithQueue:(id)arg0 qosClass:(unsigned int)arg1 asynchronous:(BOOL)arg2 ;


@end


#endif