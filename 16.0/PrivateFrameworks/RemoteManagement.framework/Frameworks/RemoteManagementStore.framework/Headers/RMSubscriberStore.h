// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSUBSCRIBERSTORE_H
#define RMSUBSCRIBERSTORE_H

@protocol NSSecureCoding, RMAssetResolverProtocol;


#import "RMBaseStore.h"

@interface RMSubscriberStore : RMBaseStore <NSSecureCoding, RMAssetResolverProtocol>





+(BOOL)supportsSecureCoding;
+(void)storeWithIdentifier:(id)arg0 scope:(NSInteger)arg1 completionHandler:(id)arg2 ;
+(void)storesWithScope:(NSInteger)arg0 completionHandler:(id)arg1 ;
+(void)subscribedStoreDeclarationsWithScope:(NSInteger)arg0 configurationTypes:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStore:(id)arg0 ;
-(void)_removeStatusForDeclarationIdentifier:(id)arg0 declarationServerToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)_writeStatusForDeclaration:(id)arg0 validity:(BOOL)arg1 reasons:(id)arg2 completionHandler:(id)arg3 ;
-(void)assetCannotBeDeserialized:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)assetCannotBeDownloaded:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)assetCannotBeVerified:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)assetEncounteredInternalError:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)assetSuccessfullyResolved:(id)arg0 completionHandler:(id)arg1 ;
-(void)configurationCannotBeDeserialized:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)configurationErrorReasons:(id)arg0 reasons:(id)arg1 completionHandler:(id)arg2 ;
-(void)configurationFailedToApply:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)configurationIsInvalid:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)configurationRemovedWithDeclarationIdentifier:(id)arg0 declarationServerToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)configurationSuccessfullyApplied:(id)arg0 completionHandler:(id)arg1 ;
-(void)configurationSuccessfullyApplied:(id)arg0 reasons:(id)arg1 completionHandler:(id)arg2 ;
-(void)publishStatus:(id)arg0 completionHandler:(id)arg1 ;
-(void)resolveAsset:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif