// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IFCONCRETEIMAGE_H
#define IFCONCRETEIMAGE_H



#import "IFImage.h"

@interface IFConcreteImage : IFImage {
    *CGImage _CGImage;
    CGFloat _scale;
    NSUInteger _validationFlags;
    CGSize _size;
    CGSize _minimumSize;
}




-(BOOL)placeholder;
-(CGFloat)scale;
-(NSUInteger)validationFlags;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 minimumSize:(struct CGSize )arg2 placeholder:(BOOL)arg3 ;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 placeholder:(BOOL)arg2 ;
-(struct CGImage *)CGImage;
-(struct CGImage *)_CGImage;
-(struct CGSize )minimumSize;
-(struct CGSize )size;
-(void)dealloc;
-(void)setMinimumSize:(struct CGSize )arg0 ;
-(void)setPlaceholder:(BOOL)arg0 ;
-(void)setValidationFlags:(NSUInteger)arg0 ;


@end


#endif