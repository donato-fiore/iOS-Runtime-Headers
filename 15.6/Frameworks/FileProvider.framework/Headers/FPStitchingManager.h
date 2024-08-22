// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPSTITCHINGMANAGER_H
#define FPSTITCHINGMANAGER_H

@class NSHashTable, NSMapTable, NSMutableArray, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface FPStitchingManager : NSObject {
    NSHashTable *_stitchingSessions;
    NSMapTable *_bouncedItems;
}


@property (readonly, nonatomic) NSMutableArray *allDeletedIDs;
@property (readonly, nonatomic) NSDictionary *allPlaceholderItemsByParentIdentifierAndName;
@property (readonly, nonatomic) NSArray *allPlaceholderReplacementsIDs;
@property (readonly, nonatomic) NSDictionary *stitchedFieldsAndItemsByItemIDs;


+(id)parentIdNameKeyForItem:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)cleanStitchedForItemID:(id)arg0 ignoreSession:(id)arg1 ;
-(id)init;
-(id)stitchedItemsForParentID:(id)arg0 ;
-(void)addBouncedItem:(id)arg0 ;
-(void)registerStitchingSession:(id)arg0 ;
-(void)removeBouncedItemsWithIDs:(id)arg0 ;


@end


#endif