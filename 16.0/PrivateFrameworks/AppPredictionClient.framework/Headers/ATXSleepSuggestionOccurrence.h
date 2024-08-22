// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSLEEPSUGGESTIONOCCURRENCE_H
#define ATXSLEEPSUGGESTIONOCCURRENCE_H

@class NSDateComponents;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXSleepSuggestionOccurrence : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDateComponents *bedtimeComponents; // ivar: _bedtimeComponents
@property (copy, nonatomic) NSDateComponents *wakeUpComponents; // ivar: _wakeUpComponents
@property (nonatomic) NSUInteger weekdays; // ivar: _weekdays


+(BOOL)supportsSecureCoding;
-(id)initWithBedtimeComponents:(id)arg0 wakeupComponents:(id)arg1 weekdays:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif