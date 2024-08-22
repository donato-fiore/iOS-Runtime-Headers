// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXWIDGETBAR_H
#define PXWIDGETBAR_H

@class NSMutableSet, NSString;
@protocol PXTileSource, PXTilingControllerTransitionDelegate, PXWidgetBarDelegate, PXAnonymousView;

#import <Foundation/Foundation.h>

#import "PXWidgetBarLayout.h"
#import "PXBasicTileAnimator.h"
#import "PXScrollViewController.h"
#import "PXWidgetBarSpec.h"
#import "PXTilingController.h"

@interface PXWidgetBar : NSObject <PXTileSource, PXTilingControllerTransitionDelegate>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) PXWidgetBarLayout *_layout; // ivar: __layout
@property (readonly, nonatomic) PXBasicTileAnimator *_tileAnimator; // ivar: __tileAnimator
@property (readonly, nonatomic) NSMutableSet *_tilesInUse; // ivar: __tilesInUse
@property (nonatomic, setter=_setViewHeight:) CGFloat _viewHeight; // ivar: __viewHeight
@property (nonatomic) BOOL allowUserInteractionWithSubtitle; // ivar: _allowUserInteractionWithSubtitle
@property (copy, nonatomic) NSString *caption; // ivar: _caption
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXWidgetBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *disclosureTitle; // ivar: _disclosureTitle
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (retain, nonatomic) PXWidgetBarSpec *spec; // ivar: _spec
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXTilingController *tilingController; // ivar: _tilingController
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSObject<PXAnonymousView> *view; // ivar: _view
@property (readonly, nonatomic) CGFloat viewHeight;


-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(BOOL)_needsUpdate;
-(id)checkOutTileWithKind:(NSInteger)arg0 ;
-(id)createTileAnimator;
-(id)createView;
-(id)init;
-(id)initWithScrollViewController:(id)arg0 ;
-(id)tilingController:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(void)_invalidateLayout;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateLayoutIfNeeded;
-(void)_updateViewHeightIfNeeded;
-(void)_updateViewIfNeeded;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)checkInTile:(id)arg0 ;
-(void)didSelectDisclosureAffordance;
-(void)invalidateView;
-(void)invalidateViewHeight;
-(void)performChanges:(id)arg0 ;
-(void)updateView;


@end


#endif