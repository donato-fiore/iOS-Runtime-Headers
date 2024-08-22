// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKANIMATEDGIFFRAME_H
#define TSKANIMATEDGIFFRAME_H


#import <Foundation/Foundation.h>


@interface TSKAnimatedGIFFrame : NSObject {
    *CGImageSource _imageSource;
    *CGImage _preloadedImage;
    os_unfair_lock_s _imageLock;
}


@property (readonly, nonatomic) *CGImage image;
@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (readonly, nonatomic) CGFloat time; // ivar: _time


-(id)description;
-(id)initWithImageSource:(struct CGImageSource *)arg0 index:(NSUInteger)arg1 time:(CGFloat)arg2 preloadImage:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif