// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSQLSTOREMANAGER_H
#define BMSQLSTOREMANAGER_H

@class NSMutableSet;
@protocol BMIdentifiable;


#import "BMSQLStore.h"

@interface BMSQLStoreManager : BMSQLStore

@property (readonly, nonatomic) NSMutableSet *managedTableNames; // ivar: _managedTableNames
@property (retain, nonatomic) NSObject<BMIdentifiable> *sessionEvent; // ivar: _sessionEvent


+(id)migrations;
-(BOOL)addManagedTable:(id)arg0 derivedFromSource:(id)arg1 ;
-(BOOL)addManagedTable:(id)arg0 derivedFromStream:(id)arg1 ;
-(id)deleteRowsDerivedFromEvent:(id)arg0 ;
-(id)deleteRowsDerivedFromEvents:(id)arg0 ;
-(id)deleteRowsDerivedFromStream:(id)arg0 eventIdentifier:(id)arg1 ;
-(id)deleteRowsDerivedFromStream:(id)arg0 eventIdentifiers:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)managedTables;
-(int)deleteRows:(id)arg0 fromTable:(id)arg1 ;
-(void)beginManagedSessionWithEvent:(id)arg0 ;
-(void)endManagedSession;
-(void)prepareTriggerForTable:(id)arg0 ;


@end


#endif