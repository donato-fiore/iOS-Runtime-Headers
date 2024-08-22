// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPHOTOIMAGEVIEW_H
#define NTKPHOTOIMAGEVIEW_H

@class UIView, CLKDevice, CLKMediaAssetView, NSString, NSURL;
@protocol CLKMediaAssetViewDelegate, NTKPhotoImageViewDelegate;


#import "NTKPhoto.h"
#import "NTKCachedPhoto.h"

@interface NTKPhotoImageView : UIView <CLKMediaAssetViewDelegate>

 {
    CLKDevice *_device;
    CLKMediaAssetView *_mediaAssetView;
    NTKPhoto *_photo;
}


@property (readonly, nonatomic) NTKCachedPhoto *cachedPhoto; // ivar: _cachedPhoto
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKPhotoImageViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *irisURL;
@property (readonly, nonatomic) BOOL isPhotoIris;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly) Class superclass;


-(BOOL)isPlaying;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 ;
-(void)_loadMediaAssetView;
-(void)_unloadMediaAssetView;
-(void)interruptPlayback;
-(void)mediaAssetViewDidBeginPlaying:(id)arg0 ;
-(void)mediaAssetViewDidEndPlaying:(id)arg0 ;
-(void)pauseWithMode:(NSInteger)arg0 ;
-(void)playWithMode:(NSInteger)arg0 ;
-(void)prepareToPlayWithMode:(NSInteger)arg0 ;
-(void)reset;
-(void)resumeInterruptedPlayback;
-(void)setPhoto:(id)arg0 allowIris:(BOOL)arg1 ;


@end


#endif