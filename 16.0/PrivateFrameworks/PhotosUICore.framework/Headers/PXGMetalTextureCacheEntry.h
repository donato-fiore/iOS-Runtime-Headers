// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGMETALTEXTURECACHEENTRY_H
#define PXGMETALTEXTURECACHEENTRY_H

@class NSDate;
@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface PXGMetalTextureCacheEntry : NSObject

@property (readonly, nonatomic) NSObject<MTLTexture> *texture; // ivar: _texture
@property (readonly, nonatomic) NSDate *time; // ivar: _time


-(id)description;
-(id)initWithTexture:(id)arg0 ;


@end


#endif