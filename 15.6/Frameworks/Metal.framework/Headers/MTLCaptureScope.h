// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLCAPTURESCOPE_H
#define MTLCAPTURESCOPE_H

@class MTLObjectWithLabel, NSString;
@protocol MTLCaptureScope, MTLCommandQueue, MTLDevice;



@interface MTLCaptureScope : MTLObjectWithLabel <MTLCaptureScope>



@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 ;
-(void)beginScope;
-(void)dealloc;
-(void)endScope;


@end


#endif