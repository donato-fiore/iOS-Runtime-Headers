// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPSHAREDTRIPNOTIFICATIONRULES_H
#define MSPSHAREDTRIPNOTIFICATIONRULES_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSPSharedTripNotificationRules : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *currentETADate; // ivar: _currentETADate
@property (readonly, nonatomic) NSUInteger currentlyNecessaryNotificationType;
@property (nonatomic) BOOL hasMadeFinalPush; // ivar: _hasMadeFinalPush
@property (retain, nonatomic) NSDate *lastPostedETADate; // ivar: _lastPostedETADate
@property (retain, nonatomic) NSDate *lastPostedNotificationDate; // ivar: _lastPostedNotificationDate
@property (retain, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (nonatomic) NSUInteger maxPostedNotifications; // ivar: _maxPostedNotifications
@property (nonatomic) CGFloat minimumETADifference; // ivar: _minimumETADifference
@property (nonatomic) CGFloat minimumNotificationInterval; // ivar: _minimumNotificationInterval
@property (nonatomic) NSUInteger postedNotifications; // ivar: _postedNotifications


+(BOOL)supportsSecureCoding;
+(id)unarchivingObjectsSet;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaximumNumberOfNotifications:(NSUInteger)arg0 ;
-(id)initWithMaximumNumberOfNotifications:(NSUInteger)arg0 minimumNotificationInterval:(CGFloat)arg1 ;
-(void)didPostNotification;
-(void)didReceiveUpdateWithETA:(CGFloat)arg0 lastUpdated:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementMinimumETADifference;


@end


#endif