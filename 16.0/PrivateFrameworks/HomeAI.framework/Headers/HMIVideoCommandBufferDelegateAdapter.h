// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIVIDEOCOMMANDBUFFERDELEGATEADAPTER_H
#define HMIVIDEOCOMMANDBUFFERDELEGATEADAPTER_H

@class HMFObject, NSString;
@protocol HMIVideoCommandBufferDelegate;



@interface HMIVideoCommandBufferDelegateAdapter : HMFObject <HMIVideoCommandBufferDelegate>



@property (copy) id *bufferWillFlush; // ivar: _bufferWillFlush
@property (copy) id *bufferWillHandleSampleBuffer; // ivar: _bufferWillHandleSampleBuffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)buffer:(id)arg0 willHandleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)bufferWillFlush:(id)arg0 ;


@end


#endif