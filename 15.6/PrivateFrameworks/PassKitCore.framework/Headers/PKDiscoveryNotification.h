// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDISCOVERYNOTIFICATION_H
#define PKDISCOVERYNOTIFICATION_H

@class NSDictionary, NSString, NSDate, NSURL;
@protocol NSSecureCoding;


#import "PKDiscoveryObject.h"

@interface PKDiscoveryNotification : PKDiscoveryObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *actionInfo; // ivar: _actionInfo
@property (copy, nonatomic) NSString *actionTitleKey; // ivar: _actionTitleKey
@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (nonatomic, getter=isDelivered) BOOL delivered; // ivar: _delivered
@property (readonly, copy, nonatomic) NSString *discoveryCardIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedActionTitle; // ivar: _localizedActionTitle
@property (readonly, copy, nonatomic) NSString *localizedMessage; // ivar: _localizedMessage
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (copy, nonatomic) NSString *messageKey; // ivar: _messageKey
@property (readonly, nonatomic) NSInteger passQualifier;
@property (retain, nonatomic) NSDate *scheduledDeliveryDate; // ivar: _scheduledDeliveryDate
@property (copy, nonatomic) NSString *titleKey; // ivar: _titleKey
@property (readonly, copy, nonatomic) NSURL *url;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualForDisplayToNotification:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 ;
-(void)scheduleDeliveryForCurrentDate:(id)arg0 ;
-(void)updateForRuleResult:(BOOL)arg0 ;
-(void)updateWithNotification:(id)arg0 ;


@end


#endif