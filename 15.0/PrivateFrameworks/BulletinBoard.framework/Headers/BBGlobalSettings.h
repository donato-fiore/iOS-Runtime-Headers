// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBGLOBALSETTINGS_H
#define BBGLOBALSETTINGS_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBGlobalSettings : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger globalAnnounceCarPlaySetting; // ivar: _globalAnnounceCarPlaySetting
@property (nonatomic) NSInteger globalAnnounceHeadphonesSetting; // ivar: _globalAnnounceHeadphonesSetting
@property (nonatomic) NSInteger globalAnnounceSetting; // ivar: _globalAnnounceSetting
@property (nonatomic) NSInteger globalContentPreviewSetting; // ivar: _globalContentPreviewSetting
@property (nonatomic) NSInteger globalScheduledDeliverySetting; // ivar: _globalScheduledDeliverySetting
@property (nonatomic) NSInteger globalScheduledDeliveryShowNextSummarySetting; // ivar: _globalScheduledDeliveryShowNextSummarySetting
@property (copy, nonatomic) NSArray *globalScheduledDeliveryTimes; // ivar: _globalScheduledDeliveryTimes
@property (readonly, nonatomic) NSInteger globalSpokenNotificationSetting;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentPreviewSetting:(NSInteger)arg0 announceSetting:(NSInteger)arg1 announceHeadphonesSetting:(NSInteger)arg2 announceCarPlaySetting:(NSInteger)arg3 scheduledDeliverySetting:(NSInteger)arg4 scheduledDeliveryTimes:(id)arg5 scheduledDeliveryShowNextSummarySetting:(NSInteger)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif