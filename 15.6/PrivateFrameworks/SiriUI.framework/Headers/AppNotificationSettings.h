// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPNOTIFICATIONSETTINGS_H
#define APPNOTIFICATIONSETTINGS_H


#import <Foundation/Foundation.h>


@interface AppNotificationSettings : NSObject

@property (nonatomic, getter=isAnnounceEnabled) BOOL announceEnabled; // ivar: _announceEnabled
@property (nonatomic, getter=areCarPlayBannersEnabled) BOOL carPlayBannersEnabled; // ivar: _carPlayBannersEnabled


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAnnounceEnabled:(BOOL)arg0 carPlayBannersEnabled:(BOOL)arg1 ;


@end


#endif