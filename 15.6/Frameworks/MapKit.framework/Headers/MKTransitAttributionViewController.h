// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITATTRIBUTIONVIEWCONTROLLER_H
#define MKTRANSITATTRIBUTIONVIEWCONTROLLER_H

@class MKTableViewController, NSString;
@protocol GEOResourceManifestTileGroupObserver, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol, MKTransitAttributionViewControllerDelegate, GEOTransitLineItem;


#import "MKMapItem.h"

@interface MKTransitAttributionViewController : MKTableViewController <GEOResourceManifestTileGroupObserver, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol>

 {
    BOOL _isAttributionURLAvailable;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKTransitAttributionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<GEOTransitLineItem> *lineItem; // ivar: _lineItem
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) BOOL requiresPreferredContentSizeInStackingView;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_hasAttribution;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_attribution;
-(id)_attributionCell;
-(id)initWithMapItem:(id)arg0 ;
-(id)initWithTransitLineItem:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_commonInit;
-(void)_presentTransitAttributionDetails;
-(void)_transitInfoUpdated;
-(void)dealloc;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif