// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPLOCATIONNAMEDENTITIES_H
#define PPLOCATIONNAMEDENTITIES_H

@class NSString, NSDate, CLLocation, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPLocationNamedEntities : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *city; // ivar: _city
@property (retain, nonatomic) NSString *country; // ivar: _country
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *documentId; // ivar: _documentId
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (retain, nonatomic) NSString *locationName; // ivar: _locationName
@property (retain, nonatomic) NSData *mapItem; // ivar: _mapItem
@property (retain, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSString *stateOrProvince; // ivar: _stateOrProvince
@property (retain, nonatomic) NSString *streetAddress; // ivar: _streetAddress
@property (retain, nonatomic) NSString *unstructuredLocationString; // ivar: _unstructuredLocationString


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif