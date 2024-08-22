// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIEFFECTTRACKINGREPLICAVIEW_H
#define PBUIEFFECTTRACKINGREPLICAVIEW_H

@class UIView, NSString;
@protocol PBUIFakeBluring, BSInvalidatable, PBUIEffectTrackingReplicaViewDelegate, PBUIFakeBlurObserver, PBUIPosterReplicaPortalProviding, PBUIPosterReplicaSnapshotProviding;


#import "PBUISnapshotReplicaView.h"
#import "PBUIPortalReplicaEffectView.h"

@interface PBUIEffectTrackingReplicaView : UIView <PBUIFakeBluring, BSInvalidatable>

 {
    BOOL _observesSnapshotValidity;
    PBUISnapshotReplicaView *_snapshotsView;
    PBUIPortalReplicaEffectView *_portalView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBUIEffectTrackingReplicaViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat effectWeight; // ivar: _effectWeight
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PBUIFakeBlurObserver> *observer; // ivar: _observer
@property (weak, nonatomic) NSObject<PBUIPosterReplicaPortalProviding> *portalProvider;
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) BOOL requiresSnapshotTreatment; // ivar: _requiresSnapshotTreatment
@property (nonatomic) BOOL shouldMatchWallpaperPosition;
@property (nonatomic) BOOL showsSnapshot; // ivar: _showsSnapshot
@property (weak, nonatomic) NSObject<PBUIPosterReplicaSnapshotProviding> *snapshotProvider;
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions; // ivar: _transformOptions
@property (nonatomic) CGFloat zoomScale; // ivar: _zoomScale


-(NSInteger)effectiveStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)offsetWallpaperBy:(struct CGPoint )arg0 ;
-(void)requestStyle:(NSInteger)arg0 ;


@end


#endif