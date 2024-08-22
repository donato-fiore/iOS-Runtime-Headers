// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKSIDETABLECONTEXT_H
#define EKSIDETABLECONTEXT_H

@class NSManagedObjectContext, NSString;



@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}




+(id)sideTableContext;
-(BOOL)_removeSqliteFiles;
-(id)_alarmsMatchingPredicate:(id)arg0 ;
-(id)_managedObjectModel;
-(id)_pathForPersistentStore;
-(id)_persistentStoreCoordinator;
-(id)_settingForKey:(id)arg0 ;
-(id)_urlForPersistentStore;
-(id)alarmsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)initWithConcurrencyType:(NSUInteger)arg0 ;
-(id)insertNewAlarm;
-(id)nextAlarmFireTime;
-(id)rootDirectory;
-(id)settingForKey:(id)arg0 ;
-(void)deleteAllAlarms;
-(void)setSetting:(id)arg0 forKey:(id)arg1 ;


@end


#endif