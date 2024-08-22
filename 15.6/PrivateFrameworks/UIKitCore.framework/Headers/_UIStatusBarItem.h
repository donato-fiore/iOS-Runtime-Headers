// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARITEM_H
#define _UISTATUSBARITEM_H

@class NSSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "_UIStatusBarIdentifier.h"
#import "_UIStatusBar.h"

@interface _UIStatusBarItem : NSObject

@property (readonly, nonatomic) NSSet *dependentEntryKeys;
@property (retain, nonatomic) NSMutableDictionary *displayItems; // ivar: _displayItems
@property (readonly, nonatomic) _UIStatusBarIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (readonly, weak) _UIStatusBar *statusBar; // ivar: _statusBar


+(Class)itemClassForIdentifier:(id)arg0 ;
+(id)createItemForIdentifier:(id)arg0 statusBar:(id)arg1 ;
+(id)defaultDisplayIdentifier;
+(id)displayItemIdentifierFromIdentifier:(id)arg0 string:(id)arg1 ;
+(id)displayItemIdentifierFromString:(id)arg0 ;
+(id)itemIdentifierForDisplayItemIdentifier:(id)arg0 ;
+(id)itemIdentifierFromString:(id)arg0 ;
-(BOOL)canEnableDisplayItem:(id)arg0 fromData:(id)arg1 ;
-(id)_applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg0 ;
-(id)description;
-(id)displayItemForIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 statusBar:(id)arg1 ;
-(id)overriddenStyleAttributesForData:(id)arg0 identifier:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;
-(void)applyStyleAttributes:(id)arg0 toDisplayItem:(id)arg1 ;
-(void)prepareAnimation:(id)arg0 forDisplayItem:(id)arg1 ;
-(void)updatedDisplayItemsWithData:(id)arg0 ;


@end


#endif