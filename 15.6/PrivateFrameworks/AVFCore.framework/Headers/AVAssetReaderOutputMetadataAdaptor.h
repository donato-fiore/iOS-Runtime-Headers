// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETREADEROUTPUTMETADATAADAPTOR_H
#define AVASSETREADEROUTPUTMETADATAADAPTOR_H

@protocol AVAssetReaderOutputAdaptor;

#import <Foundation/Foundation.h>

#import "AVAssetReaderOutputMetadataAdaptorInternal.h"
#import "AVAssetReaderTrackOutput.h"

@interface AVAssetReaderOutputMetadataAdaptor : NSObject <AVAssetReaderOutputAdaptor>

 {
    AVAssetReaderOutputMetadataAdaptorInternal *_internal;
}


@property (readonly, nonatomic) AVAssetReaderTrackOutput *assetReaderTrackOutput;


+(id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg0 ;
-(id)init;
-(id)initWithAssetReaderTrackOutput:(id)arg0 ;
-(id)nextTimedMetadataGroup;
-(int)addExtractionForOutput:(id)arg0 figAssetReader:(struct OpaqueFigAssetReader *)arg1 options:(id)arg2 withOutputExtactionID:(*int)arg3 ;
-(void)dealloc;


@end


#endif