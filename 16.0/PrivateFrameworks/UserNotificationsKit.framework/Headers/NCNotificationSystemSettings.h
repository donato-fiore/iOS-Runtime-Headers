// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONSYSTEMSETTINGS_H
#define NCNOTIFICATIONSYSTEMSETTINGS_H

@class NSString, NSArray;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface NCNotificationSystemSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger listDisplayStyleSetting; // ivar: _listDisplayStyleSetting
@property (readonly, nonatomic, getter=isScheduledDeliveryEnabled) BOOL scheduledDeliveryEnabled; // ivar: _scheduledDeliveryEnabled
@property (readonly, nonatomic, getter=shouldScheduledDeliveryShowNextSummary) BOOL scheduledDeliveryShowNextSummary; // ivar: _scheduledDeliveryShowNextSummary
@property (readonly, copy, nonatomic) NSArray *scheduledDeliveryTimes; // ivar: _scheduledDeliveryTimes
@property (readonly, nonatomic, getter=isScheduledDeliveryUninitialized) BOOL scheduledDeliveryUninitialized; // ivar: _scheduledDeliveryUninitialized
@property (readonly) Class superclass;


+(id)stringForNotificationListDisplayStyleSetting:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithNotificationSystemSettings:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif