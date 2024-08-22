// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLFOLLOWUPNOTIFICATION_H
#define FLFOLLOWUPNOTIFICATION_H

@class NSDate, NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FLFollowUpAction.h"

@interface FLFollowUpNotification : NSObject <NSSecureCoding>



@property (retain, nonatomic) FLFollowUpAction *activateAction; // ivar: _activateAction
@property (retain, nonatomic) FLFollowUpAction *clearAction; // ivar: _clearAction
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) FLFollowUpAction *dismissAction; // ivar: _dismissAction
@property (nonatomic) CGFloat firstNotificationDelay; // ivar: _firstNotificationDelay
@property (nonatomic) BOOL forceDelivery;
@property (nonatomic) CGFloat frequency; // ivar: _frequency
@property (copy, nonatomic) NSString *informativeText; // ivar: _informativeText
@property (copy, nonatomic) NSSet *options; // ivar: _options
@property (retain, nonatomic) NSDate *previousNotificationActionDate; // ivar: _previousNotificationActionDate
@property (nonatomic) NSUInteger sqlID; // ivar: _sqlID
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *unlockActionLabel; // ivar: _unlockActionLabel


+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
-(BOOL)_shouldDeliverNotificationWithStringOut:(*id)arg0 ;
-(BOOL)shouldBackgroundDefaultAction;
-(BOOL)shouldDeliverNotification;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)recalculateActionDateToAccountForDelay;
-(void)set_optionsData:(id)arg0 ;


@end


#endif