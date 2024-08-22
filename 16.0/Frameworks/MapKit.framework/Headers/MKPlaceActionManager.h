// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEACTIONMANAGER_H
#define MKPLACEACTIONMANAGER_H

@class TUCallProvider, NSString;
@protocol MKPlaceActionItemAppearanceDataProvider, MKPlaceActionManagerProtocol, _MKInfoCardAnalyticsDelegate, MKPlaceActionManagerTransitDelegate;

#import <Foundation/Foundation.h>

#import "MKPlaceCardActionItem.h"

@interface MKPlaceActionManager : NSObject <MKPlaceActionItemAppearanceDataProvider, MKPlaceActionManagerProtocol>

 {
    MKPlaceCardActionItem *_favoriteActionItem;
    MKPlaceCardActionItem *_homeActionItem;
    MKPlaceCardActionItem *_collectionActionItem;
    MKPlaceCardActionItem *_callActionItem;
    MKPlaceCardActionItem *_websiteActionItem;
    MKPlaceCardActionItem *_brandStoreActionItem;
    TUCallProvider *_callProvider;
}


@property (weak, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, nonatomic) MKPlaceCardActionItem *callActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *claimBusinessActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *collectionActionItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MKPlaceCardActionItem *favoriteActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *flyoverActionItem;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MKPlaceCardActionItem *homeActionItem;
@property (nonatomic) BOOL isCurrentLocation; // ivar: _isCurrentLocation
@property (readonly, nonatomic) MKPlaceCardActionItem *messageActionItem;
@property (weak, nonatomic) id *placeCardDelegate; // ivar: _placeCardDelegate
@property (nonatomic) BOOL placeInBookmarks; // ivar: _placeInBookmarks
@property (nonatomic) BOOL placeInCollections; // ivar: _placeInCollections
@property (nonatomic) BOOL placeInShortcuts; // ivar: _placeInShortcuts
@property (readonly, nonatomic) MKPlaceCardActionItem *removeMarkerItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *reportAProblemAddPlaceFooterAction;
@property (readonly, nonatomic) MKPlaceCardActionItem *reportAProblemFooterAction;
@property (readonly, nonatomic) MKPlaceCardActionItem *shareActionItem;
@property (nonatomic) BOOL showContactActions; // ivar: _showContactActions
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MKPlaceActionManagerTransitDelegate> *transitCardDelegate; // ivar: _transitCardDelegate
@property (readonly, nonatomic) MKPlaceCardActionItem *websiteActionItem;


-(BOOL)_canClaimThisBusiness;
-(BOOL)_canShowCallAction;
-(BOOL)_canShowReportAProblem;
-(BOOL)_showAddPlaceFooterAction;
-(BOOL)_showCollectionItem;
-(BOOL)_showHomeShortcutItem;
-(BOOL)_showMapItemIdentifier;
-(BOOL)_showReportAProblem;
-(BOOL)_showReportAProblemFooterAction;
-(BOOL)_showWebsite;
-(BOOL)placeInCollectionsForAppearance:(id)arg0 ;
-(NSUInteger)options;
-(NSUInteger)placeMUIDForAppearance:(id)arg0 ;
-(id)actionItemForButtonItem:(id)arg0 ;
-(id)addToHomeItem;
-(id)contact;
-(id)createContactActions;
-(id)createFooterActions;
-(id)createMenuActions;
-(id)createRowActionsWithStyle:(NSUInteger)arg0 ;
-(id)createSearchAlongRouteActions;
-(id)delegate;
-(id)favoriteItemForFooter;
-(id)init;
-(id)mapItem;
-(id)placeItem;
-(id)shortPlacecardFooterActions;
-(id)transitDelegate;
-(id)transitLineItem;
-(void)_addInternalOnlyActions:(id)arg0 ;
-(void)_canMakeCalls:(id)arg0 ;
-(void)_enableStoreAction;
-(void)_launchMaps;
-(void)addLayoutInfoIfNeeded:(id)arg0 ;
-(void)openURL:(id)arg0 ;
-(void)performAction:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif