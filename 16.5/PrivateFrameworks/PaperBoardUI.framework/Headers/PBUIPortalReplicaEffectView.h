// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIPORTALREPLICAEFFECTVIEW_H
#define PBUIPORTALREPLICAEFFECTVIEW_H

@class _UIBackdropView, MTMaterialView, NSString;
@protocol PBUIFakeBluring, PBUIFakeBlurObserver;


#import "PBUIPortalReplicaView.h"

@interface PBUIPortalReplicaEffectView : PBUIPortalReplicaView <PBUIFakeBluring>

 {
    _UIBackdropView *_effectView;
    MTMaterialView *_materialView;
    NSInteger _style;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat effectWeight;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PBUIFakeBlurObserver> *observer; // ivar: _observer
@property (nonatomic) BOOL shouldMatchWallpaperPosition;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions; // ivar: _transformOptions
@property (nonatomic) CGFloat zoomScale; // ivar: _zoomScale


-(BOOL)isEffectView;
-(NSInteger)effectiveStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)offsetWallpaperBy:(struct CGPoint )arg0 ;
-(void)requestStyle:(NSInteger)arg0 ;
-(void)setNeedsSourceUpdate;


@end


#endif