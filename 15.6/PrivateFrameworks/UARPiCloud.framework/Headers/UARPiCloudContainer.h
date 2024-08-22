// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UARPICLOUDCONTAINER_H
#define UARPICLOUDCONTAINER_H

@class CKContainer, NSString, CKDatabase, CKServerChangeToken, NSMutableSet, NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface UARPiCloudContainer : NSObject

@property (readonly) CKContainer *container; // ivar: _container
@property (readonly, copy) NSString *containerID; // ivar: _containerID
@property (readonly) CKDatabase *database; // ivar: _database
@property (copy) CKServerChangeToken *databaseChangeToken; // ivar: _databaseChangeToken
@property (retain) id *publicKey; // ivar: _publicKey
@property (copy) NSMutableSet *updatedRecords; // ivar: _updatedRecords
@property (copy) NSMutableSet *updatedZones; // ivar: _updatedZones
@property (copy) NSData *verificationCertificate; // ivar: _verificationCertificate
@property (copy) NSDictionary *verificationCertificates; // ivar: _verificationCertificates


-(BOOL)isCHIPContainer;
-(BOOL)requiresPrefForSigningBeta;
-(id)initWithContainerID:(id)arg0 ;
-(void)createContainerWithIdentifier:(id)arg0 ;
-(void)processVerificationCertificateRecord:(id)arg0 ;


@end


#endif