// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTPREVIEWIMAGECRYPTOSTRATEGYV2_H
#define ICATTACHMENTPREVIEWIMAGECRYPTOSTRATEGYV2_H

@class NSString;
@protocol ICAttachmentPreviewImageCryptoStrategy;


#import "ICCloudSyncingObjectCryptoStrategyV2.h"

@interface ICAttachmentPreviewImageCryptoStrategyV2 : ICCloudSyncingObjectCryptoStrategyV2 <ICAttachmentPreviewImageCryptoStrategy>



@property (readonly) BOOL canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger intrinsicNotesVersion;
@property (readonly) BOOL isAuthenticated;
@property (readonly) Class superclass;


+(id)fromPreviewImage:(id)arg0 ;
-(BOOL)writeEncryptedImageFromData:(id)arg0 ;
-(id)_decryptedImageData;
-(id)decryptedImageData;
-(id)decryptedMetadata;
-(void)serializeToEncryptedMetadata:(id)arg0 ;
-(void)writeEncryptedMetadata:(id)arg0 ;


@end


#endif