// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREMETADATAINPUTINTERNAL_H
#define AVCAPTUREMETADATAINPUTINTERNAL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVCaptureInputPort.h"

@interface AVCaptureMetadataInputInternal : NSObject {
    AVCaptureInputPort *metadataPort;
    NSString *sourceID;
    *opaqueCMFormatDescription desc;
    *OpaqueCMClock clock;
    *OpaqueCMBlockBuffer emptyBoxedMetadata;
}






@end


#endif