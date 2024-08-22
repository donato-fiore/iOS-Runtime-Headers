// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIIMAGEVIEWPRETILEDIMAGEWRAPPER_H
#define _UIIMAGEVIEWPRETILEDIMAGEWRAPPER_H


#import <Foundation/Foundation.h>

#import "_UIImageViewPretiledImageCacheKey.h"
#import "UIImage.h"

@interface _UIImageViewPretiledImageWrapper : NSObject {
    _UIImageViewPretiledImageCacheKey *_cacheKey;
}


@property (readonly, nonatomic) UIImage *pretiledImage; // ivar: _pretiledImage


+(id)cacheValueWithPretiledImage:(id)arg0 cacheKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(void)dealloc;


@end


#endif