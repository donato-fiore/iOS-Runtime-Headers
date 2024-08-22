// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXMAPCOMPONENTVIEW_H
#define SXMAPCOMPONENTVIEW_H

@class NSArray, NSCache, NSString, UIBarButtonItem, UIImageView, MKMapView, UISegmentedControl, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, MKMapViewDelegate, SXFullscreenCanvasViewControllerDelegate, SXDocumentTitleProviding;


#import "SXMediaComponentView.h"
#import "SXMediaEngageEvent.h"
#import "SXFullscreenCanvasViewController.h"
#import "SXMapSnapShotter.h"

@interface SXMapComponentView : SXMediaComponentView <UIGestureRecognizerDelegate, MKMapViewDelegate, SXFullscreenCanvasViewControllerDelegate>



@property (retain, nonatomic) SXMediaEngageEvent *activeMediaEngageEvent; // ivar: _activeMediaEngageEvent
@property (retain, nonatomic) NSArray *annotations; // ivar: _annotations
@property (readonly, nonatomic) NSCache *cachedSnapshots; // ivar: _cachedSnapshots
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentTitleProviding> *documentTitleProvider; // ivar: _documentTitleProvider
@property (retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // ivar: _doneBarButtonItem
@property (retain, nonatomic) SXFullscreenCanvasViewController *fullScreenCanvasViewController; // ivar: _fullScreenCanvasViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) ? mapRect; // ivar: _mapRect
@property (retain, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (copy, nonatomic) id *snapShotCancelHandler; // ivar: _snapShotCancelHandler
@property (readonly, nonatomic) SXMapSnapShotter *snapShotter; // ivar: _snapShotter
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture; // ivar: _tapGesture
@property (retain, nonatomic) NSArray *toolbarItems; // ivar: _toolbarItems


-(BOOL)areBarsHidden;
-(BOOL)hasSelectedAnnotations;
-(BOOL)isPresentingFullscreen;
-(BOOL)isUserInteractingWithMap;
-(NSUInteger)analyticsMediaType;
-(NSUInteger)mapTypeForSegmentIndex:(NSUInteger)arg0 ;
-(NSUInteger)segmentIndexForMapType:(NSUInteger)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5 documentTitleProvider:(id)arg6 ;
-(id)mapTitle;
-(struct ? )region;
-(void)cancelSnapShot;
-(void)configureMapView;
-(void)createMediaEngageEvent;
-(void)createSnapShot;
-(void)dealloc;
-(void)discardContents;
-(void)dismissFullScreen;
-(void)enableMapViewInteraction:(BOOL)arg0 ;
-(void)finishMediaEngageEvent;
-(void)fullScreenCanvasViewControllerWantsToDismiss:(id)arg0 ;
-(void)handleDoneTap:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)mapTypeChanged:(id)arg0 ;
-(void)memoryWarning:(id)arg0 ;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)presentFullScreen;
-(void)renderContents;
-(void)setupNavigationBar;
-(void)setupToolbar;
-(void)submitEvents;
-(void)submitMediaEngageCompleteEvent;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif