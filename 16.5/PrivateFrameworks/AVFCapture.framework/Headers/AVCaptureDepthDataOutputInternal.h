// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREDEPTHDATAOUTPUTINTERNAL_H
#define AVCAPTUREDEPTHDATAOUTPUTINTERNAL_H

@class AVWeakReference;

#import <Foundation/Foundation.h>

#import "AVCaptureDataOutputDelegateCallbackHelper.h"

@interface AVCaptureDepthDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    BOOL alwaysDiscardsLateDepthData;
    BOOL filteringEnabled;
}




-(id)init;
-(void)dealloc;


@end


#endif