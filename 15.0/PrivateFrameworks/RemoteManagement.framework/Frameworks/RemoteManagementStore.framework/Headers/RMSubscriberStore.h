// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSUBSCRIBERSTORE_H
#define RMSUBSCRIBERSTORE_H

@class NSURL;
@protocol NSSecureCoding, RMAssetResolverProtocol;


#import "RMBaseStore.h"
#import "RMConfigurationStatusUpdater.h"

@interface RMSubscriberStore : RMBaseStore <NSSecureCoding, RMAssetResolverProtocol>



@property (readonly, nonatomic) NSURL *statusDirectoryURL; // ivar: _statusDirectoryURL
@property (readonly, nonatomic) RMConfigurationStatusUpdater *statusUpdater; // ivar: _statusUpdater


+(BOOL)supportsSecureCoding;
+(void)storeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)storesWithCompletionHandler:(id)arg0 ;
+(void)subscribedStoreDeclarationsforConfigurationTypes:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStore:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSInteger)arg1 name:(id)arg2 description:(id)arg3 accountIdentifier:(id)arg4 defaultToInteractive:(BOOL)arg5 dataSeparated:(BOOL)arg6 personaIdentifier:(id)arg7 statusDirectoryURL:(id)arg8 statusUpdater:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resolveAsset:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif