// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCOACHINGGLYPHSTATE_H
#define ARCOACHINGGLYPHSTATE_H

@protocol ARCoachingGlyphStateDelegate;

#import <Foundation/Foundation.h>


@interface ARCoachingGlyphState : NSObject {
    ? _quaternionTarget;
    ? _scaleTarget;
    NSUInteger _snapState;
    ? _topPlaneTranslationTarget;
    ? _bottomPlaneTranslationTarget;
}


@property ? bottomPlaneTranslationTarget;
@property (weak, nonatomic) NSObject<ARCoachingGlyphStateDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isVertical; // ivar: _isVertical
@property (readonly, nonatomic) ? quaternionTarget;
@property ? scaleTarget;
@property (nonatomic) NSUInteger snapState;
@property ? topPlaneTranslationTarget;




@end


#endif