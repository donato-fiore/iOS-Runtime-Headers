// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMREGEXSPANVALUE_H
#define CDMREGEXSPANVALUE_H

@class NSDictionary;


#import "CDMSpanValue.h"

@interface CDMRegexSpanValue : CDMSpanValue {
    NSDictionary *_values;
}




-(id)initWithStringValue:(id)arg0 values:(id)arg1 ;
-(id)toDictionary;


@end


#endif