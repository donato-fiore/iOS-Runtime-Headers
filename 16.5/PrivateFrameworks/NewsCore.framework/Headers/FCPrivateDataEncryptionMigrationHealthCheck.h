// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPRIVATEDATAENCRYPTIONMIGRATIONHEALTHCHECK_H
#define FCPRIVATEDATAENCRYPTIONMIGRATIONHEALTHCHECK_H

@class CKContainer, NSString;
@protocol FCCKDatabaseEncryptionDelegate;

#import <Foundation/Foundation.h>

#import "FCCKPrivateDatabaseSchema.h"

@interface FCPrivateDataEncryptionMigrationHealthCheck : NSObject <FCCKDatabaseEncryptionDelegate>



@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (retain, nonatomic) CKContainer *containerWithZoneWidePCS; // ivar: _containerWithZoneWidePCS
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FCCKPrivateDatabaseSchema *schema; // ivar: _schema
@property (retain, nonatomic) CKContainer *secureContainer; // ivar: _secureContainer
@property (readonly) Class superclass;


+(id)run;
-(id)_prepareHistoryAndReturnExpectations;
-(id)_prepareIssueHistoryAndReturnExpectations;
-(id)_preparePersonalizationProfileAndReturnExpectations;
-(id)_prepareReadingListAndReturnExpectations;
-(id)_prepareReferenceToChannelMembershipsAndReturnExpectations;
-(id)_prepareSensitiveSubscriptionsAndReturnExpectations;
-(id)_prepareSentinelsAndReturnExpectations;
-(id)_prepareShortcutsAndReturnExpectations;
-(id)_prepareSubscriptionsAndReturnExpectations;
-(id)_prepareTagSettingsAndReturnExpectations;
-(id)_prepareUserInfoAndReturnExpectations;
-(id)init;
-(void)_eraseAllPrivateData;
-(void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg0 completion:(id)arg1 ;
-(void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg0 completion:(id)arg1 ;
-(void)fetchPrivateDataEncryptionIsRequiredForDatabase:(id)arg0 completion:(id)arg1 ;
-(void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg0 completion:(id)arg1 ;
-(void)fetchShouldSecureSubscriptionsForDatabase:(id)arg0 completion:(id)arg1 ;
-(void)run;


@end


#endif