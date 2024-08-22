// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOJUNCTION_H
#define GEOJUNCTION_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOJunction : NSObject <NSSecureCoding>

 {
    NSData *_elementsData;
}


@property (readonly, nonatomic) int drivingSide; // ivar: _drivingSide
@property (readonly, nonatomic) *GEOJunctionElement elements;
@property (readonly, nonatomic) int junctionType; // ivar: _junctionType
@property (readonly, nonatomic) int maneuverType; // ivar: _maneuverType
@property (readonly, nonatomic) NSUInteger numElements;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJunctionInfo:(id)arg0 ;
-(id)initWithManeuverType:(int)arg0 drivingSide:(int)arg1 ;
-(id)initWithStep:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif