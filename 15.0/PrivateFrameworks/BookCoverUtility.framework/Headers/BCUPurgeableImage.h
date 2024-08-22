// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCUPURGEABLEIMAGE_H
#define BCUPURGEABLEIMAGE_H

@class NSString;
@protocol BCUPurgeableImage;

#import <Foundation/Foundation.h>


@interface BCUPurgeableImage : NSObject <BCUPurgeableImage>

 {
    *CGImage _image;
    *__IOSurface _surface;
}


@property (readonly, nonatomic) *CGImage CGImage;
@property (readonly, nonatomic) CGFloat contentsScale; // ivar: _contentsScale
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *layerContents;
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;


-(BOOL)markAsNonVolatile;
-(BOOL)markAsVolatile;
-(id)initWithImage:(struct CGImage *)arg0 surface:(struct __IOSurface *)arg1 contentsScale:(CGFloat)arg2 ;
-(void)dealloc;


@end


#endif