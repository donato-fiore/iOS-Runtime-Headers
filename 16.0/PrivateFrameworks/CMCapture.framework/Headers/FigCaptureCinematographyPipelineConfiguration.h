// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURECINEMATOGRAPHYPIPELINECONFIGURATION_H
#define FIGCAPTURECINEMATOGRAPHYPIPELINECONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigCaptureCinematographyPipelineConfiguration : NSObject {
    NSArray *_objectMetadataIdentifiers;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
}




-(void)dealloc;


@end


#endif