// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANALYTICSSTOREMOHANDLER_H
#define ANALYTICSSTOREMOHANDLER_H


#import <Foundation/Foundation.h>

#import "AnalyticsPersistenceManager.h"
#import "AnalyticsStoreMOContext.h"

@interface AnalyticsStoreMOHandler : NSObject

@property (retain, nonatomic) AnalyticsPersistenceManager *persistenceManager; // ivar: _persistenceManager
@property (retain, nonatomic) AnalyticsStoreMOContext *storeMOContext; // ivar: _storeMOContext
@property (nonatomic) NSUInteger storeType; // ivar: _storeType


-(BOOL)setBssManagedObjectPropertyValueForKeyAndSave:(id)arg0 forKey:(id)arg1 withValue:(id)arg2 ;
-(BOOL)setNetworkManagedObjectPropertyValueForKeyAndSave:(id)arg0 forKey:(id)arg1 withValue:(id)arg2 ;
-(id)initWithType:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)managedObjectContext;
-(void)ageOutManagedObjectsOlderThan:(CGFloat)arg0 ;
-(void)performBlockOnManagedObjectContext:(id)arg0 block:(id)arg1 ;
-(void)performBlockOnManagedObjectContextForNSData:(id)arg0 withDate:(id)arg1 block:(id)arg2 ;
-(void)performPruneBasedOnStoreSize;
-(void)pruneManagedObjects;
-(void)saveManagedObjectContext;
-(void)updateManagedObjectContextWithoutSave;


@end


#endif