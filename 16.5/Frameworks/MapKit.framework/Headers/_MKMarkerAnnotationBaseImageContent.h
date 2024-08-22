// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKMARKERANNOTATIONBASEIMAGECONTENT_H
#define _MKMARKERANNOTATIONBASEIMAGECONTENT_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface _MKMarkerAnnotationBaseImageContent : NSObject

@property (readonly, nonatomic) NSInteger baseImageType; // ivar: _baseImageType
@property (readonly, nonatomic) int blendMode; // ivar: _blendMode
@property (readonly, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (readonly, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (readonly, nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth


-(id)initWithFillColor:(id)arg0 strokeColor:(id)arg1 strokeWidth:(CGFloat)arg2 blendMode:(int)arg3 baseImageType:(NSInteger)arg4 ;


@end


#endif