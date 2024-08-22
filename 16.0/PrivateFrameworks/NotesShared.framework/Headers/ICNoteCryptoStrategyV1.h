// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTECRYPTOSTRATEGYV1_H
#define ICNOTECRYPTOSTRATEGYV1_H

@class NSString;
@protocol ICNoteCryptoStrategy;


#import "ICCloudSyncingObjectCryptoStrategyV1.h"

@interface ICNoteCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICNoteCryptoStrategy>



@property (readonly) BOOL canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger intrinsicNotesVersion;
@property (readonly) BOOL isAuthenticated;
@property (readonly) Class superclass;


+(id)fromNote:(id)arg0 ;
-(BOOL)canKeyDecrypt:(id)arg0 ;
-(id)decryptNotePrimitiveData;
-(id)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(id)arg0 ;
-(id)unwrappedKey;
-(void)alignAccountSaltAndICWithPassphrase:(id)arg0 ;
-(void)applyAccountSaltAndICWithPassphrase:(id)arg0 ;
-(void)correctCryptoTagAndIVIfNecessary;
-(void)decrypt;
-(void)fixDivergedAttachmentsUsingPassphrase:(id)arg0 ;
-(void)mergeEncryptedData:(id)arg0 mergeConflict:(id)arg1 ;
-(void)mergeEncryptedDataFromRecord:(id)arg0 ;
-(void)recoverMissingCryptoWrappedKeyIfNecessaryWithMainKey:(id)arg0 ;
-(void)rewrapAllChildrenWithNewMainKey:(id)arg0 salt:(id)arg1 iterationCount:(NSUInteger)arg2 hint:(id)arg3 ;
-(void)writeEncryptedNoteData:(id)arg0 ;


@end


#endif