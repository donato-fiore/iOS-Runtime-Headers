// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOCOORDINATEPATH_H
#define _GEOCOORDINATEPATH_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GEOCoordinatePath : NSObject <NSSecureCoding>

 {
    vector<GEOLocationCoordinate3D, std::allocator<GEOLocationCoordinate3D>> _basicCoordinates;
    vector<zilch::ControlPoint, std::allocator<zilch::ControlPoint>> _zilchPoints;
    NSUInteger _count;
    NSArray *_supportPoints;
    vector<double, std::allocator<double>> _pointLengths;
    NSUInteger _pathStartIndex;
    CGFloat _pathStartOffset;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif