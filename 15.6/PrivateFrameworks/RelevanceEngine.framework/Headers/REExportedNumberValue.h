// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REEXPORTEDNUMBERVALUE_H
#define REEXPORTEDNUMBERVALUE_H

@class NSNumber;


#import "REExportedValue.h"

@interface REExportedNumberValue : REExportedValue {
    NSNumber *_number;
}




-(NSUInteger)type;
-(id)initWithNumber:(id)arg0 ;
-(id)numberValue;


@end


#endif