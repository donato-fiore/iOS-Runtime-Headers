// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPOLYLINECOORDINATERANGEARRAY_H
#define GEOPOLYLINECOORDINATERANGEARRAY_H

@protocol NSFastEnumeration, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOPolylineCoordinateRangeArray : NSObject <NSFastEnumeration, NSSecureCoding>

 {
    vector<GEOPolylineCoordinateRange, std::allocator<GEOPolylineCoordinateRange>> _polylineCoordinateRanges;
    NSUInteger _mutationsCount;
}


@property (readonly, nonatomic) NSUInteger count;


+(BOOL)supportsSecureCoding;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(struct GEOPolylineCoordinateRange )coordinateRangeAtIndex:(NSUInteger)arg0 ;
-(void)addCoordinateRange:(struct GEOPolylineCoordinateRange )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif