// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEQUICKLINKMENUELEMENTCOORDINATOR_H
#define MUPLACEQUICKLINKMENUELEMENTCOORDINATOR_H

@class UIContextMenuInteraction, NSMutableDictionary, NSArray;
@protocol MUPlaceQuickLinkMenuElementCoordinatorDataSource, MUInfoCardAnalyticsDelegate;

#import <Foundation/Foundation.h>


@interface MUPlaceQuickLinkMenuElementCoordinator : NSObject {
    id<MUPlaceQuickLinkMenuElementCoordinatorDataSource> *_dataSource;
    UIContextMenuInteraction *_menuInteraction;
    NSMutableDictionary *_cachedLockupImagesByIdentifiers;
    BOOL _hasFetchedQuickLinks;
    NSArray *_cachedQuickLinks;
}


@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate


-(id)_buildMenuElementForQuickLink:(id)arg0 ;
-(id)buildQuickLinkMenuElement;
-(id)initWithContextMenuInteraction:(id)arg0 dataSource:(id)arg1 ;
-(void)_captureTapActionWithAppClipLink:(id)arg0 ;
-(void)_captureTapActionWithQuickLink:(id)arg0 ;
-(void)_downloadImageWithQuickLink:(id)arg0 completion:(id)arg1 ;
-(void)_fetchQuickLinksForMenuElementCoordinatorWithCompletion:(id)arg0 ;
-(void)_instrumentQuickLink:(id)arg0 ;
-(void)_loadAppClipWithQuickLink:(id)arg0 metrics:(id)arg1 completion:(id)arg2 ;
-(void)_loadOfficialAppWithQuickLink:(id)arg0 metrics:(id)arg1 completion:(id)arg2 ;


@end


#endif