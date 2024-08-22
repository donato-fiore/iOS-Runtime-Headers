// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCOMMUNICATIONCONFIGURATION_H
#define STCOMMUNICATIONCONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STCommunicationConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (readonly) BOOL isCommunicationSafetyNotificationEnabled; // ivar: _isCommunicationSafetyNotificationEnabled
@property (readonly) BOOL isCommunicationSafetyReceivingRestricted; // ivar: _isCommunicationSafetyReceivingRestricted
@property (readonly) BOOL isCommunicationSafetySendingRestricted; // ivar: _isCommunicationSafetySendingRestricted


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCommunicationConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommunicationSafetySendingRestricted:(BOOL)arg0 communicationSafetyReceivingRestricted:(BOOL)arg1 communicationSafetyNotificationEnabled:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif