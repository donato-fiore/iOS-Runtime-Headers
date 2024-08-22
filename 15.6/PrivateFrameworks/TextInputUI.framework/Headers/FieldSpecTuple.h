// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIELDSPECTUPLE_H
#define FIELDSPECTUPLE_H

@class TIAnalyticsFieldSpec, NSString;

#import <Foundation/Foundation.h>


@interface FieldSpecTuple : NSObject

@property (readonly, nonatomic) TIAnalyticsFieldSpec *fieldSpec; // ivar: _fieldSpec
@property (readonly, nonatomic) NSString *key; // ivar: _key


+(id)tupleWithKey:(id)arg0 eventSpec:(id)arg1 ;


@end


#endif