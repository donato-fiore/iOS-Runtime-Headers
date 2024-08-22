// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARHIDEANIMATIONPARAMETERS_H
#define UISTATUSBARHIDEANIMATIONPARAMETERS_H



#import "UIStatusBarAnimationParameters.h"

@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters

@property (nonatomic) CGFloat additionalSlideHeight; // ivar: _additionalSlideHeight
@property (nonatomic) int hideAnimation; // ivar: _hideAnimation


-(BOOL)shouldAnimate;
-(id)initWithDefaultParameters;


@end


#endif