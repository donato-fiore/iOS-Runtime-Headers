// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UILOCALNOTIFICATION_H
#define UILOCALNOTIFICATION_H

@class NSString, NSDate, CLRegion, NSCalendar, NSTimeZone, NSDictionary;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface UILocalNotification : NSObject <NSCopying, NSCoding>



@property (copy, nonatomic) NSString *alertAction;
@property (copy, nonatomic) NSString *alertBody;
@property (copy, nonatomic) NSString *alertLaunchImage;
@property (copy, nonatomic) NSString *alertTitle;
@property (nonatomic) NSInteger applicationIconBadgeNumber;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSDate *fireDate;
@property (nonatomic) BOOL hasAction;
@property (copy, nonatomic) CLRegion *region;
@property (nonatomic) BOOL regionTriggersOnce;
@property (copy, nonatomic) NSCalendar *repeatCalendar;
@property (nonatomic) NSUInteger repeatInterval;
@property (copy, nonatomic) NSString *soundName;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSDictionary *userInfo;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isTriggeredByDate;
-(BOOL)isTriggeredByRegion;
-(BOOL)isValid;
-(NSInteger)compareFireDates:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)nextFireDateAfterDate:(id)arg0 localTimeZone:(id)arg1 ;
-(id)nextFireDateForLastFireDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)validate;


@end


#endif