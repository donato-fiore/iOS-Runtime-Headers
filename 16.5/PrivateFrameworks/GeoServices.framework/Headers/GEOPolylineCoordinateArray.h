// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPOLYLINECOORDINATEARRAY_H
#define GEOPOLYLINECOORDINATEARRAY_H

@protocol NSFastEnumeration, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOPolylineCoordinateArray : NSObject <NSFastEnumeration, NSSecureCoding>

 {
    vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> _polylineCoordinates;
    NSUInteger _mutationsCount;
}


@property (readonly, nonatomic) NSUInteger count;


+(BOOL)supportsSecureCoding;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(struct PolylineCoordinate )coordinateAtIndex:(NSUInteger)arg0 ;
-(void)addCoordinate:(struct PolylineCoordinate )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif