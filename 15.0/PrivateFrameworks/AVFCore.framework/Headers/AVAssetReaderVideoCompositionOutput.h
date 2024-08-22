// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETREADERVIDEOCOMPOSITIONOUTPUT_H
#define AVASSETREADERVIDEOCOMPOSITIONOUTPUT_H

@class NSDictionary, NSArray;
@protocol AVVideoCompositing;


#import "AVAssetReaderOutput.h"
#import "AVAssetReaderVideoCompositionOutputInternal.h"
#import "AVVideoComposition.h"

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;
}


@property (readonly, nonatomic) NSObject<AVVideoCompositing> *customVideoCompositor;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (readonly, nonatomic) NSDictionary *videoSettings;
@property (readonly, nonatomic) NSArray *videoTracks;


+(id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg0 videoSettings:(id)arg1 ;
-(BOOL)_enableTrackExtractionReturningError:(*id)arg0 ;
-(BOOL)_prepareForReadingReturningError:(*id)arg0 ;
-(BOOL)alwaysCopiesSampleData;
-(id)_asset;
-(id)_errorForOSStatus:(int)arg0 ;
-(id)_formatDescriptions;
-(id)description;
-(id)init;
-(id)initWithVideoTracks:(id)arg0 videoSettings:(id)arg1 ;
-(id)mediaType;
-(id)sampleDataTrackIDs;
-(void)dealloc;


@end


#endif