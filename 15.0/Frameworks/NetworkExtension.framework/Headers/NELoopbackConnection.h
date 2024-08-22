// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NELOOPBACKCONNECTION_H
#define NELOOPBACKCONNECTION_H

@protocol OS_nw_context;

#import <Foundation/Foundation.h>


@interface NELoopbackConnection : NSObject {
    NSUInteger _blobSizes;
    ? _protocol;
    ? _currentInputFrames;
}


@property (readonly) NSObject<OS_nw_context> *context; // ivar: _context
@property NSUInteger currentBlobSizeIndex; // ivar: _currentBlobSizeIndex
@property (readonly) *nw_protocol protocol;
@property NSUInteger totalBytesReceived; // ivar: _totalBytesReceived


-(id)initWithContext:(id)arg0 ;
-(unsigned int)addInputFramesToArray:(struct nw_frame_array_s *)arg0 maximumBytes:(unsigned int)arg1 minimumBytes:(unsigned int)arg2 maximumFrameCount:(unsigned int)arg3 ;
-(unsigned int)addOutputFramesToArray:(struct nw_frame_array_s *)arg0 maximumBytes:(unsigned int)arg1 minimumBytes:(unsigned int)arg2 maximumFrameCount:(unsigned int)arg3 ;
-(void)dealloc;
-(void)handleDetachedFromProtocol;
-(void)handleOutputFinished;
-(void)handleOutputFrame:(id)arg0 ;
-(void)notifyInputHandler;


@end


#endif