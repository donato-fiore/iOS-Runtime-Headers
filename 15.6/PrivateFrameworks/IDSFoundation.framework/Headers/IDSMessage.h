// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSMESSAGE_H
#define IDSMESSAGE_H

@class NSDictionary, NSNumber;
@protocol NSCopying;


#import "IDSBaseMessage.h"

@interface IDSMessage : IDSBaseMessage <NSCopying>



@property (copy) NSDictionary *deliveryStatusContext; // ivar: _deliveryStatusContext
@property (copy) NSNumber *version; // ivar: _version
@property BOOL wantsCertifiedDelivery; // ivar: _wantsCertifiedDelivery
@property (copy) NSNumber *wantsDeliveryStatus; // ivar: _wantsDeliveryStatus


-(BOOL)_shouldUseJSONForEncoding;
-(BOOL)wantsAPSRetries;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsUserAgentInHeaders;
-(id)_madridServerBag;
-(id)_objectForKeyFromMadridBag:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)messageBody;
-(id)userAgentHeaderString;


@end


#endif