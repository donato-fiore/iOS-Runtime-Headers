// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKMARKERSTYLE_H
#define _MKMARKERSTYLE_H

@class UIColor, UIImage;

#import <Foundation/Foundation.h>


@interface _MKMarkerStyle : NSObject

@property (readonly, nonatomic) UIColor *glyphColor; // ivar: _glyphColor
@property (readonly, nonatomic) UIImage *glyphImage; // ivar: _glyphImage
@property (readonly, nonatomic) UIColor *markerColor; // ivar: _markerColor
@property (readonly, nonatomic) CGFloat shadowAlpha; // ivar: _shadowAlpha
@property (readonly, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (readonly, nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth


+(id)markerStyleForTraitCollection:(id)arg0 state:(NSInteger)arg1 styleAttributes:(id)arg2 coordinate:(struct CLLocationCoordinate2D )arg3 ;


@end


#endif