// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIJSONSERIALIZATION_H
#define PUIJSONSERIALIZATION_H

@class NSJSONSerialization;



@interface PUIJSONSerialization : NSJSONSerialization



+(id)dataWithJSONObject:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)dateToString:(id)arg0 ;
+(id)recursivelyReplaceNSDateWithNSString:(id)arg0 ;


@end


#endif