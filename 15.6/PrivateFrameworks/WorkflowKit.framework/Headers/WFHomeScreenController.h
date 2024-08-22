// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHOMESCREENCONTROLLER_H
#define WFHOMESCREENCONTROLLER_H

@class NSMutableSet;
@protocol WFDatabaseObjectObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFDatabase.h"

@interface WFHomeScreenController : NSObject <WFDatabaseObjectObserver>



@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSMutableSet *homeScreenShortcutIDs; // ivar: _homeScreenShortcutIDs
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)iconImageForIcon:(id)arg0 ;
+(id)launchImageForIcon:(id)arg0 inLandscape:(BOOL)arg1 ;
+(id)sharedInstance;
+(void)drawIcon:(id)arg0 maxSize:(CGFloat)arg1 inRect:(struct CGRect )arg2 ;
+(void)migrateOpenAppWebClipsIfNeededWithDatabaseAccessor:(id)arg0 ;
+(void)migratePreYukonWebClipsIfNeeded;
+(void)migrateWebClipsIfNeededWithDatabaseAccessor:(id)arg0 ;
-(BOOL)addWorkflowToHomeScreen:(id)arg0 withName:(id)arg1 icon:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(void)databaseDidChange:(id)arg0 modified:(id)arg1 inserted:(id)arg2 removed:(id)arg3 ;
-(void)startListeningForDatabaseChanges;
-(void)updateWebClipIfNeeded:(id)arg0 ;


@end


#endif