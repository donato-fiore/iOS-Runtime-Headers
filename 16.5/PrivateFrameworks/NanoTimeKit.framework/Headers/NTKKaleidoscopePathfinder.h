// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKKALEIDOSCOPEPATHFINDER_H
#define NTKKALEIDOSCOPEPATHFINDER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTKKaleidoscopePathfinder : NSObject <NSSecureCoding>

 {
    float _sampleRadiusX;
    float _sampleRadiusY;
    ? _dominanceGrid;
    ? _path;
}


@property (readonly, nonatomic) int cellGridHeight; // ivar: _cellGridHeight
@property (readonly, nonatomic) int cellGridWidth; // ivar: _cellGridWidth
@property (readonly, nonatomic) int pathLength; // ivar: _pathLength
@property (readonly, nonatomic) float startRotation; // ivar: _startRotation


+(BOOL)supportsSecureCoding;
+(id)pathfinderFromDirectory:(id)arg0 ;
+(id)pathfinderFromFile:(id)arg0 ;
+(id)pathfinderWithImage:(id)arg0 ;
-(BOOL)writeToDirectory:(id)arg0 ;
-(BOOL)writeToFile:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(struct NTKKaleidoscopePathfinderPoint )pointForTime:(float)arg0 ;
-(void)adjustPathStart;
-(void)adjustRotationStart:(float)arg0 ;
-(void)adjustSampleRadius:(float)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif