// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BASEDATEPROVIDER_H
#define BASEDATEPROVIDER_H

@class NSCalendar, NSLocale, NSTimeZone;

#import <Foundation/Foundation.h>


@interface BaseDateProvider : NSObject

@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(NSInteger)_updateFrequency;
-(id)_sessionTextForIndex:(NSInteger)arg0 ;
-(id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg0 ;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg0 andRemovingDesignator:(BOOL)arg1 designatorExists:(*BOOL)arg2 ;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg0 designatorExists:(*BOOL)arg1 ;
-(id)formattedString;
-(id)initWithCalendar:(id)arg0 locale:(id)arg1 timeZone:(id)arg2 ;
-(id)updateInterval;
-(void)_endSession;
-(void)_startSessionWithDate:(id)arg0 ;


@end


#endif