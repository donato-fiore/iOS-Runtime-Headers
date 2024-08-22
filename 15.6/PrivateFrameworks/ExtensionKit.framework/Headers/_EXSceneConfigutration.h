// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXSCENECONFIGUTRATION_H
#define _EXSCENECONFIGUTRATION_H

@class NSString;
@protocol _EXSceneConfigurationProviding;

#import <Foundation/Foundation.h>


@interface _EXSceneConfigutration : NSObject <_EXSceneConfigurationProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) Class extensionPointViewControllerClass;
@property (retain) NSString *extensionPointViewControllerClassName; // ivar: _extensionPointViewControllerClassName
@property (readonly) NSUInteger hash;
@property (retain) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (retain) NSString *storyboardName; // ivar: _storyboardName
@property (readonly) Class superclass;
@property (readonly) Class viewControllerClass;
@property (retain) NSString *viewControllerClassName; // ivar: _viewControllerClassName




@end


#endif