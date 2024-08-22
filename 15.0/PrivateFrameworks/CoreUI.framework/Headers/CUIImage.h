// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIIMAGE_H
#define CUIIMAGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CUIImage : NSObject <NSCopying>

 {
    *CGImage _cgImage;
}


@property (readonly, nonatomic) *CGImage image;
@property (readonly, nonatomic) CGSize size;


+(id)imageWithCGImage:(struct CGImage *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(struct CGImage *)cgImage;
-(void)dealloc;


@end


#endif