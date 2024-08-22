// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHFLIPBOOKHISTORYFRAME_H
#define BLSHFLIPBOOKHISTORYFRAME_H

@class BLSDiagnosticFlipbookFrame;
@protocol BLSHRenderedFlipbookFrame;



@interface BLSHFlipbookHistoryFrame : BLSDiagnosticFlipbookFrame {
    id<BLSHRenderedFlipbookFrame> *_lock_retainedHostFrame;
    os_unfair_lock_s _lock;
}


@property (readonly, weak, nonatomic) NSObject<BLSHRenderedFlipbookFrame> *hostFrame; // ivar: _hostFrame
@property (readonly, nonatomic) NSUInteger retainedMemoryUsage;
@property (readonly, nonatomic, getter=isRetainingSurface) BOOL retainingSurface;


-(id)description;
-(id)initWithFrame:(id)arg0 ;
-(struct __IOSurface *)rawSurface;
-(struct __IOSurface *)surface;
-(void)stopRetainingSurface;


@end


#endif