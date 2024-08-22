// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACERELATEDVIEWCONTROLLER_H
#define MKPLACERELATEDVIEWCONTROLLER_H

@class NSArray, GEORelatedPlaceList, NSString;
@protocol MKModuleViewControllerProtocol, _MKInfoCardAnalyticsDelegate, MKPlaceRelatedViewControllerDelegate;


#import "MKPlaceSectionViewController.h"
#import "MKMapItem.h"

@interface MKPlaceRelatedViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol>

 {
    NSArray *_fetchedMapItems;
    NSArray *_cells;
    BOOL _isExpanded;
    GEORelatedPlaceList *_relatedPlaceList;
}


@property (weak, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKPlaceRelatedViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSUInteger)maxItems;
-(id)_moduleTitle;
-(id)initWithMapItem:(id)arg0 ;
-(void)_captureSeeAllAction;
-(void)_captureTapActionWithMapItem:(id)arg0 ;
-(void)_reloadRelatedMapItems:(id)arg0 ;
-(void)_seeAllAction:(id)arg0 ;
-(void)_setExpanded:(BOOL)arg0 ;
-(void)_updateHeightConstraints;
-(void)_updateRows;
-(void)_updateTitle;
-(void)fetchPOIs;
-(void)preferredContentSizeChanged:(id)arg0 ;
-(void)sectionView:(id)arg0 didSelectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif