// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBJECTANALYTICS_H
#define OBJECTANALYTICS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AnalyticsWorkspace.h"

@interface ObjectAnalytics : NSObject {
    AnalyticsWorkspace *wspace;
    NSString *entityName;
    BOOL managedCache;
}




-(NSInteger)removeEntitiesMatching:(id)arg0 ;
-(NSUInteger)countEntitiesMatching:(id)arg0 ;
-(NSUInteger)updateEntitiesMatching:(id)arg0 properties:(id)arg1 ;
-(id)_fetch:(id)arg0 sortDesc:(id)arg1 ;
-(id)_fetch:(id)arg0 sortDesc:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)_firstLastHappened:(BOOL)arg0 ;
-(id)createEntity;
-(id)createEntityForEntityName:(id)arg0 ;
-(id)createTemporaryEntity;
-(id)createTemporaryEntityForEntityName:(id)arg0 ;
-(id)fetchAllEntityDictionariesWithProperties:(id)arg0 ;
-(id)fetchEntitiesFreeForm:(id)arg0 sortDesc:(id)arg1 ;
-(id)fetchEntitiesFreeForm:(id)arg0 sortDesc:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)fetchEntityDictionariesWithProperties:(id)arg0 predicate:(id)arg1 ;
-(id)fetchEntityDictionariesWithProperties:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)fetchEntityDictionariesWithProperties:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 ;
-(id)firstHappened;
-(id)getDescriptionForName:(id)arg0 ;
-(id)initWithWorkspace:(id)arg0 entityName:(id)arg1 withCache:(BOOL)arg2 ;
-(id)lastHappened;
-(void)moveTemporaryEntityToMainContext:(id)arg0 ;
-(void)refresh:(id)arg0 ;
-(void)removeEntities:(id)arg0 ;
-(void)save;


@end


#endif