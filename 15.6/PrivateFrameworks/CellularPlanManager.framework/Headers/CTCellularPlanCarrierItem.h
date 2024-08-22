// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCELLULARPLANCARRIERITEM_H
#define CTCELLULARPLANCARRIERITEM_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *addOnEndpointType; // ivar: _addOnEndpointType
@property (readonly, nonatomic) NSString *addOnWebsheetURL; // ivar: _addOnWebsheetURL
@property (nonatomic) BOOL applePaySupported; // ivar: _applePaySupported
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *planPurchaseEndpointType; // ivar: _planPurchaseEndpointType
@property (readonly, nonatomic) NSString *warningText; // ivar: _warningText
@property (readonly, nonatomic) NSString *websheetURL; // ivar: _websheetURL


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 url:(id)arg1 applePaySupported:(BOOL)arg2 responseType:(id)arg3 warningText:(id)arg4 addOnUrl:(id)arg5 addOnEndpointType:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif