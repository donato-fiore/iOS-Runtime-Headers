// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMAPITEMVIEW_H
#define MKMAPITEMVIEW_H

@class UIView, NSMutableArray, NSLayoutConstraint, NSError, NSTimer, NSString;
@protocol MKInfoCardThemeListener;


#import "MKLookAroundContainerView.h"
#import "MKMapSnapshotView.h"
#import "MKMapItem.h"

@interface MKMapItemView : UIView <MKInfoCardThemeListener>

 {
    MKLookAroundContainerView *_lookAroundContainerView;
    NSMutableArray *_lookAroundConstraints;
    MKMapSnapshotView *_snapshotView;
    ? _coordinateSpan;
    id *_mapItemloadedCompletionHandler;
    NSMutableArray *_snapshotConstraints;
    NSLayoutConstraint *_snapshotWidthConstraint;
    NSError *_snapshotError;
    NSTimer *_loadTimeoutTimer;
    CGSize _sizeWhenLastLoaded;
    BOOL _loadCalledOnce;
    NSUInteger _signpostID;
    BOOL _loadingLookAroundView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (nonatomic) BOOL shouldResolveMapItem; // ivar: _shouldResolveMapItem
@property (nonatomic) BOOL shouldShowBorders; // ivar: _shouldShowBorders
@property (readonly) Class superclass;


-(BOOL)_areBoundsValid;
-(BOOL)shouldHideLookAroundForParsec;
-(id)_annotationView;
-(id)_customAnnotation;
-(id)_deriveSnapshotOptions:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct ? )_clampCoordinateSpan:(struct ? )arg0 ;
-(void)_callCompletionHandler;
-(void)_callCompletionHandlerWithInvalidBoundsError;
-(void)_fetchLookAroundViewforMapItem:(id)arg0 ;
-(void)_getParentItem;
-(void)_handleTapOnLookAroundView:(id)arg0 ;
-(void)_handleTapOnSnapshot:(id)arg0 ;
-(void)_receivedFullyDrawnNotification:(id)arg0 ;
-(void)_reloadSnapshot;
-(void)_renderMapItem;
-(void)_resetLookAroundContainerViewState;
-(void)_resetState;
-(void)_setupLookAroundConstraints;
-(void)_setupObserver;
-(void)_setupSnapshotConstraints;
-(void)_takeSnapshotCompleted;
// -(void)_takeSnapshotWithCompletionHandler:(id)arg0 isReload:(unk)arg1  ;
-(void)_updateBorders;
-(void)cancel;
-(void)dealloc;
-(void)infoCardThemeChanged;
-(void)layoutSubviews;
-(void)loadMapItem:(id)arg0 coordinateSpan:(struct ? )arg1 completionHandler:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)triggerAnimation;


@end


#endif