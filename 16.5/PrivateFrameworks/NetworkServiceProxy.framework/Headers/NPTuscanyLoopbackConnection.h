// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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


-(?)addInputFramesToArray:(?)arg0 maximumBytes:(?)arg1 minimumBytesmaximumFrameCount;
-(?)addOutputFramesToArray:(?)arg0 maximumBytes:(?)arg1 minimumBytesmaximumFrameCount;
-(id)init;
-(void)dealloc;
-(void)handleDetachedFromProtocol;
-(void)handleOutputFrame:(id)arg0 ;
-(void)notifyInputHandler;


@end


#endif