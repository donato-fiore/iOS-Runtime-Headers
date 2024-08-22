// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDDATADETECTIONPERSISTENCE_H
#define EDDATADETECTIONPERSISTENCE_H

@class NSString;
@protocol EDPersistenceDatabaseProtectedSchemaProvider, EDMessageChangeHookResponder;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"
#import "EDMessagePersistence.h"

@interface EDDataDetectionPersistence : NSObject <EDPersistenceDatabaseProtectedSchemaProvider, EDMessageChangeHookResponder>



@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<EDMessageChangeHookResponder> *hookResponder; // ivar: _hookResponder
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly) Class superclass;


+(id)_dataDetectionResultsTableSchemaWithName:(id)arg0 ;
+(id)protectedTablesAndForeignKeysToResolve:(*id)arg0 ;
-(BOOL)_addDataDetectionResults:(id)arg0 withGlobalMessageID:(NSInteger)arg1 toTable:(id)arg2 withConnection:(id)arg3 ;
-(BOOL)_hookResponderRespondsToRequiredMethods:(id)arg0 ;
-(BOOL)addDataDetectionResults:(id)arg0 globalMessageID:(NSInteger)arg1 ;
-(id)_getPersistedMessagesFromGlobalMessageID:(NSInteger)arg0 ;
-(id)getDataDetectionResultRowIDsForGlobalMessageID:(NSInteger)arg0 ;
-(id)getDataDetectionResultsForGlobalMessageID:(NSInteger)arg0 ;
-(id)initWithDatabase:(id)arg0 messagePersistence:(id)arg1 hookResponder:(id)arg2 ;


@end


#endif