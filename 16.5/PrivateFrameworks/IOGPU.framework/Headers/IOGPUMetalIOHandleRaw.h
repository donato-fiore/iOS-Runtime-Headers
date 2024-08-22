// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOGPUMETALIOHANDLERAW_H
#define IOGPUMETALIOHANDLERAW_H

@class MTLIOHandleRaw, IOGPUMetalDevice<MTLDevice>;



@interface IOGPUMetalIOHandleRaw : MTLIOHandleRaw {
    IOGPUMetalDevice<MTLDevice> *_dev;
    NSUInteger _globalTraceObjectID;
}


@property (readonly) unsigned int vnioID; // ivar: _vnioID


-(NSUInteger)globalTraceObjectID;
-(id)initWithDevice:(id)arg0 path:(char *)arg1 error:(*id)arg2 uncached:(BOOL)arg3 ;
-(void)dealloc;
-(void)setLabel:(id)arg0 ;


@end


#endif