// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18APPLEMEDIASERVICES34EXPRESSCHECKOUTMANAGEPAYMENTPARAMS_H
#define _TTC18APPLEMEDIASERVICES34EXPRESSCHECKOUTMANAGEPAYMENTPARAMS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC18AppleMediaServices34ExpressCheckoutManagePaymentParams : NSObject <NSSecureCoding>

 {
    ? mtPageRef;
    ? context;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif