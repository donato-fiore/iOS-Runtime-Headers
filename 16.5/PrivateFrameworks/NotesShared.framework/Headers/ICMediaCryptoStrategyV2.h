// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMEDIACRYPTOSTRATEGYV2_H
#define ICMEDIACRYPTOSTRATEGYV2_H

@class NSString;
@protocol ICMediaCryptoStrategy;


#import "ICCloudSyncingObjectCryptoStrategyV2.h"

@interface ICMediaCryptoStrategyV2 : ICCloudSyncingObjectCryptoStrategyV2 <ICMediaCryptoStrategy>



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


@end


#endif