// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCREENSHOTSERVICE_H
#define UISCREENSHOTSERVICE_H

@class NSString;
@protocol _UISceneComponentProviding, UIScreenshotServiceDelegate;

#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "UIWindowScene.h"

@interface UIScreenshotService : NSObject <_UISceneComponentProviding>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIScreenshotServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UIScreenshotServiceDelegate> *privateDelegate; // ivar: _privateDelegate
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene;


-(id)initWithScene:(id)arg0 ;


@end


#endif