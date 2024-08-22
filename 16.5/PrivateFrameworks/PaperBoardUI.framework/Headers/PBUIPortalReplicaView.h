// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIPORTALREPLICAVIEW_H
#define PBUIPORTALREPLICAVIEW_H

@class UIView, _UIPortalView, _UILegibilitySettings, NSString;
@protocol PBUIPosterReplicaView, PBUIWallpaperPositioning, BSInvalidatable, PBUIPosterReplicaPortalProviding, PBUIReplicaPortalSource;


#import "PBUIReplicaDebugView.h"

@interface PBUIPortalReplicaView : UIView <PBUIPosterReplicaView, PBUIWallpaperPositioning>

 {
    id<BSInvalidatable> *_providerToken;
    id<BSInvalidatable> *_sourceToken;
    _UIPortalView *_portalView;
    _UILegibilitySettings *_legibilitySettings;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PBUIReplicaDebugView *debugView; // ivar: _debugView
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger effectiveStyle;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PBUIPosterReplicaPortalProviding> *provider; // ivar: _provider
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) BOOL shouldMatchWallpaperPosition; // ivar: _shouldMatchWallpaperPosition
@property (readonly, nonatomic) NSObject<PBUIReplicaPortalSource> *source; // ivar: _source
@property (nonatomic, getter=isSubscribed) BOOL subscribed; // ivar: _subscribed
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)layoutSubviews;
-(void)setNeedsProviderUpdate;
-(void)setNeedsSourceUpdate;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif