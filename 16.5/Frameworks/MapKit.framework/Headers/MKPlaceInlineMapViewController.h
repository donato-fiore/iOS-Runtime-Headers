// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACEINLINEMAPVIEWCONTROLLER_H
#define MKPLACEINLINEMAPVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray;
@protocol MKModuleViewControllerProtocol;


#import "_MKPlaceInlineMapContentView.h"
#import "MKMapItem.h"
#import "MKAnnotatedMapSnapshotter.h"
#import "MKMapCamera.h"
#import "_MKPlaceViewController.h"

@interface MKPlaceInlineMapViewController : UIViewController <MKModuleViewControllerProtocol>

 {
    _MKPlaceInlineMapContentView *_contentView;
    MKMapItem *_updatingInlineMapItem;
    MKAnnotatedMapSnapshotter *_collectionSnapshotter;
    CGSize _currentSize;
}


@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden; // ivar: _bottomHairlineHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapCamera *mapCamera; // ivar: _mapCamera
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (weak, nonatomic) _MKPlaceViewController *owner; // ivar: _owner
@property (readonly) Class superclass;
@property (nonatomic) BOOL useWindowTrait; // ivar: _useWindowTrait
@property (readonly, nonatomic) NSArray *visibleMapItems;


+(id)inlineMapWithMapItem:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)_canShowWhileLocked;
-(NSInteger)preferredUserInterfaceStyle;
-(id)initWithMKMapItem:(id)arg0 ;
-(id)snapshot;
-(id)traitCollectionForSnapshot;
-(struct CGSize )_mapSize;
-(void)_handleTapOnMap;
-(void)_launchMaps;
-(void)_updateInlineMapWithRefinedMapItems;
-(void)_updateMap;
-(void)_updateMapIfNeeded;
-(void)_updateSnapshotImage:(id)arg0 ;
-(void)cancelSnapshotRequestIfNeeded;
-(void)loadView;
-(void)updateInlineMapWithRefinedMapItems;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif