// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICACCOUNTCRYPTOSTRATEGYV2_H
#define ICACCOUNTCRYPTOSTRATEGYV2_H

@class NSString;
@protocol ICAccountCryptoStrategy;


#import "ICCloudSyncingObjectCryptoStrategyV2.h"

@interface ICAccountCryptoStrategyV2 : ICCloudSyncingObjectCryptoStrategyV2 <ICAccountCryptoStrategy>



@property (readonly) BOOL canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger intrinsicNotesVersion;
@property (readonly) BOOL isAuthenticated;
@property (readonly) Class superclass;


-(BOOL)hasSamePassphraseForObject:(id)arg0 ;
-(BOOL)isPassphraseCorrect:(id)arg0 ;
-(BOOL)setPassphrase:(id)arg0 hint:(id)arg1 ;
-(BOOL)updateAllNotesWithOldPassphrase:(id)arg0 toAccountPassphrase:(id)arg1 progress:(id)arg2 ;
-(void)copyCryptoFieldsFromAccount:(id)arg0 ;
-(void)mergeEncryptedDataFromRecord:(id)arg0 ;
-(void)removePassphrase;


@end


#endif