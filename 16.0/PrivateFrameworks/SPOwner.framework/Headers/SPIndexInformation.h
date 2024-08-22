// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPINDEXINFORMATION_H
#define SPINDEXINFORMATION_H

@class NSUUID, NSDateInterval;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPIndexInformation : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *beaconIdentifier; // ivar: _beaconIdentifier
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) NSUInteger index; // ivar: _index
@property (nonatomic) unsigned char sequence; // ivar: _sequence


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBeaconIdentifier:(id)arg0 sequence:(unsigned char)arg1 index:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif