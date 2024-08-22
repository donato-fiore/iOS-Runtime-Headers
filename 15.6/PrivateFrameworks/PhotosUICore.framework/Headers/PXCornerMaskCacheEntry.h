// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCORNERMASKCACHEENTRY_H
#define PXCORNERMASKCACHEENTRY_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface PXCornerMaskCacheEntry : NSObject

@property (readonly, nonatomic) ? cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(id)description;
-(id)initWithCornerRadius:(struct ? )arg0 size:(struct CGSize )arg1 image:(id)arg2 ;


@end


#endif