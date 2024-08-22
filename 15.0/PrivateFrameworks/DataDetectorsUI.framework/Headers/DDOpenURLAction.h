// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDOPENURLACTION_H
#define DDOPENURLACTION_H

@class LSAppLink;


#import "DDAction.h"

@interface DDOpenURLAction : DDAction {
    LSAppLink *_appLink;
    BOOL _appLinkInitDone;
}




-(BOOL)canBePerformedByOpeningURL;
-(BOOL)canBePerformedWhenDeviceIsLocked;
-(BOOL)shouldOpenInApp;
-(BOOL)shouldOpenInSafari;
-(id)appLink;
-(id)compactTitle;
-(id)companionAction;
-(id)iconName;
-(id)localizedName;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
-(void)performFromView:(id)arg0 ;


@end


#endif