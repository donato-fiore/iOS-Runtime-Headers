// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCCMOSAICLAYOUT_H
#define HUCCMOSAICLAYOUT_H

@class NSMutableArray, NSArray, NSString;
@protocol HUCCMosaicOrderable;

#import <Foundation/Foundation.h>


@interface HUCCMosaicLayout : NSObject

@property (retain, nonatomic) NSMutableArray *accessories; // ivar: _accessories
@property (nonatomic) NSUInteger accessoriesNeeded; // ivar: _accessoriesNeeded
@property (readonly, nonatomic) NSArray *arrangedItems;
@property (retain, nonatomic) NSMutableArray *fillers; // ivar: _fillers
@property (retain, nonatomic) NSObject<HUCCMosaicOrderable> *homeItem; // ivar: _homeItem
@property (readonly, nonatomic) BOOL isComplete;
@property (retain, nonatomic) NSString *layoutDescription; // ivar: _layoutDescription
@property (readonly, nonatomic) NSUInteger layoutType; // ivar: _layoutType
@property (readonly, nonatomic) NSUInteger numberOfFilledItems; // ivar: _numberOfFilledItems
@property (nonatomic) NSUInteger numberOfMisses; // ivar: _numberOfMisses
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority
@property (retain, nonatomic) NSMutableArray *scenes; // ivar: _scenes
@property (nonatomic) NSUInteger scenesNeeded; // ivar: _scenesNeeded


+(NSUInteger)maxItemsNeededForLandscape;
+(NSUInteger)maxItemsNeededForPortrait;
+(id)allLandscapeLayouts;
+(id)allPortraitLayouts;
+(id)sortDescriptors;
-(id)description;
-(id)initWithLayoutType:(NSUInteger)arg0 ;
-(void)_addAccessoryItem:(id)arg0 ;
-(void)_addFillerItem:(id)arg0 ;
-(void)_addSceneItem:(id)arg0 ;
-(void)_registerPossibleMiss;
-(void)_sizeAllItems;
-(void)addItem:(id)arg0 ;


@end


#endif