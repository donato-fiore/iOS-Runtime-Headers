// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSENDLATERPERSISTENCE_H
#define EDSENDLATERPERSISTENCE_H

@class NSString;
@protocol EFLoggable, EDPersistenceDatabaseSchemaProvider, EDMessageChangeHookResponder, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"

@interface EDSendLaterPersistence : NSObject <EFLoggable, EDPersistenceDatabaseSchemaProvider>



@property (retain, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<EDMessageChangeHookResponder> *hookResponder; // ivar: _hookResponder
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // ivar: _writeQueue


+(id)log;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
-(id)initWithDatabase:(id)arg0 hookResponder:(id)arg1 ;
-(void)persistSendLaterForMessages:(id)arg0 date:(id)arg1 ;


@end


#endif