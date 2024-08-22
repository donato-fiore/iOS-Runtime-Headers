// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSYSTEMBASICWEBCONTENTFILTERDECLARATION_SITEWHITELISTITEM_H
#define CEMSYSTEMBASICWEBCONTENTFILTERDECLARATION_SITEWHITELISTITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMSystemBasicWebContentFilterDeclaration_SiteWhiteListItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadAddress; // ivar: _payloadAddress
@property (copy, nonatomic) NSString *payloadBookmarkPath; // ivar: _payloadBookmarkPath
@property (copy, nonatomic) NSString *payloadPageTitle; // ivar: _payloadPageTitle


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithAddress:(id)arg0 ;
+(id)buildWithAddress:(id)arg0 withPageTitle:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif