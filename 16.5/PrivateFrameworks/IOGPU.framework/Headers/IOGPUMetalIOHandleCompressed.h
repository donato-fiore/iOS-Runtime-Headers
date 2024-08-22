// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOGPUMETALIOHANDLECOMPRESSED_H
#define IOGPUMETALIOHANDLECOMPRESSED_H

@class MTLIOHandleCompressed, IOGPUMetalDevice<MTLDevice>;



@interface IOGPUMetalIOHandleCompressed : MTLIOHandleCompressed {
    IOGPUMetalDevice<MTLDevice> *_dev;
    NSUInteger _globalTraceObjectID;
}


@property (readonly) unsigned int vnioID; // ivar: _vnioID


-(NSUInteger)globalTraceObjectID;
-(id)initWithDevice:(id)arg0 path:(char *)arg1 compressionType:(NSInteger)arg2 error:(*id)arg3 uncached:(BOOL)arg4 ;
-(void)dealloc;
-(void)setLabel:(id)arg0 ;


@end


#endif