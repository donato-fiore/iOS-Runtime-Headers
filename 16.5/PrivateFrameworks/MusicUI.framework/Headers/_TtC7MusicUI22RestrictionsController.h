// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7MUSICUI22RESTRICTIONSCONTROLLER_H
#define _TTC7MUSICUI22RESTRICTIONSCONTROLLER_H

@protocol MCProfileConnectionObserver;

#import <Foundation/Foundation.h>


@interface _TtC7MusicUI22RestrictionsController : NSObject <MCProfileConnectionObserver>





-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif