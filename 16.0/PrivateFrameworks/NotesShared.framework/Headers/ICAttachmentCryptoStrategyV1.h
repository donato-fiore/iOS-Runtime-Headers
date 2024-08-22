// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICATTACHMENTCRYPTOSTRATEGYV1_H
#define ICATTACHMENTCRYPTOSTRATEGYV1_H

@class NSString;
@protocol ICAttachmentCryptoStrategy;


#import "ICCloudSyncingObjectCryptoStrategyV1.h"

@interface ICAttachmentCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICAttachmentCryptoStrategy>



@property (readonly) BOOL canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger intrinsicNotesVersion;
@property (readonly) BOOL isAuthenticated;
@property (readonly) Class superclass;


-(id)decryptedFallbackImageData;
-(void)writeEncryptedFallbackImageData:(id)arg0 ;


@end


#endif