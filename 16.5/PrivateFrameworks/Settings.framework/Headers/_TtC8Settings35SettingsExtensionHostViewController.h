// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8SETTINGS35SETTINGSEXTENSIONHOSTVIEWCONTROLLER_H
#define _TTC8SETTINGS35SETTINGSEXTENSIONHOSTVIEWCONTROLLER_H

@protocol _EXHostViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8Settings35SettingsExtensionHostViewController : NSObject <_EXHostViewControllerDelegate>

 {
    ? viewController;
    ? extensionProxies;
}




-(id)init;
-(void)hostViewController:(id)arg0 didBeginHosting:(id)arg1 ;
-(void)hostViewController:(id)arg0 didEndHosting:(id)arg1 error:(id)arg2 ;
-(void)hostViewControllerDidActivate:(id)arg0 ;


@end


#endif