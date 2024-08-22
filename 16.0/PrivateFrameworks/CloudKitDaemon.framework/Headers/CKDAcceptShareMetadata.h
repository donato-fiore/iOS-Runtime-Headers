// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDACCEPTSHAREMETADATA_H
#define CKDACCEPTSHAREMETADATA_H

@class NSString, NSData, CKRecordID, NSURL;

#import <Foundation/Foundation.h>


@interface CKDAcceptShareMetadata : NSObject

@property (nonatomic) BOOL acceptedInProcess; // ivar: _acceptedInProcess
@property (retain, nonatomic) NSString *anonymousCKUserID; // ivar: _anonymousCKUserID
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (retain, nonatomic) NSString *participantID; // ivar: _participantID
@property (retain, nonatomic) NSData *pppcsProtectionInfo; // ivar: _pppcsProtectionInfo
@property (retain, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (nonatomic) NSUInteger publicKeyVersion; // ivar: _publicKeyVersion
@property (retain, nonatomic) NSData *publicPCSData; // ivar: _publicPCSData
@property (retain, nonatomic) NSString *publicPCSEtag; // ivar: _publicPCSEtag
@property (retain, nonatomic) CKRecordID *shareRecordID; // ivar: _shareRecordID
@property (retain, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (nonatomic) *_PCSIdentityData signingPCSIdentity; // ivar: _signingPCSIdentity


-(void)dealloc;


@end


#endif