// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTECRYPTOSTRATEGYV2_H
#define ICNOTECRYPTOSTRATEGYV2_H

@class NSString;
@protocol ICNoteCryptoStrategy;


#import "ICCloudSyncingObjectCryptoStrategyV2.h"

@interface ICNoteCryptoStrategyV2 : ICCloudSyncingObjectCryptoStrategyV2 <ICNoteCryptoStrategy>



@property (readonly) BOOL canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger intrinsicNotesVersion;
@property (readonly) BOOL isAuthenticated;
@property (readonly) Class superclass;


-(id)decryptNotePrimitiveData;
-(id)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(id)arg0 ;
-(id)encryptedDataFromRecord:(id)arg0 ;
-(void)alignAccountSaltAndICWithPassphrase:(id)arg0 ;
-(void)applyAccountSaltAndICWithPassphrase:(id)arg0 ;
-(void)decrypt;
-(void)fixDivergedAttachmentsUsingPassphrase:(id)arg0 ;
-(void)mergeEncryptedData:(id)arg0 mergeConflict:(id)arg1 ;
-(void)mergeEncryptedDataFromRecord:(id)arg0 ;
-(void)serializeToNoteDataAndUpdateArchivedAndLastViewedTimeStamps:(id)arg0 ;
-(void)writeEncryptedNoteData:(id)arg0 ;


@end


#endif