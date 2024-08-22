// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITDEPARTURESDATASOURCE_H
#define MKTRANSITDEPARTURESDATASOURCE_H

@class UITableView, NSMapTable, NSMutableDictionary, NSString;
@protocol _MKTransitConnectionCellDelegate, MKTransitDeparturesCellDelegate, MKTransitDeparturesDataProviderDelegate, UITableViewDelegate, UITableViewDataSource, MKTransitSystemFilterViewDelegate, _MKInfoCardAnalyticsDelegate, MKTransitDeparturesDataSourceHosting;

#import <Foundation/Foundation.h>

#import "MKTransitSystemFilterHeaderFooterView.h"
#import "MKArtworkDataSourceCache.h"
#import "MKTransitDeparturesDataProvider.h"
#import "MKMapItem.h"

@interface MKTransitDeparturesDataSource : NSObject <_MKTransitConnectionCellDelegate, MKTransitDeparturesCellDelegate, MKTransitDeparturesDataProviderDelegate, UITableViewDelegate, UITableViewDataSource, MKTransitSystemFilterViewDelegate>

 {
    UITableView *_tableView;
    NSMapTable *_cachedSectionHeaders;
    NSMapTable *_cachedSectionFooters;
    NSMutableDictionary *_cachedImageOptions;
    NSMutableDictionary *_cachedMaxImageWidths;
    NSMutableDictionary *_cachedColumnCenteringWidths;
    BOOL _animatingRowInsertion;
    CGSize _transitioningSize;
    CGRect _lastMaxWidthBounds;
    BOOL _showingIncidents;
    MKTransitSystemFilterHeaderFooterView *_filterView;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=allowsTransitLineSelection) BOOL allowTransitLineSelection; // ivar: _allowTransitLineSelection
@property (weak, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, nonatomic) MKArtworkDataSourceCache *artworkCache; // ivar: _artworkCache
@property (readonly, nonatomic) MKTransitDeparturesDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MKTransitDeparturesDataSourceHosting> *host; // ivar: _host
@property (nonatomic, getter=hasLimitedInteraction) BOOL limitInteraction; // ivar: _limitInteraction
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly) Class superclass;
@property (nonatomic, getter=supportsSystemSectionCollapsing) BOOL supportSystemSectionCollapsing; // ivar: _supportSystemSectionCollapsing


-(BOOL)_newStationCardUIEnabled;
-(BOOL)_shouldHighlightRowAtIndexPath:(id)arg0 ;
-(BOOL)_shouldPageSection:(NSInteger)arg0 ;
-(BOOL)allowsSystemSectionCollapsing;
-(BOOL)sectionHasFooter:(NSInteger)arg0 ;
-(BOOL)sectionHasHeader:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)_availableWidth;
-(CGFloat)_heightForFooterInSection:(NSInteger)arg0 ;
-(CGFloat)_maxImageWidthForSystem:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_departureSequenceFrequencyTypeForAllDeparturesSections;
-(NSInteger)_lineImageSizeForSystem:(id)arg0 ;
-(NSInteger)_numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_attributionCellForRow:(NSInteger)arg0 ;
-(id)_cellForRowAtIndexPath:(id)arg0 ;
-(id)_cellHostingView;
-(id)_connectionCellForRow:(NSInteger)arg0 ;
-(id)_departureSequenceForIndexPath:(id)arg0 ;
-(id)_departureSequenceForIndexPath:(id)arg0 outIsNewLine:(*BOOL)arg1 outNextLineIsSame:(*BOOL)arg2 ;
-(id)_departuresCellWithReuseIdentifier:(id)arg0 forIndexPath:(id)arg1 ;
-(id)_existingCellAtIndexPath:(id)arg0 ;
-(id)_headerTextForSection:(NSInteger)arg0 ;
-(id)_imageForLine:(id)arg0 ;
-(id)_imageForLine:(id)arg0 size:(NSInteger)arg1 ;
-(id)_imageOptionSizeArraysForEnumeration;
-(id)_imageWithArtworkDataSource:(id)arg0 ;
-(id)_imageWithArtworkDataSource:(id)arg0 size:(NSInteger)arg1 ;
-(id)_incidentCellForRow:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(id)_indexPathWithHeader:(id)arg0 ;
-(id)_indexPathWithoutHeader:(id)arg0 ;
-(id)_messageCellForRow:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(id)_pagingPromptForSection:(NSInteger)arg0 ;
-(id)_smallerImageWithArtworkDataSource:(id)arg0 ;
-(id)_smallestImageWithArtworkDataSource:(id)arg0 ;
-(id)_systemCellForRow:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(id)_viewForFooterInRow:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(id)_viewForHeaderInRow:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(id)imageForDepartureSequence:(id)arg0 ;
-(id)imageForTransitLine:(id)arg0 ;
-(id)initWithTableView:(id)arg0 mapItem:(id)arg1 ;
-(id)possibleActions;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)traitsForTransitDeparturesDataProvider:(id)arg0 ;
-(int)_transitCategoryForSection:(NSInteger)arg0 ;
-(int)_transitCategoryForSequence:(id)arg0 ;
-(int)currentTransitCategory;
-(int)transitCategoryForFrequencyType:(NSInteger)arg0 ;
-(void)_configureDeparturesCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)_configureTransitHeaderCell:(id)arg0 forIndexPath:(id)arg1 withSectionType:(NSInteger)arg2 ;
-(void)_didSelectRowAtIndexPath:(id)arg0 ;
-(void)_incrementPageControlValueForSection:(NSInteger)arg0 identifier:(id)arg1 ;
-(void)_sectionHeaderButtonPressed:(id)arg0 ;
-(void)_setDisclosureArrowExpanded:(BOOL)arg0 inSystemCellAtIndexPath:(id)arg1 completion:(id)arg2 ;
-(void)_showIncidentDetails;
-(void)_toggleHiddenSystemInSection:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)didTransition;
-(void)filterView:(id)arg0 didChangeSystemSelection:(id)arg1 ;
-(void)incidentButtonSelectedInDeparturesCell:(id)arg0 ;
-(void)infoButtonSelectedInConnectionCell:(id)arg0 ;
-(void)invalidateLayout;
-(void)recordIncidentsShowing:(BOOL)arg0 ;
-(void)reloadData;
-(void)reloadSections;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)transitDeparturesDataProviderDidReload:(id)arg0 ;
-(void)transitDeparturesDataProviderDidUpdateDepartures:(id)arg0 ;
-(void)transitDeparturesDataProviderWillUpdateDepartures:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 ;


@end


#endif