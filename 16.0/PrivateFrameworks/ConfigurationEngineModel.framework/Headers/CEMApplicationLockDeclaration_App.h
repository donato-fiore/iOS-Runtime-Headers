// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMAPPLICATIONLOCKDECLARATION_APP_H
#define CEMAPPLICATIONLOCKDECLARATION_APP_H

@class NSString;


#import "CEMPayloadBase.h"
#import "CEMApplicationLockDeclaration_AppOptions.h"
#import "CEMApplicationLockDeclaration_AppUserEnabledOptions.h"

@interface CEMApplicationLockDeclaration_App : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadIdentifier; // ivar: _payloadIdentifier
@property (copy, nonatomic) CEMApplicationLockDeclaration_AppOptions *payloadOptions; // ivar: _payloadOptions
@property (copy, nonatomic) CEMApplicationLockDeclaration_AppUserEnabledOptions *payloadUserEnabledOptions; // ivar: _payloadUserEnabledOptions


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withOptions:(id)arg1 withUserEnabledOptions:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif