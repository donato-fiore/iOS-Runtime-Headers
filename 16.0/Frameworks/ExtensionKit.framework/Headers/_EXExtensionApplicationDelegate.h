// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXEXTENSIONAPPLICATIONDELEGATE_H
#define _EXEXTENSIONAPPLICATIONDELEGATE_H

@class NSString, UIWindow;
@protocol UIApplicationDelegate;

#import <Foundation/Foundation.h>


@interface _EXExtensionApplicationDelegate : NSObject <UIApplicationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;


-(BOOL)application:(id)arg0 willFinishLaunchingWithOptions:(id)arg1 ;
-(id)application:(id)arg0 configurationForConnectingSceneSession:(id)arg1 options:(id)arg2 ;
-(void)applicationDidFinishLaunching:(id)arg0 ;


@end


#endif