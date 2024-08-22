// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFBROWSERAPPLICATION_H
#define SFBROWSERAPPLICATION_H

@class UIApplication, NSString, UIWindow;
@protocol UIApplicationDelegate, SFBrowserApplicationProxy;



@interface SFBrowserApplication : UIApplication <UIApplicationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SFBrowserApplicationProxy> *proxy; // ivar: _proxy
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;




@end


#endif