// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPCLOUDCLIENTREGISTRATION_H
#define MSPCLOUDCLIENTREGISTRATION_H

@class NSString, CKContainer, NSUUID, NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "MSPCloudClientRegistrationRecord.h"

@interface MSPCloudClientRegistration : NSObject

@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) CKContainer *ckContainer;
@property (retain, nonatomic) NSUUID *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) MSPCloudClientRegistrationRecord *clientRecord; // ivar: _clientRecord
@property (retain, nonatomic) NSDate *lastRegistrationFetch; // ivar: _lastRegistrationFetch
@property (retain, nonatomic) NSDate *lastRegistrationUpdate; // ivar: _lastRegistrationUpdate
@property (nonatomic) NSUInteger maxEarliestCompatibleEpoch; // ivar: _maxEarliestCompatibleEpoch
@property (retain, nonatomic) NSArray *otherClientRecords; // ivar: _otherClientRecords


+(id)zoneID;
-(id)initWithAccountIdentifier:(id)arg0 clientIdentifier:(id)arg1 ;
-(void)checkClientCompatibilityWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)fetchAccountIdentifierWithCompletion:(id)arg0 ;
-(void)fetchClientRegistrationRecordsCreatingZoneIfNecessaryWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)fetchClientRegistrationRecordsWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)pushClientRegistrationRecord:(id)arg0 group:(id)arg1 completion:(id)arg2 ;
-(void)removeCloudRegistrationContainerWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)setupCloudContainerWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)updateClientRegistrationRecordWithGroup:(id)arg0 completion:(id)arg1 ;


@end


#endif