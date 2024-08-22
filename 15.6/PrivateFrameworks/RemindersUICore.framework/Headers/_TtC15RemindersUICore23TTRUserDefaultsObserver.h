// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15REMINDERSUICORE23TTRUSERDEFAULTSOBSERVER_H
#define _TTC15REMINDERSUICORE23TTRUSERDEFAULTSOBSERVER_H

@protocol REMUserDefaultsObserveToken;

#import <Foundation/Foundation.h>


@interface _TtC15RemindersUICore23TTRUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken>

 {
    ? userDefaultsKey;
    ? block;
    ? userDefaults;
    ? removed;
}




-(id)init;
-(void)dealloc;
-(void)stopObserving;


@end


#endif