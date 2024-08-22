// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSTREAMDATAASSET_H
#define AVSTREAMDATAASSET_H

@class NSArray, NSDictionary;


#import "AVAsset.h"
#import "AVStreamDataParser.h"
#import "AVStreamDataAssetInspector.h"
#import "AVAssetSynchronousInspectorLoader.h"
#import "AVDispatchOnce.h"

@interface AVStreamDataAsset : AVAsset {
    AVStreamDataParser *_weakReferenceToParser;
    AVStreamDataAssetInspector *_inspector;
    AVAssetSynchronousInspectorLoader *_inspectorLoader;
    AVDispatchOnce *_tracksOnce;
    NSArray *_tracks;
    NSDictionary *_trackDictsByTrackID;
}




-(Class)_classForTrackInspectors;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(id)copyAssetRemovingTrackID:(int)arg0 ;
-(id)copyAssetWithAdditionalTrackID:(int)arg0 mediaType:(id)arg1 ;
-(id)copyAssetWithReplacementFormatDescription:(struct opaqueCMFormatDescription *)arg0 forTrackID:(int)arg1 ;
-(id)formatDescriptionsForTrackID:(int)arg0 ;
-(id)initWithParser:(id)arg0 tracks:(id)arg1 ;
-(id)mediaTypeForTrackID:(int)arg0 ;
-(id)parser;
-(id)tracks;
-(struct OpaqueFigFormatReader *)_formatReader;
-(void)dealloc;


@end


#endif