// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKSUBSCRIBEDHOLIDAYCALENDAR_H
#define CUIKSUBSCRIBEDHOLIDAYCALENDAR_H

@class NSString, NSURL, NSLocale;

#import <Foundation/Foundation.h>


@interface CUIKSubscribedHolidayCalendar : NSObject {
    NSString *_cachedLocalizedDescription;
    NSString *_cachedDescriptionInLocaleLanguage;
    os_unfair_lock_s _localizedDescriptionCacheLock;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


-(id)descriptionInLocaleLanguage;
-(id)initWithLocale:(id)arg0 languageCode:(id)arg1 URL:(id)arg2 ;
-(id)localizedDescription;
-(id)localizedTitle;


@end


#endif