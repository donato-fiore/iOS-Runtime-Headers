// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKLOCATION_H
#define PKLOCATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKLocation : NSObject <NSSecureCoding>

 {
    uint8_t _hashComputed;
    uint8_t _hash;
}


@property (nonatomic) CGFloat altitude; // ivar: _altitude
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, nonatomic) BOOL hasAltitude; // ivar: _hasAltitude
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat maxDistance; // ivar: _maxDistance
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *relevantText; // ivar: _relevantText


+(BOOL)supportsSecureCoding;
-(BOOL)hasEqualCoordinatesToLocation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CLLocation;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif