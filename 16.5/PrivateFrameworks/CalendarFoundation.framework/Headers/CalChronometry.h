// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALCHRONOMETRY_H
#define CALCHRONOMETRY_H


#import <Foundation/Foundation.h>


@interface CalChronometry : NSObject



+(id)activeCalendar;
+(id)activeTimeZone;
+(id)currentLanguageCode;
+(id)currentLocationCode;
+(void)_configureChronometry;
+(void)_currentLocaleDidChange:(id)arg0 ;
+(void)_currentTimeZoneDidChange:(id)arg0 ;
+(void)_updateActiveCalendar;
+(void)_updateActiveTimeZone;
+(void)_updateEveything;
+(void)_updateForLocaleChange;
+(void)initialize;
+(void)setActiveTimeZone:(id)arg0 ;


@end


#endif