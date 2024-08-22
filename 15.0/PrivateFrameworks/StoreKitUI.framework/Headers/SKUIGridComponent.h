// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIGRIDCOMPONENT_H
#define SKUIGRIDCOMPONENT_H

@class NSArray;


#import "SKUIPageComponent.h"

@interface SKUIGridComponent : SKUIPageComponent {
    NSInteger _missingItemCount;
}


@property (readonly, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic) SKUIEditorialStyle editorialStyle; // ivar: _editorialStyle
@property (readonly, nonatomic) NSInteger gridType; // ivar: _gridType
@property (readonly, nonatomic) SKUILockupStyle lockupStyle; // ivar: _lockupStyle
@property (readonly, nonatomic) BOOL showsIndexNumbers; // ivar: _showsIndexNumbers


-(BOOL)isMissingItemData;
-(NSInteger)componentType;
-(id)_newLockupComponentWithItem:(id)arg0 defaultStyle:(struct SKUILockupStyle )arg1 ;
-(id)_updateWithInvalidItemIdentifiers:(id)arg0 ;
-(id)_updateWithMissingItems:(id)arg0 ;
-(id)description;
-(id)initWithBrickItems:(id)arg0 ;
-(id)initWithCustomPageContext:(id)arg0 ;
-(id)initWithFeaturedContentContext:(id)arg0 kind:(NSInteger)arg1 ;
-(id)initWithGridItems:(id)arg0 ;
-(id)initWithLockups:(id)arg0 ;
-(id)initWithRoomContext:(id)arg0 gridType:(NSInteger)arg1 ;
-(id)initWithViewElement:(id)arg0 ;
-(id)metricsElementName;
-(void)_reloadMissingItemCount;
-(void)enumerateMissingItemIdentifiersFromIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif