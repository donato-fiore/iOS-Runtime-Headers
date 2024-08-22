// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREAUDIODATAOUTPUTINTERNAL_H
#define AVCAPTUREAUDIODATAOUTPUTINTERNAL_H

@class AVWeakReference;

#import <Foundation/Foundation.h>

#import "AVCaptureDataOutputDelegateCallbackHelper.h"

@interface AVCaptureAudioDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
}




-(id)init;
-(void)dealloc;


@end


#endif