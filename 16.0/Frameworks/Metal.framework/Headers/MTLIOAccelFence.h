// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLIOACCELFENCE_H
#define MTLIOACCELFENCE_H

@class MTLFence, MTLIOAccelDevice<MTLDevice>, NSString;
@protocol MTLFenceSPI, MTLDevice;



@interface MTLIOAccelFence : MTLFence <MTLFenceSPI>

 {
    MTLIOAccelDevice<MTLDevice> *_device;
    unsigned int _fenceIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 fenceIndex:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif