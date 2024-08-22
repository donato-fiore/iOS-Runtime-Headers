// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CLKTIMEFORMATDATA_H
#define _CLKTIMEFORMATDATA_H

@class NSNumberFormatter, NSString;

#import <Foundation/Foundation.h>


@interface _CLKTimeFormatData : NSObject

@property (readonly, nonatomic) NSNumberFormatter *doubleWidthNumberFormatter; // ivar: _doubleWidthNumberFormatter
@property (readonly, nonatomic) NSString *formatHourMin; // ivar: _formatHourMin
@property (readonly, nonatomic) NSString *formatHourMinSec; // ivar: _formatHourMinSec
@property (readonly, nonatomic) NSString *formatHourMinSecSubsec; // ivar: _formatHourMinSecSubsec
@property (readonly, nonatomic) NSString *formatMin; // ivar: _formatMin
@property (readonly, nonatomic) NSString *formatMinSec; // ivar: _formatMinSec
@property (readonly, nonatomic) NSString *formatMinSecSubsec; // ivar: _formatMinSecSubsec
@property (readonly, nonatomic) NSNumberFormatter *singleWidthNumberFormatter; // ivar: _singleWidthNumberFormatter


+(id)_timeFormatDataAccessLock;
+(id)_timeLocale;
+(id)instanceForCurrentLocale;
+(void)resetTimeFormatData;
-(id)init;


@end


#endif