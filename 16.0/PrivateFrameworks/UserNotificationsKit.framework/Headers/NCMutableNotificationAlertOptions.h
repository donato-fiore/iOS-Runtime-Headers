// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCMUTABLENOTIFICATIONALERTOPTIONS_H
#define NCMUTABLENOTIFICATIONALERTOPTIONS_H

@class NSUUID;


#import "NCNotificationAlertOptions.h"

@interface NCMutableNotificationAlertOptions : NCNotificationAlertOptions

@property (copy, nonatomic) NSUUID *activeModeUUID;
@property (nonatomic) NSUInteger reason;
@property (nonatomic) NSUInteger suppression;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif