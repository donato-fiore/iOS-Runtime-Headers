// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUISPRITE_H
#define ARUISPRITE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ARUISprite : NSObject <NSCopying>

 {
    ? _translation;
    ? _firstFrameOrigin;
    ? _frameSize;
}


@property (nonatomic) NSUInteger currentFrameIndex; // ivar: _currentFrameIndex
@property ? firstFrameOrigin;
@property (readonly, nonatomic) NSUInteger frameColumns; // ivar: _frameColumns
@property (readonly, nonatomic) NSUInteger frameCount; // ivar: _frameCount
@property ? frameSize;
@property (nonatomic) float opacity; // ivar: _opacity
@property (nonatomic) float size; // ivar: _size
@property ? textureRect;
@property ? translation;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFrameCount:(NSUInteger)arg0 frameColumns:(NSUInteger)arg1 firstFrameOriginframeSize;
-(id)initWithSprite:(id)arg0 ;


@end


#endif