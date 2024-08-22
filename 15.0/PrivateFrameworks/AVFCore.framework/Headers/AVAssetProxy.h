// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETPROXY_H
#define AVASSETPROXY_H



#import "AVAsset.h"
#import "AVAssetProxyInternal.h"

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}




+(id)assetProxyWithPropertyList:(id)arg0 ;
+(id)makePropertyListForMovieProxyHeader:(id)arg0 name:(id)arg1 ;
-(BOOL)isProxy;
-(Class)_classForTrackInspectors;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(id)initWithPropertyList:(id)arg0 ;
-(id)tracks;
-(struct OpaqueFigAsset *)_figAsset;
-(struct OpaqueFigFormatReader *)_formatReader;
-(struct OpaqueFigPlaybackItem *)_playbackItem;
-(void)dealloc;


@end


#endif