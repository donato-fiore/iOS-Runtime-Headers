// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDCOMPLETEPARTICIPANTVETTINGOPERATION_H
#define CKDCOMPLETEPARTICIPANTVETTINGOPERATION_H

@class NSString, NSData, CKShareMetadata;
@protocol CKCompleteParticipantVettingOperationCallbacks;


#import "CKDOperation.h"

@interface CKDCompleteParticipantVettingOperation : CKDOperation

@property (readonly, nonatomic) NSString *baseToken; // ivar: _baseToken
@property (retain, nonatomic) NSObject<CKCompleteParticipantVettingOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, nonatomic) NSString *displayedHostname; // ivar: _displayedHostname
@property (readonly, nonatomic) NSData *encryptedKey; // ivar: _encryptedKey
@property (readonly, nonatomic) NSString *routingKey; // ivar: _routingKey
@property (retain, nonatomic) CKShareMetadata *shareMetadata; // ivar: _shareMetadata
@property (retain, nonatomic) NSString *shortToken; // ivar: _shortToken
@property (nonatomic) NSUInteger state;
@property (copy, nonatomic) id *verifyProgressShareMetadataFetchedBlock; // ivar: _verifyProgressShareMetadataFetchedBlock
@property (copy, nonatomic) id *verifyProgressURLReconstructedBlock; // ivar: _verifyProgressURLReconstructedBlock
@property (readonly, nonatomic) NSString *vettingEmail; // ivar: _vettingEmail
@property (readonly, nonatomic) NSString *vettingPhone; // ivar: _vettingPhone
@property (readonly, nonatomic) NSString *vettingToken; // ivar: _vettingToken


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(id)shortSharingTokenFromData:(id)arg0 ;
-(id)shortSharingTokenFromFullToken:(id)arg0 ;
-(void)_forceFetchShareMetadata;
-(void)_performAuthKitVerification;
-(void)_reconstructShareURL;
-(void)_reconstructShortToken;
-(void)_verifyOONParticipant;
-(void)main;


@end


#endif