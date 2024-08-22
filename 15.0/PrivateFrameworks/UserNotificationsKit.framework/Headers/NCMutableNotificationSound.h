// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCMUTABLENOTIFICATIONSOUND_H
#define NCMUTABLENOTIFICATIONSOUND_H

@class TLAlertConfiguration, NSDictionary, NSString;


#import "NCNotificationSound.h"

@interface NCMutableNotificationSound : NCNotificationSound

@property (copy, nonatomic) TLAlertConfiguration *alertConfiguration;
@property (copy, nonatomic) NSDictionary *controllerAttributes;
@property (nonatomic) CGFloat maxDuration;
@property (nonatomic, getter=isRepeating) BOOL repeats;
@property (copy, nonatomic) NSString *ringtoneName;
@property (copy, nonatomic) NSString *songPath;
@property (nonatomic) NSUInteger soundBehavior;
@property (nonatomic) NSInteger soundType;
@property (nonatomic) unsigned int systemSoundID;
@property (copy, nonatomic) NSDictionary *vibrationPattern;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif