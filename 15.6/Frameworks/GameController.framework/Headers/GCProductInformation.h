// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCPRODUCTINFORMATION_H
#define GCPRODUCTINFORMATION_H

@class NSString, NSNumber;
@protocol GCControllerProductInfo, NSSecureCoding, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCProductInformation : NSObject <GCControllerProductInfo, NSSecureCoding>



@property (copy, nonatomic) NSString *anonymizedIdentifier; // ivar: _anonymizedIdentifier
@property (copy, nonatomic, getter=isAttachedToDevice) NSNumber *attachedToDevice; // ivar: _attachedToDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailedProductCategory; // ivar: _detailedProductCategory
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *productCategory; // ivar: _productCategory
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *vendorName; // ivar: _vendorName


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setController:(id)arg0 ;


@end


#endif