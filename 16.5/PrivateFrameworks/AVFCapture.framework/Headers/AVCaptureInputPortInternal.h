// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREINPUTPORTINTERNAL_H
#define AVCAPTUREINPUTPORTINTERNAL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVCaptureInput.h"

@interface AVCaptureInputPortInternal : NSObject {
    AVCaptureInput *input;
    NSString *mediaType;
    *opaqueCMFormatDescription formatDescription;
    *OpaqueCMClock clock;
    BOOL enabled;
    int changeSeed;
    NSString *sourceID;
    NSString *sourceDeviceType;
    NSInteger sourceDevicePosition;
}




-(id)init;
-(void)dealloc;


@end


#endif