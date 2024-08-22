// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REEXPORTEDDATEVALUE_H
#define REEXPORTEDDATEVALUE_H

@class NSDate;


#import "REExportedValue.h"

@interface REExportedDateValue : REExportedValue {
    NSDate *_date;
}




-(NSUInteger)type;
-(id)dateValue;
-(id)initWithDate:(id)arg0 ;


@end


#endif