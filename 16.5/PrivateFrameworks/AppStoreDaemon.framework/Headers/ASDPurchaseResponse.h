// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDPURCHASERESPONSE_H
#define ASDPURCHASERESPONSE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;


#import "ASDRequestResponse.h"

@interface ASDPurchaseResponse : ASDRequestResponse <NSCopying, NSSecureCoding>



@property (readonly) NSArray *items; // ivar: _items


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurchaseResponseItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif