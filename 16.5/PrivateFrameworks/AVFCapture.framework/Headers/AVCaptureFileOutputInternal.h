// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREFILEOUTPUTINTERNAL_H
#define AVCAPTUREFILEOUTPUTINTERNAL_H


#import <Foundation/Foundation.h>


@interface AVCaptureFileOutputInternal : NSObject {
    ? maxRecordedDuration;
    NSInteger maxRecordedFileSize;
    NSInteger minFreeDiskSpaceLimit;
    BOOL pausesRecordingOnInterruption;
}




-(id)init;


@end


#endif