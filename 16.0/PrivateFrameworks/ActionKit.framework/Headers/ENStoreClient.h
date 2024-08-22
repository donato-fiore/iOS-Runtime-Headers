// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENSTORECLIENT_H
#define ENSTORECLIENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENStoreClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)handleError:(id)arg0 ;
// -(void)invokeAsyncBlock:(id)arg0 completion:(unk)arg1  ;
// -(void)invokeAsyncBoolBlock:(id)arg0 completion:(unk)arg1  ;
// -(void)invokeAsyncInt32Block:(id)arg0 completion:(unk)arg1  ;
// -(void)invokeAsyncObjectBlock:(id)arg0 completion:(unk)arg1  ;


@end


#endif