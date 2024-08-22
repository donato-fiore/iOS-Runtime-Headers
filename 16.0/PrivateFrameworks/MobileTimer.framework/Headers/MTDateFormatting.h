// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTDATEFORMATTING_H
#define MTDATEFORMATTING_H

@class NSString, NSDateFormatter;

#import <Foundation/Foundation.h>


@interface MTDateFormatting : NSObject {
    NSString *_amString;
    NSString *_pmString;
    NSDateFormatter *_dateOnlyFormatter;
    NSDateFormatter *_timeOnlyFormatter;
}


@property (readonly, weak, nonatomic) NSString *amString;
@property (readonly, weak, nonatomic) NSString *pmString;
@property (readonly, nonatomic) BOOL timeDesignatorAppearsBeforeTime; // ivar: _timeDesignatorAppearsBeforeTime
@property (readonly, nonatomic) BOOL use24HourTime; // ivar: _use24HourTime


+(id)sharedInstance;
-(id)_dateOnlyFormatter;
-(id)_timeOnlyFormatter;
-(id)init;
-(id)localizedTimeStringFromDate:(id)arg0 forTimeZone:(id)arg1 timeDesignator:(*id)arg2 ;
-(id)localizedTimeStringFromDate:(id)arg0 timeDesignator:(*id)arg1 ;
-(id)timeDesignatorForDate:(id)arg0 ;
-(id)timeDesignatorForDate:(id)arg0 timeZone:(id)arg1 ;
-(void)_clearLocaleDependentState;
-(void)_loadLocaleInfo;
-(void)_reloadLocaleInfo;
-(void)dealloc;


@end


#endif