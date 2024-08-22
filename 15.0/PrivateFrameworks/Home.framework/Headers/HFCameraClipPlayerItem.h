// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCAMERACLIPPLAYERITEM_H
#define HFCAMERACLIPPLAYERITEM_H

@class AVPlayerItem, HMCameraClip, HMCameraClipManager, NSString;
@protocol AVAssetResourceLoaderDelegate, HFCameraClipQueuableItem, OS_dispatch_queue;


#import "HFCameraClipVideoAssetContextProvider.h"

@interface HFCameraClipPlayerItem : AVPlayerItem <AVAssetResourceLoaderDelegate, HFCameraClipQueuableItem>



@property (readonly, nonatomic) HMCameraClip *clip; // ivar: _clip
@property (readonly, nonatomic) HMCameraClipManager *clipManager; // ivar: _clipManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceLoaderQueue; // ivar: _resourceLoaderQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFCameraClipVideoAssetContextProvider *videoContextProvider; // ivar: _videoContextProvider


+(id)_assetOptionsForClip:(id)arg0 ;
+(id)_playlistURL;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(id)initWithAsset:(id)arg0 automaticallyLoadedAssetKeys:(id)arg1 ;
-(id)initWithClipManager:(id)arg0 clip:(id)arg1 ;
-(void)dealloc;


@end


#endif