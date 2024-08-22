// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCRACINGWHEELPRODUCTINFORMATION_H
#define _GCRACINGWHEELPRODUCTINFORMATION_H

@class NSString;
@protocol GCRacingWheelProductInfo, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCRacingWheelProductInformation : NSObject <GCRacingWheelProductInfo>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *productCategory; // ivar: _productCategory
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *vendorName; // ivar: _vendorName


+(BOOL)supportsSecureCoding;
-(id)capture;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDevice:(id)arg0 ;


@end


#endif