// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCELLULARPLANCARRIERITEM_H
#define CTCELLULARPLANCARRIERITEM_H

@class NSString, CTPlan;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_addOnWebsheetURL;
    NSString *_addOnEndpointType;
}


@property (readonly, nonatomic) BOOL applePaySupported; // ivar: _applePaySupported
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CTPlan *plan; // ivar: _plan
@property (readonly, nonatomic) NSString *planPurchaseEndpointType; // ivar: _planPurchaseEndpointType
@property (readonly, nonatomic) NSString *warningText; // ivar: _warningText
@property (readonly, nonatomic) NSString *websheetURL; // ivar: _websheetURL


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 plan:(id)arg1 url:(id)arg2 applePaySupported:(BOOL)arg3 responseType:(id)arg4 warningText:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif