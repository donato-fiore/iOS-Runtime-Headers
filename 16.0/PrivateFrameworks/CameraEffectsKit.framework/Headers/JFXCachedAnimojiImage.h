// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXCACHEDANIMOJIIMAGE_H
#define JFXCACHEDANIMOJIIMAGE_H

@class PVImageBuffer, NSDictionary;

#import <Foundation/Foundation.h>


@interface JFXCachedAnimojiImage : NSObject

@property (readonly, nonatomic) PVImageBuffer *animojiImageBuffer; // ivar: _animojiImageBuffer
@property (readonly, nonatomic) NSDictionary *animojiRenderAttributes; // ivar: _animojiRenderAttributes
@property (readonly, nonatomic) ? mediaTimeRange; // ivar: _mediaTimeRange


-(id)description;
-(id)initWithMediaTimeRange:(struct ? )arg0 animojiRenderingAttributes:(id)arg1 animojiImageBuffer:(id)arg2 ;


@end


#endif