// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REEXPORTEDSTRINGVALUE_H
#define REEXPORTEDSTRINGVALUE_H

@class NSString;


#import "REExportedValue.h"

@interface REExportedStringValue : REExportedValue {
    NSString *_string;
}




-(NSUInteger)type;
-(id)initWithString:(id)arg0 ;
-(id)stringValue;


@end


#endif