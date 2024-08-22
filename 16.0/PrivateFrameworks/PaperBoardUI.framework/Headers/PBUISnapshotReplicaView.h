// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUISNAPSHOTREPLICAVIEW_H
#define PBUISNAPSHOTREPLICAVIEW_H

@class UIView, UIImageView, _UILegibilitySettings, NSString;
@protocol PBUIPosterReplicaView, PBUIFakeBluring, PBUIWallpaperPositioning, BSInvalidatable, PBUIFakeBlurObserver, PBUIPosterReplicaSnapshotProviding, PBUIReplicaSnapshotSource;


#import "PBUIReplicaDebugView.h"

@interface PBUISnapshotReplicaView : UIView <PBUIPosterReplicaView, PBUIFakeBluring, PBUIWallpaperPositioning>

 {
    id<BSInvalidatable> *_providerToken;
    id<BSInvalidatable> *_sourceToken;
    UIImageView *_imageView;
    _UILegibilitySettings *_legibilitySettings;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PBUIReplicaDebugView *debugView; // ivar: _debugView
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger effectiveStyle; // ivar: _effectiveStyle
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PBUIFakeBlurObserver> *observer; // ivar: _observer
@property (weak, nonatomic) NSObject<PBUIPosterReplicaSnapshotProviding> *provider; // ivar: _provider
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) BOOL shouldMatchWallpaperPosition; // ivar: _shouldMatchWallpaperPosition
@property (readonly, nonatomic) NSObject<PBUIReplicaSnapshotSource> *source; // ivar: _source
@property (nonatomic, getter=isSubscribed) BOOL subscribed; // ivar: _subscribed
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions; // ivar: _transformOptions
@property (nonatomic) CGFloat zoomScale; // ivar: _zoomScale


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)layoutSubviews;
-(void)offsetWallpaperBy:(struct CGPoint )arg0 ;
-(void)requestStyle:(NSInteger)arg0 ;
-(void)setNeedsProviderUpdate;
-(void)setNeedsSourceUpdate;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif