// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKMAPSNAPSHOT_H
#define VKMAPSNAPSHOT_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VKCamera.h"

@interface VKMapSnapshot : NSObject <NSSecureCoding>

 {
    NSUInteger _width;
    NSUInteger _height;
    VKCamera *_vkCamera;
    *? _displayStyles;
    NSUInteger _displayStylesCount;
}


@property (readonly, nonatomic) NSArray *images; // ivar: _images
@property (retain, nonatomic) NSDictionary *memoryStats; // ivar: _memoryStats
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale


+(BOOL)supportsSecureCoding;
-(id)_initWithImages:(id)arg0 displayStyles:(struct ? *)arg1 displayStylesCount:(NSUInteger)arg2 scale:(CGFloat)arg3 camera:(id)arg4 ;
-(id)description;
-(id)imageDataInFormat:(NSUInteger)arg0 ;
-(id)imageSurfaceAtIndex:(NSUInteger)arg0 ;
-(id)imageSurfaces;
-(id)initWithCoder:(id)arg0 ;
-(struct ? )coordinateForPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )pointForCoordinate:(struct ? )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateImagesWithBlock:(id)arg0 ;


@end


#endif