// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETREADERSAMPLEREFERENCEOUTPUT_H
#define AVASSETREADERSAMPLEREFERENCEOUTPUT_H



#import "AVAssetReaderOutput.h"
#import "AVAssetReaderSampleReferenceOutputInternal.h"
#import "AVAssetTrack.h"

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}


@property (readonly, nonatomic) AVAssetTrack *track;


+(id)assetReaderSampleReferenceOutputWithTrack:(id)arg0 ;
-(BOOL)_enableTrackExtractionReturningError:(*id)arg0 ;
-(BOOL)_trimsSampleDurations;
-(id)_asset;
-(id)description;
-(id)init;
-(id)initWithTrack:(id)arg0 ;
-(id)mediaType;
-(void)dealloc;


@end


#endif