// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPLEBUFFERANDMETADATA_H
#define SAMPLEBUFFERANDMETADATA_H

@class AVTimedMetadataGroup;

#import <Foundation/Foundation.h>


@interface SampleBufferAndMetadata : NSObject

@property (retain) AVTimedMetadataGroup *metadata; // ivar: _metadata
@property *opaqueCMSampleBuffer sampleBuffer; // ivar: _sampleBuffer




@end


#endif