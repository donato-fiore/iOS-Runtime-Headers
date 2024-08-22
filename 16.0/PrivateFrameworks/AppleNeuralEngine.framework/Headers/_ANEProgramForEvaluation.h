// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ANEPROGRAMFOREVALUATION_H
#define _ANEPROGRAMFOREVALUATION_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "_ANEDeviceController.h"

@interface _ANEProgramForEvaluation : NSObject

@property (readonly, nonatomic) _ANEDeviceController *controller; // ivar: _controller
@property NSInteger currentAsyncRequestsInFlight; // ivar: _currentAsyncRequestsInFlight
@property (nonatomic) NSUInteger intermediateBufferHandle; // ivar: _intermediateBufferHandle
@property (nonatomic) NSUInteger programHandle; // ivar: _programHandle
@property (readonly, nonatomic) char queueDepth; // ivar: _queueDepth
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *requestsInFlight; // ivar: _requestsInFlight


+(id)new;
+(id)programWithController:(id)arg0 intermediateBufferHandle:(NSUInteger)arg1 queueDepth:(char)arg2 ;
+(id)programWithHandle:(NSUInteger)arg0 intermediateBufferHandle:(NSUInteger)arg1 queueDepth:(char)arg2 ;
-(BOOL)processRequest:(id)arg0 model:(id)arg1 qos:(unsigned int)arg2 qIndex:(NSUInteger)arg3 modelStringID:(NSUInteger)arg4 options:(id)arg5 error:(*id)arg6 ;
-(id)description;
-(id)init;
-(id)initWithController:(id)arg0 intermediateBufferHandle:(NSUInteger)arg1 queueDepth:(char)arg2 ;
-(id)programInferenceOtherErrorForMessage:(struct ANENotificationMessageStruct *)arg0 model:(id)arg1 methodName:(id)arg2 ;
-(void)dealloc;


@end


#endif