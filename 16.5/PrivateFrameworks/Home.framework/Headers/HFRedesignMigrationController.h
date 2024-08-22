// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFREDESIGNMIGRATIONCONTROLLER_H
#define HFREDESIGNMIGRATIONCONTROLLER_H

@class HMHome, NSArray, NAFuture;

#import <Foundation/Foundation.h>


@interface HFRedesignMigrationController : NSObject

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSArray *legacyFavoriteTiles; // ivar: _legacyFavoriteTiles
@property (retain, nonatomic) NAFuture *migrationFuture; // ivar: _migrationFuture


+(BOOL)homeNeedsMigration:(id)arg0 ;
-(BOOL)_accessoryLikeItemIsHighValue:(id)arg0 ;
-(BOOL)_accessoryLikeObjectMustUseLargerSize:(id)arg0 ;
-(CGFloat)_computeUsageThreshold:(id)arg0 ;
-(id)_clearHomeDashboardSectionOrder;
-(id)_migrateFavorites;
-(id)_migrateRoomOrder;
-(id)_migrateServiceItemsOrderInRooms;
-(id)_migrateShowOnHomeDashboard;
-(id)_migrateTileSize;
-(id)_sortAccessoriesInRoom:(id)arg0 fromScoreMap:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(void)_reduceScoreForRepeatingPattern:(id)arg0 accessoryScores:(id)arg1 ;
-(void)_updateScoreForAccessoriesInGroup:(id)arg0 accessoryScores:(id)arg1 incrementBy:(NSInteger)arg2 singleAccessoryIncrement:(NSInteger)arg3 ;
-(void)performMigrationIfNeeded;
-(void)performMigrationSuccessTasks;


@end


#endif