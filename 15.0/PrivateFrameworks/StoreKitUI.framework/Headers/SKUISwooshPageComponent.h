// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISWOOSHPAGECOMPONENT_H
#define SKUISWOOSHPAGECOMPONENT_H

@class NSArray, NSString, NSURL;


#import "SKUIPageComponent.h"

@interface SKUISwooshPageComponent : SKUIPageComponent {
    NSInteger _fcKind;
    NSInteger _missingDataCount;
    BOOL _showsItemTitles;
}


@property (readonly, nonatomic) NSArray *bricks; // ivar: _bricks
@property (readonly, nonatomic) SKUILockupStyle lockupStyle; // ivar: _lockupStyle
@property (readonly, nonatomic) NSArray *lockups; // ivar: _lockups
@property (readonly, nonatomic) NSArray *mediaComponents; // ivar: _mediaComponents
@property (readonly, nonatomic) NSString *platformKeyProfile; // ivar: _platformKeyProfile
@property (readonly, nonatomic) NSInteger seeAllStyle; // ivar: _seeAllStyle
@property (readonly, nonatomic) NSString *seeAllTitle; // ivar: _seeAllTitle
@property (readonly, nonatomic) NSURL *seeAllURL; // ivar: _seeAllURL
@property (readonly, nonatomic) BOOL showsBrickTitles;
@property (readonly, nonatomic) BOOL showsIndexNumbers; // ivar: _showsIndexNumbers
@property (readonly, nonatomic) BOOL showsMediaTitles;
@property (readonly, nonatomic) NSInteger swooshType; // ivar: _swooshType
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)_isBrickAvailable:(id)arg0 withPageContext:(id)arg1 ;
-(BOOL)isMissingItemData;
-(NSInteger)componentType;
-(NSUInteger)_defaultVisibleFieldsForItemKind:(NSInteger)arg0 ;
-(id)_brickItemsWithChildren:(id)arg0 customPageContext:(id)arg1 ;
-(id)_brickItemsWithChildren:(id)arg0 featuredPageContext:(id)arg1 ;
-(id)_lockupWithItemIdentifier:(id)arg0 context:(id)arg1 ;
-(id)_lockupsWithChildren:(id)arg0 context:(id)arg1 ;
-(id)_lockupsWithChildren:(id)arg0 featuredPageContext:(id)arg1 ;
-(id)_mediaComponentsWithChildren:(id)arg0 context:(id)arg1 ;
-(id)_newLockupComponentWithItem:(id)arg0 defaultStyle:(struct SKUILockupStyle )arg1 ;
-(id)_updateLockupItemsWithItems:(id)arg0 ;
-(id)initWithCustomPageContext:(id)arg0 ;
-(id)initWithFeaturedContentContext:(id)arg0 kind:(NSInteger)arg1 ;
-(id)initWithItemList:(id)arg0 ;
-(id)initWithLockups:(id)arg0 swooshType:(NSInteger)arg1 title:(id)arg2 ;
-(id)initWithRelatedContentContext:(id)arg0 ;
-(id)initWithRoomContext:(id)arg0 ;
-(id)metricsElementName;
-(id)valueForMetricsField:(id)arg0 ;
-(struct SKUILockupStyle )_lockupStyleWithLockups:(id)arg0 ;
-(void)_reloadMissingDataCount;
-(void)_setSeeAllValuesWithLinkInfo:(id)arg0 ;
-(void)_updateBricksWithItems:(id)arg0 ;
-(void)_updateLockup:(id)arg0 withItem:(id)arg1 ;
-(void)_updateLockupItemsWithLookupResponse:(id)arg0 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif