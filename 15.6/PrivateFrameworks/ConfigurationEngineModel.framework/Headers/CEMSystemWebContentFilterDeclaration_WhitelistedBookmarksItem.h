// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSYSTEMWEBCONTENTFILTERDECLARATION_WHITELISTEDBOOKMARKSITEM_H
#define CEMSYSTEMWEBCONTENTFILTERDECLARATION_WHITELISTEDBOOKMARKSITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMSystemWebContentFilterDeclaration_WhitelistedBookmarksItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadBookmarkPath; // ivar: _payloadBookmarkPath
@property (copy, nonatomic) NSString *payloadTitle; // ivar: _payloadTitle
@property (copy, nonatomic) NSString *payloadURL; // ivar: _payloadURL


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithURL:(id)arg0 withTitle:(id)arg1 ;
+(id)buildWithURL:(id)arg0 withBookmarkPath:(id)arg1 withTitle:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif