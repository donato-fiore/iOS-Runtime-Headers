// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDATEUTILITIES_H
#define CKDATEUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKDateUtilities : NSObject



+(id)relativeDateFormatterFromDate:(id)arg0 toDate:(id)arg1 ;
+(id)relativeDateOnlyFormatterFromDate:(id)arg0 toDate:(id)arg1 ;
+(id)relativeFullDateOnlyFormatterFromDate:(id)arg0 toDate:(id)arg1 ;
+(id)thePastDateFormatter;
+(id)thePastDateFormatterNoTime;
+(id)thePastFullDateFormatterNoTime;
+(id)thisWeekRelativeDateFormatter;
+(id)thisWeekRelativeDateFormatterNoTime;
+(id)thisYearDateFormatter;
+(id)thisYearDateFormatterNoTime;
+(id)thisYearFullDateFormatterNoTime;


@end


#endif