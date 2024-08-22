// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABFACEBOOKMIGRATOR_H
#define ABFACEBOOKMIGRATOR_H

@class ACAccountStore, NSString;

#import <Foundation/Foundation.h>


@interface ABFacebookMigrator : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (nonatomic) *void addressBook; // ivar: _addressBook
@property (nonatomic, getter=isCheckDone) BOOL checkDone;
@property (retain, nonatomic) NSString *destinationDescription; // ivar: _destinationDescription
@property (nonatomic) NSUInteger facebookContactsCount; // ivar: _facebookContactsCount
@property (nonatomic) *void facebookSource; // ivar: _facebookSource
@property (nonatomic) BOOL mayHaveFacebookSource; // ivar: _mayHaveFacebookSource
@property (nonatomic) int mergeDestinationSourceID; // ivar: _mergeDestinationSourceID


+(?)_performQuery:(?)arg0 withStoreIDconnection;
+(?)removeFacebookSensitiveInformation;
+(BOOL)isAccountTypeFacebook:(id)arg0 ;
+(BOOL)isSourceFacebook:(*void)arg0 ;
+(BOOL)mayHaveFacebookContacts:(*void)arg0 ;
+(int)_findFacebookStoreID:(struct CPSqliteConnection *)arg0 ;
-(BOOL)_mergeContactsFromAccount:(*void)arg0 toDestinationSourceID:(int)arg1 ;
-(BOOL)_removeContactsAccount:(*void)arg0 ;
-(BOOL)canMergeFacebookContacts;
-(id)initWithAddressBook:(*void)arg0 ;
-(id)initWithAddressBook:(*void)arg0 accountStore:(id)arg1 ;
-(int)findBestMergeDestinationSourceID;
-(void)_detectFacebookSource;
-(void)_startDatabaseDoctorToPerformAction:(id)arg0 ;
-(void)dealloc;
-(void)deleteFacebookContacts;
-(void)mergeFacebookContacts;
-(void)performPendingMergeOrDeleteAction;


@end


#endif