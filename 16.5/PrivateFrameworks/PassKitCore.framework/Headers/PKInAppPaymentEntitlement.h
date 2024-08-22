// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINAPPPAYMENTENTITLEMENT_H
#define PKINAPPPAYMENTENTITLEMENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PKInAppPaymentEntitlement : NSObject {
    NSArray *_merchantIdentifiers;
}


@property (readonly, nonatomic) BOOL hasMerchantIdentifiers;
@property (readonly, nonatomic) BOOL ignoreMerchantIdentifiers; // ivar: _ignoreMerchantIdentifiers


-(BOOL)hasMerchantIdentifier:(id)arg0 ;
-(id)initWithToken:(struct ? )arg0 ;
-(void)_probeEntitlementsWithToken:(struct ? )arg0 ;


@end


#endif