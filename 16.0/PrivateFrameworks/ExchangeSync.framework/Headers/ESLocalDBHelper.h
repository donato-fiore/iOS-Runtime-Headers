// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESLOCALDBHELPER_H
#define ESLOCALDBHELPER_H

@class NSString, CNContactStore, NoteContext, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ESCalDBHelper.h"

@interface ESLocalDBHelper : NSObject {
    NSObject<OS_dispatch_queue> *_abDBQueue;
    NSObject<OS_dispatch_queue> *_calDBQueue;
    NSObject<OS_dispatch_queue> *_noteDBQueue;
    ? _calDB;
}


@property (nonatomic) int abConnectionCount; // ivar: _abConnectionCount
@property (nonatomic) *void abDB; // ivar: _abDB
@property (nonatomic) int calConnectionCount; // ivar: _calConnectionCount
@property ? calDB;
@property (retain, nonatomic) ESCalDBHelper *calDBHelper; // ivar: _calDBHelper
@property (copy, nonatomic) id *calUnitTestCallbackBlock; // ivar: _calUnitTestCallbackBlock
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (nonatomic) int noteConnectionCount; // ivar: _noteConnectionCount
@property (retain, nonatomic) NoteContext *noteDB; // ivar: _noteDB
@property (retain, nonatomic) NSMutableArray *saveRequests; // ivar: _saveRequests


+(id)sharedInstanceForAccountType:(id)arg0 creatingClass:(Class)arg1 ;
+(void)abSetTestABDBDir:(id)arg0 ;
+(void)calSetTestCalDBDir:(id)arg0 ;
-(*void)abDBThrowOnNil:(BOOL)arg0 ;
-(?)calDatabaseForAccountID;
-(?)calDatabaseForAuxDatabaseRef;
-(BOOL)_abOpenDBWithClientIdentifier:(id)arg0 ;
-(BOOL)abCloseDBAndSave:(BOOL)arg0 ;
-(BOOL)calCloseDatabaseForAccountID:(id)arg0 save:(BOOL)arg1 ;
-(BOOL)calCloseDatabaseForAuxDatabaseRef:(*void)arg0 save:(BOOL)arg1 ;
-(BOOL)calSaveDatabaseAndFlushCachesForAccountID:(id)arg0 ;
-(BOOL)calSaveDatabaseForAccountID:(id)arg0 ;
-(BOOL)calSaveDatabaseForAuxDatabaseRef:(*void)arg0 ;
-(BOOL)noteCloseDBAndSave:(BOOL)arg0 ;
-(void)abOpenDBWithClientIdentifier:(id)arg0 ;
-(void)addSaveRequest:(id)arg0 ;
-(void)calOpenDatabaseAsGenericClientForAccountID:(id)arg0 ;
-(void)calOpenDatabaseAsGenericClientForAuxDatabaseRef:(*void)arg0 ;
-(void)calOpenDatabaseForAccountID:(id)arg0 clientID:(id)arg1 ;
-(void)calOpenDatabaseForAuxDatabaseRef:(*void)arg0 clientID:(id)arg1 ;
-(void)calUnitTestsSetCallbackBlockForSave:(id)arg0 ;


@end


#endif