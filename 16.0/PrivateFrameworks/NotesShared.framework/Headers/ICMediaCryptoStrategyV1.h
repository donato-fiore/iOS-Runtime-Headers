// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMEDIACRYPTOSTRATEGYV1_H
#define ICMEDIACRYPTOSTRATEGYV1_H

@class NSString;
@protocol ICMediaCryptoStrategy;


#import "ICCloudSyncingObjectCryptoStrategyV1.h"

@interface ICMediaCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICMediaCryptoStrategy>



@property (readonly) BOOL canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger intrinsicNotesVersion;
@property (readonly) BOOL isAuthenticated;
@property (readonly) Class superclass;


-(BOOL)encryptFileFromURL:(id)arg0 toURL:(id)arg1 ;
-(id)decryptedData;
-(id)fileURLEncryptionCryptoInitialzationVector;
-(id)fileURLEncryptionCryptoTag;


@end


#endif