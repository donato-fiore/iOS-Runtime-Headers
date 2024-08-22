// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEHOURSFORMATTER_H
#define MUPLACEHOURSFORMATTER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MUPlaceHoursFormatter : NSObject {
    BOOL _formatAMPM;
}


@property (readonly, nonatomic) NSArray *AMPMSymbols; // ivar: _AMPMSymbols
@property (readonly, nonatomic) NSString *hoursString; // ivar: _hoursString


+(id)_AMPMFont;
+(id)_hoursMonospacedFont;
+(id)hoursFormatterFromHoursStringComponents:(id)arg0 AMPMSymbols:(id)arg1 ;
-(id)buildAttributedHourStringWithHourFont:(id)arg0 AMPMFont:(id)arg1 hourColor:(id)arg2 ;
-(id)buildDefaultPlacecardHoursString;
-(id)initWithHoursString:(id)arg0 AMPMSymbols:(id)arg1 ;


@end


#endif