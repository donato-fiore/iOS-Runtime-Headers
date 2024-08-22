// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIIMAGEVIEWPRETILEDIMAGECACHEKEY_H
#define _UIIMAGEVIEWPRETILEDIMAGECACHEKEY_H


#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIImageViewPretiledImageCacheKey : NSObject {
    UIImage *_originalImage;
    CGSize _pretiledSize;
}




+(id)cacheKeyWithOriginalImage:(id)arg0 pretiledSize:(struct CGSize )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif