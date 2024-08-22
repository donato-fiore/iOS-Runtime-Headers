// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKNOTIFICATIONCENTER_H
#define WLKNOTIFICATIONCENTER_H

@protocol WLKNotificationsImpl, WLKNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface WLKNotificationCenter : NSObject {
    id<WLKNotificationsImpl> *_impl;
}


@property (weak, nonatomic) NSObject<WLKNotificationCenterDelegate> *delegate; // ivar: _delegate


+(id)defaultCenter;
-(BOOL)isCategoryBadgeSettingEnabledByUser:(NSInteger)arg0 ;
-(BOOL)isCategoryEnabledByUser:(NSInteger)arg0 ;
-(id)init;
-(void)post:(id)arg0 title:(id)arg1 body:(id)arg2 options:(id)arg3 ;
-(void)setBadgeNumber:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setBadgeString:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif