// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DALOCALDBHELPER_H
#define DALOCALDBHELPER_H

@class NSString, CNContactStore, NoteContext, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DACalDBHelper.h"

@interface DALocalDBHelper : NSObject {
    NSObject<OS_dispatch_queue> *_abDBQueue;
    NSObject<OS_dispatch_queue> *_calDBQueue;
    NSObject<OS_dispatch_queue> *_noteDBQueue;
}


@property (nonatomic) int abConnectionCount; // ivar: _abConnectionCount
@property (nonatomic) *void abDB; // ivar: _abDB
@property (retain, nonatomic) DACalDBHelper *calDBHelper; // ivar: _calDBHelper
@property (copy, nonatomic) id *calUnitTestCallbackBlock; // ivar: _calUnitTestCallbackBlock
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSString *familyDelegateACAccountID; // ivar: _familyDelegateACAccountID
@property (retain, nonatomic) NSString *familyDelegateAltDSID; // ivar: _familyDelegateAltDSID
@property (nonatomic) int noteConnectionCount; // ivar: _noteConnectionCount
@property (retain, nonatomic) NoteContext *noteDB; // ivar: _noteDB
@property (retain, nonatomic) NSMutableArray *saveRequests; // ivar: _saveRequests


+(id)abTestABDBDir;
+(id)calContainerProvider;
+(id)calMainDatabasePath;
+(id)os_log;
+(id)sharedInstanceForAccountType:(id)arg0 creatingClass:(Class)arg1 ;
+(void)abSetTestABDBDir:(id)arg0 ;
+(void)calSetMainDatabasePath:(id)arg0 containerProvider:(id)arg1 ;
-(*void)abDBThrowOnNil:(BOOL)arg0 ;
-(?)calDatabaseForAccountID;
-(?)calDatabaseForAuxDatabaseRef;
-(BOOL)_abOpenDBWithClientIdentifier:(id)arg0 ;
-(BOOL)abCloseDBAndSave:(BOOL)arg0 ;
-(BOOL)abSaveDB;
-(BOOL)calCloseDatabaseForAccountID:(id)arg0 save:(BOOL)arg1 ;
-(BOOL)calCloseDatabaseForAuxDatabaseRef:(*void)arg0 save:(BOOL)arg1 ;
-(BOOL)calSaveDatabaseAndFlushCachesForAccountID:(id)arg0 ;
-(BOOL)calSaveDatabaseForAccountID:(id)arg0 ;
-(BOOL)calSaveDatabaseForAuxDatabaseRef:(*void)arg0 ;
-(BOOL)noteCloseDBAndSave:(BOOL)arg0 ;
-(BOOL)noteSaveDB;
-(BOOL)useContacts;
-(id)abChangeTrackingID;
-(id)abConstraintPlistPath;
-(id)abDefaultAccountInfoSuitableForLogging;
-(id)init;
-(id)initWithContactsFamilyDelegateAltDSID:(id)arg0 familyDelegateACAccountID:(id)arg1 ;
-(void)_registerForAddressBookYieldNotifications;
-(void)abOpenDBAsGenericClient;
-(void)abOpenDBWithClientIdentifier:(id)arg0 ;
-(void)abProcessAddedImages;
-(void)abProcessAddedRecords;
-(void)abValidateDefaultSource;
-(void)addSaveRequest:(id)arg0 ;
-(void)calOpenDatabaseAsGenericClientForAccountID:(id)arg0 ;
-(void)calOpenDatabaseAsGenericClientForAuxDatabaseRef:(*void)arg0 ;
-(void)calOpenDatabaseForAccountID:(id)arg0 clientID:(id)arg1 ;
-(void)calOpenDatabaseForAuxDatabaseRef:(*void)arg0 clientID:(id)arg1 ;
-(void)dealloc;
-(void)executeAllSaveRequests;
-(void)noteOpenDB;
-(void)removeDelegateDatabasesNotMatchingAltDSIDs:(id)arg0 ;


@end


#endif