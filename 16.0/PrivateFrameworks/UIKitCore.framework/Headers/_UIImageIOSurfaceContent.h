// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIIMAGEIOSURFACECONTENT_H
#define _UIIMAGEIOSURFACECONTENT_H

@class UIImageContent;



@interface _UIImageIOSurfaceContent : UIImageContent {
    *__IOSurface _surfaceRef;
}




-(BOOL)canDrawImage;
-(BOOL)canEmitDrawingCommands;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIOSurface;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIOSurface:(struct __IOSurface *)arg0 scale:(CGFloat)arg1 ;
-(id)initWithScale:(CGFloat)arg0 ;
-(struct CGSize )sizeInPixels;
-(struct __IOSurface *)IOSurface;
-(void)dealloc;


@end


#endif