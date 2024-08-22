// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXVIEWCONTROLLERSCENECONFIGURATION_H
#define _EXVIEWCONTROLLERSCENECONFIGURATION_H

@class EXSceneConfiguration, UIStoryboard, NSString;
@protocol NSCopying;



@interface _EXViewControllerSceneConfiguration : EXSceneConfiguration <NSCopying>



@property (retain, nonatomic) UIStoryboard *storyboard; // ivar: _storyboard
@property (copy) NSString *storyboardName; // ivar: _storyboardName
@property (retain, nonatomic) Class viewControllerClass; // ivar: _viewControllerClass
@property (copy) NSString *viewControllerClassName; // ivar: _viewControllerClassName




@end


#endif