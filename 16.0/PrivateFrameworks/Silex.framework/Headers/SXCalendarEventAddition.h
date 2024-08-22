// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCALENDAREVENTADDITION_H
#define SXCALENDAREVENTADDITION_H

@class NSURL, NSString;


#import "SXAddition.h"
#import "SXFormattedText.h"

@interface SXCalendarEventAddition : SXAddition

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *endDate;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) SXFormattedText *notes;
@property (readonly, nonatomic) NSString *startDate;
@property (readonly, nonatomic) NSString *title;


-(id)notesWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif