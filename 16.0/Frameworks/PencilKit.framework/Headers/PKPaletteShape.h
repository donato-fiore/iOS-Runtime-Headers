// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTESHAPE_H
#define PKPALETTESHAPE_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface PKPaletteShape : NSObject {
    UIImage *_image;
}


@property (readonly, nonatomic) UIImage *image;
@property (readonly) NSInteger shapeType; // ivar: _shapeType


+(id)shapeWithType:(NSInteger)arg0 ;
-(id)initWithShapeType:(NSInteger)arg0 ;


@end


#endif