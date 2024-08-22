// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDATEUTILITIES_H
#define CKDATEUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKDateUtilities : NSObject



+(id)relativeDateFormatterFromDate:(id)arg0 toDate:(id)arg1 ;
+(id)relativeDateOnlyFormatterFromDate:(id)arg0 toDate:(id)arg1 ;
+(id)thePastDateFormatter;
+(id)thePastDateFormatterNoTime;
+(id)thisWeekRelativeDateFormatter;
+(id)thisWeekRelativeDateFormatterNoTime;
+(id)thisYearDateFormatter;
+(id)thisYearDateFormatterNoTime;


@end


#endif