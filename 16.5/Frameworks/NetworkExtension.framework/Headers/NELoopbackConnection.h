// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NELOOPBACKCONNECTION_H
#define NELOOPBACKCONNECTION_H

@protocol OS_nw_context;

#import <Foundation/Foundation.h>


@interface NELoopbackConnection : NSObject {
    NSUInteger _blobSizes;
    ? _protocol;
    nw_frame_array_s _currentInputFrames;
    NSObject<OS_nw_context> *_context;
    NSUInteger _currentBlobSizeIndex;
    NSUInteger _totalBytesReceived;
}




-(void)dealloc;


@end


#endif