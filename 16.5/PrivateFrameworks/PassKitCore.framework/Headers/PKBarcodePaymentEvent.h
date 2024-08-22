// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBARCODEPAYMENTEVENT_H
#define PKBARCODEPAYMENTEVENT_H

@class NSString, NSData, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKBarcodePaymentEvent : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger authenticationType; // ivar: _authenticationType
@property (copy, nonatomic) NSString *barcodeIdentifier; // ivar: _barcodeIdentifier
@property (nonatomic) BOOL biometricsChanged; // ivar: _biometricsChanged
@property (copy, nonatomic) NSString *deviceAccountIdentifier; // ivar: _deviceAccountIdentifier
@property (copy, nonatomic) NSData *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBarcodePaymentEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)data;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif