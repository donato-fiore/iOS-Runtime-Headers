// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONLAUNCHNOTIFYALERTITEM_H
#define SBAPPLICATIONLAUNCHNOTIFYALERTITEM_H

@class SBAlertItem;


#import "SBApplication.h"

@interface SBApplicationLaunchNotifyAlertItem : SBAlertItem

@property (readonly, nonatomic) SBApplication *application; // ivar: _application


-(BOOL)dismissOnLock;
-(id)initWithApplication:(id)arg0 ;


@end


#endif