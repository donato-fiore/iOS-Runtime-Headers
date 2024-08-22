// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWINDOWSCENEACTIVATIONCONFIGURATION_H
#define UIWINDOWSCENEACTIVATIONCONFIGURATION_H

@class NSUserActivity;
@protocol NSCopying, _UIWindowSceneActivator;

#import <Foundation/Foundation.h>

#import "UIWindowSceneActivationRequestOptions.h"
#import "UITargetedPreview.h"

@interface UIWindowSceneActivationConfiguration : NSObject <NSCopying>



@property (nonatomic, setter=_setAnimationSource:) NSUInteger _animationSource; // ivar: __animationSource
@property (weak, nonatomic, setter=_setSceneActivator:) NSObject<_UIWindowSceneActivator> *_sceneActivator; // ivar: __sceneActivator
@property (retain, nonatomic) UIWindowSceneActivationRequestOptions *options; // ivar: _options
@property (retain, nonatomic) UITargetedPreview *preview; // ivar: _preview
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUserActivity:(id)arg0 ;


@end


#endif