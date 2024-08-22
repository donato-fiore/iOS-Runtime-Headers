// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTUREWINDOWSCENEDELEGATE_H
#define SBSYSTEMAPERTUREWINDOWSCENEDELEGATE_H

@class NSString, UIWindow;
@protocol UIWindowSceneDelegate;

#import <Foundation/Foundation.h>

#import "SBSystemApertureWindowScene.h"
#import "SBSystemApertureCurtainWindowScene.h"

@interface SBSystemApertureWindowSceneDelegate : NSObject <UIWindowSceneDelegate>

 {
    SBSystemApertureWindowScene *_systemApertureWindowScene;
    SBSystemApertureCurtainWindowScene *_superHighLevelCurtainWindowScene;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;


-(id)_associatedWindowSceneForScene:(id)arg0 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;


@end


#endif