// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOCOORDINATEPATH_H
#define _GEOCOORDINATEPATH_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GEOCoordinatePath : NSObject <NSSecureCoding>

 {
    vector<GEOLocationCoordinate3D, std::allocator<GEOLocationCoordinate3D>> _basicCoordinates;
    vector<zilch::ControlPoint, std::allocator<zilch::ControlPoint>> _zilchPoints;
    NSArray *_supportPoints;
    vector<double, std::allocator<double>> _pointLengths;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) CGFloat length;
@property (nonatomic) NSUInteger pathStartIndex; // ivar: _pathStartIndex
@property (nonatomic) CGFloat pathStartOffset; // ivar: _pathStartOffset
@property (readonly, nonatomic) *CGFloat pointLengths;
@property (readonly, nonatomic) *ControlPoint zilchControlPoints;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoRoutingPathData:(id)arg0 pathStartIndex:(NSUInteger)arg1 ;
-(struct ? )coordinateAt:(NSUInteger)arg0 ;
-(void)calibratePointLengths:(*void)arg0 startIndex:(NSUInteger)arg1 endIndex:(NSUInteger)arg2 rangeLength:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBasicCoordinates:(*void)arg0 ;
-(void)setZilchPoints:(*void)arg0 ;


@end


#endif