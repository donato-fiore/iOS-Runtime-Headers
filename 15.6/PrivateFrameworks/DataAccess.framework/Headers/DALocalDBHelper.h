// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DALOCALDBHELPER_H
#define DALOCALDBHELPER_H

@class NSString, CNContactStore, NoteContext, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DALocalDBHelper : NSObject {
    NSObject<OS_dispatch_queue> *_abDBQueue;
    NSObject<OS_dispatch_queue> *_calDBQueue;
    NSObject<OS_dispatch_queue> *_noteDBQueue;
}


@property (nonatomic) int abConnectionCount; // ivar: _abConnectionCount
@property (nonatomic) *void abDB; // ivar: _abDB
@property (nonatomic) int calConnectionCount; // ivar: _calConnectionCount
@property (nonatomic) *CalDatabase calDB; // ivar: _calDB
@property (copy, nonatomic) id *calUnitTestCallbackBlock; // ivar: _calUnitTestCallbackBlock
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSString *familyDelegateACAccountID; // ivar: _familyDelegateACAccountID
@property (retain, nonatomic) NSString *familyDelegateAltDSID; // ivar: _familyDelegateAltDSID
@property (nonatomic) int noteConnectionCount; // ivar: _noteConnectionCount
@property (retain, nonatomic) NoteContext *noteDB; // ivar: _noteDB
@property (retain, nonatomic) NSMutableArray *saveRequests; // ivar: _saveRequests


+(id)abTestABDBDir;
+(id)calTestCalDBDir;
+(id)os_log;
+(id)sharedInstanceForAccountType:(id)arg0 creatingClass:(Class)arg1 ;
+(void)abSetTestABDBDir:(id)arg0 ;
+(void)calSetTestCalDBDir:(id)arg0 ;
-(*void)abDBThrowOnNil:(BOOL)arg0 ;
-(BOOL)_abOpenDBWithClientIdentifier:(id)arg0 ;
-(BOOL)_calOpenDBWithClientIdentifier:(id)arg0 ;
-(BOOL)abCloseDBAndSave:(BOOL)arg0 ;
-(BOOL)abSaveDB;
-(BOOL)calCloseDBAndSave:(BOOL)arg0 ;
-(BOOL)calSaveDB;
-(BOOL)calSaveDBAndFlushCaches;
-(BOOL)noteCloseDBAndSave:(BOOL)arg0 ;
-(BOOL)noteSaveDB;
-(BOOL)useContacts;
-(id)abConstraintPlistPath;
-(id)abDefaultAccountInfoSuitableForLogging;
-(id)changeTrackingID;
-(id)init;
-(id)initWithContactsFamilyDelegateAltDSID:(id)arg0 familyDelegateACAccountID:(id)arg1 ;
-(void)_registerForAddressBookYieldNotifications;
-(void)_registerForCalendarYieldNotifications;
-(void)abOpenDBAsGenericClient;
-(void)abOpenDBWithClientIdentifier:(id)arg0 ;
-(void)abProcessAddedImages;
-(void)abProcessAddedRecords;
-(void)abValidateDefaultSource;
-(void)addSaveRequest:(id)arg0 ;
-(void)calClearSuperfluousChanges;
-(void)calOpenDBAsGenericClient;
-(void)calOpenDBWithClientIdentifier:(id)arg0 ;
-(void)calUnitTestsSetCallbackBlockForSave:(id)arg0 ;
-(void)dealloc;
-(void)executeAllSaveRequests;
-(void)noteOpenDB;
-(void)removeDelegateDatabasesNotMatchingAltDSIDs:(id)arg0 ;


@end


#endif