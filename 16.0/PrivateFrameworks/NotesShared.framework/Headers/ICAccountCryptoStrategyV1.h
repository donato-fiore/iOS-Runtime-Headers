// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICACCOUNTCRYPTOSTRATEGYV1_H
#define ICACCOUNTCRYPTOSTRATEGYV1_H

@class NSString;
@protocol ICAccountCryptoStrategy;


#import "ICCloudSyncingObjectCryptoStrategyV1.h"

@interface ICAccountCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICAccountCryptoStrategy>



@property (readonly) BOOL canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger intrinsicNotesVersion;
@property (readonly) BOOL isAuthenticated;
@property (readonly) Class superclass;


-(BOOL)hasSamePassphraseForObject:(id)arg0 ;
-(BOOL)setPassphrase:(id)arg0 hint:(id)arg1 ;
-(BOOL)updateAllNotesWithOldPassphrase:(id)arg0 toAccountPassphrase:(id)arg1 progress:(id)arg2 ;
-(void)copyCryptoFieldsFromAccount:(id)arg0 ;
-(void)mergeEncryptedDataFromRecord:(id)arg0 ;
-(void)removePassphrase;


@end


#endif