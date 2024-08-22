// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPTUSCANYLOOPBACKCONNECTION_H
#define NPTUSCANYLOOPBACKCONNECTION_H


#import <Foundation/Foundation.h>


@interface NPTuscanyLoopbackConnection : NSObject {
    NSUInteger _blobSizes;
    ? _protocol;
    ? _currentInputFrames;
}


@property NSUInteger currentBlobSizeIndex; // ivar: _currentBlobSizeIndex
@property (readonly) *nw_protocol protocol;
@property BOOL waitingForOutput; // ivar: _waitingForOutput


-(id)init;
-(unsigned int)addInputFramesToArray:(struct nw_frame_array_s *)arg0 maximumBytes:(unsigned int)arg1 minimumBytes:(unsigned int)arg2 maximumFrameCount:(unsigned int)arg3 ;
-(unsigned int)addOutputFramesToArray:(struct nw_frame_array_s *)arg0 maximumBytes:(unsigned int)arg1 minimumBytes:(unsigned int)arg2 maximumFrameCount:(unsigned int)arg3 ;
-(void)dealloc;
-(void)handleDetachedFromProtocol;
-(void)handleOutputFrame:(id)arg0 ;
-(void)notifyInputHandler;


@end


#endif