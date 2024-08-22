// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDPURCHASEREQUESTOPTIONS_H
#define ASDPURCHASEREQUESTOPTIONS_H

@class NSArray;


#import "ASDRequestOptions.h"

@interface ASDPurchaseRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSArray *purchases; // ivar: _purchases


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurchases:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif