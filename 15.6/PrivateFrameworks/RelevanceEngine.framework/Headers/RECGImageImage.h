// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RECGIMAGEIMAGE_H
#define RECGIMAGEIMAGE_H



#import "REImage.h"

@interface RECGImageImage : REImage

@property (readonly, nonatomic) *CGImage CGImage; // ivar: _CGImage
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif