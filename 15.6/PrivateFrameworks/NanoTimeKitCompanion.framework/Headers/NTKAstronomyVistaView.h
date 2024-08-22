// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKASTRONOMYVISTAVIEW_H
#define NTKASTRONOMYVISTAVIEW_H

@class UIView, NUNIView, NSMutableSet, NSString, CLKDevice, CLKUIQuadView, NUNIScene;
@protocol NUNIAnimationObserver, NUNIViewDelegate, NTKAstronomyVistaViewObserver;



@interface NTKAstronomyVistaView : UIView <NUNIAnimationObserver, NUNIViewDelegate>

 {
    NUNIView *_viewer;
    NSMutableSet *_activeContentsAnimations;
    NSUInteger _vista;
    BOOL _isSupplemental;
    BOOL _isDisplayOn;
    BOOL _isAnimating;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<NTKAstronomyVistaViewObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) CLKUIQuadView *quadView;
@property (retain, nonatomic) NUNIScene *scene;
@property (readonly) Class superclass;
@property (nonatomic) float supplementalBottomInset; // ivar: _supplementalBottomInset
@property (nonatomic) float supplementalHorizontalInset; // ivar: _supplementalHorizontalInset
@property (nonatomic) float supplementalSpheroidSize; // ivar: _supplementalSpheroidSize
@property (nonatomic) float supplementalTopInset; // ivar: _supplementalTopInset


-(NSUInteger)vista;
-(id)generateAnimationArrayFromVista:(NSUInteger)arg0 toVista:(NSUInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 textureSuffix:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 textureSuffix:(id)arg2 colorSpace:(NSInteger)arg3 ;
-(id)rotatable:(NSUInteger)arg0 ;
-(id)snapshotImage;
-(void)_setVista:(NSUInteger)arg0 scene:(id)arg1 ;
-(void)_updateAnimation;
-(void)dealloc;
-(void)layoutSubviews;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setMinFrameInterval:(int)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setVista:(NSUInteger)arg0 ;
-(void)showSupplemental:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)startAnimation;
-(void)stopAnimation;
-(void)universeAnimationFinished:(id)arg0 ;
-(void)updateSunLocationAnimated:(BOOL)arg0 ;
-(void)viewWillDisplay:(id)arg0 forTime:(CGFloat)arg1 ;


@end


#endif