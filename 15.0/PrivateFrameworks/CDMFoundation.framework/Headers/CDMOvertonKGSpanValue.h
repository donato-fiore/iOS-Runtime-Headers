// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMOVERTONKGSPANVALUE_H
#define CDMOVERTONKGSPANVALUE_H

@class NSString, NSSet;


#import "CDMSpanValue.h"

@interface CDMOvertonKGSpanValue : CDMSpanValue {
    NSString *_entityName;
    NSSet *_features;
    CGFloat _confidence;
}




-(id)initWithEntityID:(id)arg0 entityName:(id)arg1 features:(id)arg2 confidence:(CGFloat)arg3 ;
-(id)toDictionary;


@end


#endif