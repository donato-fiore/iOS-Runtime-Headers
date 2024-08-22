// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDAPPEVENT_H
#define ASDAPPEVENT_H

@class NSString, NSDate, NSNumber, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDAppEvent : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (copy, nonatomic) NSString *appPlatform; // ivar: _appPlatform
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *cohort; // ivar: _cohort
@property (nonatomic) NSInteger count; // ivar: _count
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *deviceVendorID; // ivar: _deviceVendorID
@property (nonatomic) NSInteger duration; // ivar: _duration
@property (nonatomic) NSInteger eventSubtype; // ivar: _eventSubtype
@property (copy, nonatomic) NSNumber *eventTime; // ivar: _eventTime
@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (copy, nonatomic) NSNumber *evid; // ivar: _evid
@property (nonatomic) NSInteger foregroundUsage; // ivar: _foregroundUsage
@property (copy, nonatomic) NSArray *foregroundUsageEvents; // ivar: _foregroundUsageEvents
@property (nonatomic) BOOL hasBeenPosted; // ivar: _hasBeenPosted
@property (nonatomic) BOOL isBeta; // ivar: _isBeta
@property (nonatomic) BOOL isClip; // ivar: _isClip
@property (copy, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (copy, nonatomic) NSString *itemName; // ivar: _itemName
@property (copy, nonatomic) NSString *shortVersion; // ivar: _shortVersion
@property (copy, nonatomic) NSNumber *startTime; // ivar: _startTime
@property (copy, nonatomic) NSNumber *storefront; // ivar: _storefront
@property (copy, nonatomic) NSString *weekStartDate; // ivar: _weekStartDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif