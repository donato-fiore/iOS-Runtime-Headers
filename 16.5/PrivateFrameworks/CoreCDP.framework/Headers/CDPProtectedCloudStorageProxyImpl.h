// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPPROTECTEDCLOUDSTORAGEPROXYIMPL_H
#define CDPPROTECTEDCLOUDSTORAGEPROXYIMPL_H

@class NSString;
@protocol CDPProtectedCloudStorageProxy;

#import <Foundation/Foundation.h>


@interface CDPProtectedCloudStorageProxyImpl : NSObject <CDPProtectedCloudStorageProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(BOOL)_performPCSBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)isWalrusEnabledWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)pcsIdentityMigrateToiCDPWithInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData *)arg0 error:(*id)arg1 ;
-(BOOL)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg0 error:(*id)arg1 ;
-(BOOL)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)pcsRestoreLocalBackup:(id)arg0 error:(*id)arg1 ;
-(BOOL)pcsSynchronizeKeysWithInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)repairWalrusWithAccountIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)setWalrusEnabled:(BOOL)arg0 accountIdentifier:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(id)arg0 error:(*id)arg1 ;
-(struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(id)arg0 error:(*id)arg1 ;


@end


#endif