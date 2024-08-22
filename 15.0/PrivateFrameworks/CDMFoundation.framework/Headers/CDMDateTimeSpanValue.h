// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMDATETIMESPANVALUE_H
#define CDMDATETIMESPANVALUE_H

@class NSDate;


#import "CDMSpanValue.h"

@interface CDMDateTimeSpanValue : CDMSpanValue {
    NSDate *_date;
    CGFloat _duration;
}




-(id)initWithStringValue:(id)arg0 ;
-(id)initWithStringValue:(id)arg0 date:(id)arg1 duration:(CGFloat)arg2 ;
-(id)toDictionary;


@end


#endif