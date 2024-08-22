// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARPOSEANIMATIONCONTROLLER_H
#define AVTAVATARPOSEANIMATIONCONTROLLER_H

@class NSArray, NSString;
@protocol AVTAvatarPoseAnimationController;

#import <Foundation/Foundation.h>

#import "AVTAvatar.h"

@interface AVTAvatarPoseAnimationController : NSObject <AVTAvatarPoseAnimationController>

 {
    AVTAvatar *_avatar;
    NSArray *_animationKeys;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAvatar:(id)arg0 animationKeys:(id)arg1 ;
-(void)removeAnimationWithBlendOutDuration:(CGFloat)arg0 ;


@end


#endif