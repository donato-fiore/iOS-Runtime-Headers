// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERRESOURCE_H
#define AVTSTICKERRESOURCE_H

@class NSURL, UIImage;
@protocol AVTCachedResource;

#import <Foundation/Foundation.h>

#import "AVTUINSURL.h"

@interface AVTStickerResource : NSObject <AVTCachedResource>



@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) AVTUINSURL *internalURL; // ivar: _internalURL
@property (nonatomic, getter=isPrereleaseSticker) BOOL prereleaseSticker; // ivar: _prereleaseSticker


-(id)initWithImage:(id)arg0 URL:(id)arg1 clippingRect:(struct CGRect )arg2 ;


@end


#endif