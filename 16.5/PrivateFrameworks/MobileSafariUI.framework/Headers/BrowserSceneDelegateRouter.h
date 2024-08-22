// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BROWSERSCENEDELEGATEROUTER_H
#define BROWSERSCENEDELEGATEROUTER_H

@class NSString, UIWindow;
@protocol UIWindowSceneDelegate;

#import <Foundation/Foundation.h>


@interface BrowserSceneDelegateRouter : NSObject <UIWindowSceneDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;


-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;


@end


#endif