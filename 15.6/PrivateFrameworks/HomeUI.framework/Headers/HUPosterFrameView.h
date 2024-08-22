// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPOSTERFRAMEVIEW_H
#define HUPOSTERFRAMEVIEW_H

@class UIView, HMCameraClip, CALayer;
@protocol HFCameraImageObserver, HFCameraPosterFrameDelegate;



@interface HUPosterFrameView : UIView <HFCameraImageObserver, HFCameraPosterFrameDelegate>



@property (weak, nonatomic) HMCameraClip *clip; // ivar: _clip
@property (retain, nonatomic) CALayer *lineSeparator; // ivar: _lineSeparator
@property (nonatomic) BOOL loadingHeroFrame; // ivar: _loadingHeroFrame
@property (nonatomic) BOOL loadingPosterFrame; // ivar: _loadingPosterFrame
@property (retain, nonatomic) CALayer *posterFrameLayer; // ivar: _posterFrameLayer
@property (nonatomic) NSUInteger posterFrameLoadingState; // ivar: _posterFrameLoadingState
@property (nonatomic) BOOL shouldShowLineSeparator; // ivar: _shouldShowLineSeparator
@property (nonatomic) CGFloat timeOffset; // ivar: _timeOffset


+(id)posterFrameViewForWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didFindPosterFrame:(id)arg0 atOffset:(CGFloat)arg1 forClip:(id)arg2 ;
-(void)displayImage:(id)arg0 opacity:(CGFloat)arg1 ;
-(void)displayImageForClip:(id)arg0 atTimeOffset:(CGFloat)arg1 ;
-(void)failedToFindPosterFrameAtOffset:(CGFloat)arg0 forClip:(id)arg1 ;
-(void)loadPlaceholderHeroFrameImageForClip:(id)arg0 ;
-(void)loadPosterFrameImageForClip:(id)arg0 atOffset:(CGFloat)arg1 ;
-(void)manager:(id)arg0 didFindHeroFrame:(id)arg1 forClip:(id)arg2 ;
-(void)manager:(id)arg0 didFindImage:(id)arg1 atTimeOffset:(CGFloat)arg2 forClip:(id)arg3 ;
-(void)manager:(id)arg0 didGenerateImage:(id)arg1 atOffset:(CGFloat)arg2 forClip:(id)arg3 ;
-(void)manager:(id)arg0 failedToFindHeroFrameforClip:(id)arg1 ;
-(void)manager:(id)arg0 failedToGenerateImageAtOffset:(CGFloat)arg1 forClip:(id)arg2 ;
-(void)prepareForReuse;


@end


#endif