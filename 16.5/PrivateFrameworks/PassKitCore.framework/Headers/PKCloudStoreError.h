// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCLOUDSTOREERROR_H
#define PKCLOUDSTOREERROR_H

@class NSError;



@interface PKCloudStoreError : NSError



+(BOOL)_isCloudKitErrorDomain:(id)arg0 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 userInfo:(id)arg2 ;
-(BOOL)isAccountUnavailable;
-(BOOL)isAuthenticationOrQuotaError;
-(BOOL)isChangeTokenExpired;
-(BOOL)isInitializationTimeOutError;
-(BOOL)isKeychainSyncingInProgress;
-(BOOL)isManateeNotAvailableError;
-(BOOL)isNetworkUnavailable;
-(BOOL)isPCSError;
-(BOOL)isPartialError;
-(BOOL)isParticipantMayNeedVerificationError;
-(BOOL)isUnknownItemError;
-(BOOL)isUnrecoverableDecryptionError;
-(BOOL)isZoneNotFoundError;
-(NSInteger)_code;
-(id)_allPartialErrors;
-(id)_objectsOfClassTypeFromPartialErrors:(Class)arg0 ;
-(id)_partialErrorsDictionary;
-(id)allZoneIDs;
-(id)errorForPartialErrorWithObject:(id)arg0 ;
-(id)initWithDomain:(id)arg0 code:(NSInteger)arg1 userInfo:(id)arg2 ;
-(id)initWithError:(id)arg0 ;


@end


#endif