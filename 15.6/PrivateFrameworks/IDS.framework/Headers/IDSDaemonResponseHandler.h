// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSDAEMONRESPONSEHANDLER_H
#define IDSDAEMONRESPONSEHANDLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSDaemonResponseHandler : NSObject

@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) BOOL isSync; // ivar: _isSync
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithBlock:(id)arg0 queue:(id)arg1 ;
-(id)initWithBlock:(id)arg0 queue:(id)arg1 isSync:(BOOL)arg2 ;


@end


#endif