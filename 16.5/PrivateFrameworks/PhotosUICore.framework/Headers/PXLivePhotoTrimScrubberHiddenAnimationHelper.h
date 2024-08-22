// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXLIVEPHOTOTRIMSCRUBBERHIDDENANIMATIONHELPER_H
#define PXLIVEPHOTOTRIMSCRUBBERHIDDENANIMATIONHELPER_H


#import <Foundation/Foundation.h>


@interface PXLivePhotoTrimScrubberHiddenAnimationHelper : NSObject {
    NSInteger _hideRequestCounter;
}


@property (readonly, copy, nonatomic) id *animationBlock; // ivar: _animationBlock
@property (nonatomic) BOOL hidden; // ivar: _hidden


-(id)initWithAnimationBlock:(id)arg0 ;


@end


#endif