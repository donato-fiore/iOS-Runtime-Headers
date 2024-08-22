// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTPHYSICALCARDSHIPPINGUPDATE_H
#define PKACCOUNTPHYSICALCARDSHIPPINGUPDATE_H

@class NSString, NSDateComponents, NSURL, NSDate;
@protocol NSSecureCoding, PKRecordObject;

#import <Foundation/Foundation.h>


@interface PKAccountPhysicalCardShippingUpdate : NSObject <NSSecureCoding, PKRecordObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDateComponents *estimatedDeliveryDate; // ivar: _estimatedDeliveryDate
@property (readonly, copy, nonatomic) NSString *formattedEstimatedDeliveryDate;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localizedDeliveryExceptionReason; // ivar: _localizedDeliveryExceptionReason
@property (copy, nonatomic) NSString *physicalCardIdentifier; // ivar: _physicalCardIdentifier
@property (readonly, nonatomic) NSURL *shipmentTrackingURL;
@property (copy, nonatomic) NSString *shippingCompany; // ivar: _shippingCompany
@property (nonatomic) NSInteger shippingStatus; // ivar: _shippingStatus
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSString *trackingNumber; // ivar: _trackingNumber


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPhysicalCardShippingUpdate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRecord:(id)arg0 ;


@end


#endif