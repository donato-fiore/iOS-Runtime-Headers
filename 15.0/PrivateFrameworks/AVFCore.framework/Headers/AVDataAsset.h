// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVDATAASSET_H
#define AVDATAASSET_H

@class NSDictionary, NSArray;


#import "AVAsset.h"
#import "AVAssetInspectorLoader.h"
#import "AVDispatchOnce.h"

@interface AVDataAsset : AVAsset {
    NSDictionary *_initializationOptions;
    AVAssetInspectorLoader *_loader;
    AVDispatchOnce *_allocateTracksOnceOnly;
    NSArray *_tracks;
}




+(NSUInteger)_dataLengthLimit;
+(id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg0 figAssetCreationFlags:(*NSUInteger)arg1 ;
-(BOOL)_requiresInProcessOperation;
-(Class)_classForTrackInspectors;
-(NSUInteger)referenceRestrictions;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(id)initWithData:(id)arg0 contentType:(id)arg1 ;
-(id)initWithData:(id)arg0 contentType:(id)arg1 options:(id)arg2 ;
-(id)tracks;
-(struct OpaqueFigFormatReader *)_formatReader;
-(void)dealloc;


@end


#endif