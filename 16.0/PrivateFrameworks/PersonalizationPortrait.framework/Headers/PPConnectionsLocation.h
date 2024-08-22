// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONNECTIONSLOCATION_H
#define PPCONNECTIONSLOCATION_H

@class NSDictionary, NSString, NSArray, NSDate, NSNumber, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPConnectionsLocation : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDictionary *addressComponents; // ivar: _addressComponents
@property (copy, nonatomic) NSString *administrativeArea; // ivar: _administrativeArea
@property (copy, nonatomic) NSString *authorHandle; // ivar: _authorHandle
@property (copy, nonatomic) NSArray *contactHandles; // ivar: _contactHandles
@property (nonatomic) BOOL copiedToPasteboard; // ivar: _copiedToPasteboard
@property (copy, nonatomic) NSString *country; // ivar: _country
@property (copy, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (copy, nonatomic) NSString *documentID; // ivar: _documentID
@property (copy, nonatomic) NSString *fullFormattedAddress; // ivar: _fullFormattedAddress
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (copy, nonatomic) NSNumber *lifetime; // ivar: _lifetime
@property (copy, nonatomic) NSString *locality; // ivar: _locality
@property (copy, nonatomic) NSNumber *longitude; // ivar: _longitude
@property (copy, nonatomic) NSURL *mapItemURL; // ivar: _mapItemURL
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *originatingBundleID; // ivar: _originatingBundleID
@property (copy, nonatomic) NSURL *originatingWebsiteURL; // ivar: _originatingWebsiteURL
@property (copy, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (copy, nonatomic) NSString *shortValue; // ivar: _shortValue
@property (nonatomic) BOOL shouldAggregate; // ivar: _shouldAggregate
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (copy, nonatomic) NSString *subThoroughfare; // ivar: _subThoroughfare
@property (copy, nonatomic) NSString *thoroughfare; // ivar: _thoroughfare
@property (copy, nonatomic) NSString *trigger; // ivar: _trigger
@property (copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(NSUInteger)round:(CGFloat)arg0 toNearest:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConnectionsLocation:(id)arg0 ;
-(NSUInteger)_roundedPredictionAge;
-(NSUInteger)hash;
-(id)addressDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingBundleID:(id)arg0 ;
-(id)quickTypeItem;
-(unsigned char)_pexItemSource;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif