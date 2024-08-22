// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACEACTIONMANAGER_H
#define MKPLACEACTIONMANAGER_H

@class TUCallProvider, NSString;
@protocol MKPlaceActionManagerProtocol;

#import <Foundation/Foundation.h>

#import "MKPlaceCardActionItem.h"

@interface MKPlaceActionManager : NSObject <MKPlaceActionManagerProtocol>

 {
    MKPlaceCardActionItem *_favoriteActionItem;
    MKPlaceCardActionItem *_homeActionItem;
    MKPlaceCardActionItem *_collectionActionItem;
    MKPlaceCardActionItem *_callActionItem;
    MKPlaceCardActionItem *_websiteActionItem;
    MKPlaceCardActionItem *_brandStoreActionItem;
    TUCallProvider *_callProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MKPlaceCardActionItem *favoriteActionItem;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MKPlaceCardActionItem *homeActionItem;
@property (nonatomic) BOOL isCurrentLocation; // ivar: _isCurrentLocation
@property (weak, nonatomic) id *placeCardDelegate; // ivar: _placeCardDelegate
@property (nonatomic) BOOL placeInBookmarks; // ivar: _placeInBookmarks
@property (nonatomic) BOOL placeInCollections; // ivar: _placeInCollections
@property (nonatomic) BOOL placeInShortcuts; // ivar: _placeInShortcuts
@property (readonly, nonatomic) MKPlaceCardActionItem *removeMarkerItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *reportAProblemAddPlaceFooterAction;
@property (readonly, nonatomic) MKPlaceCardActionItem *reportAProblemFooterAction;
@property (nonatomic) BOOL showContactActions; // ivar: _showContactActions
@property (readonly) Class superclass;
@property (weak, nonatomic) id *transitCardDelegate; // ivar: _transitCardDelegate


-(BOOL)_showAddPlaceEdit;
-(BOOL)_showCollectionItem;
-(BOOL)_showHomeShortcutItem;
-(BOOL)_showMapItemIdentifier;
-(BOOL)_showReportAProblem;
-(BOOL)_showReportAnIssue;
-(BOOL)_showWebsite;
-(NSUInteger)options;
-(id)addToHomeItem;
-(id)collectionItemForFooter:(BOOL)arg0 ;
-(id)contact;
-(id)createFooterActions;
-(id)createMenuActions;
-(id)createRowActionsWithStyle:(NSUInteger)arg0 ;
-(id)delegate;
-(id)favoriteItemForFooter;
-(id)init;
-(id)mapItem;
-(id)placeItem;
-(id)shortPlacecardFooterActions;
-(id)transitDelegate;
-(id)transitLineItem;
-(id)websiteGlyphName;
-(void)_addInternalOnlyActions:(id)arg0 ;
-(void)_canMakeCalls:(id)arg0 ;
-(void)_enableStoreAction;
-(void)_launchMaps;
-(void)addLayoutInfoIfNeeded:(id)arg0 ;
-(void)openURL:(id)arg0 ;
-(void)performAction:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif