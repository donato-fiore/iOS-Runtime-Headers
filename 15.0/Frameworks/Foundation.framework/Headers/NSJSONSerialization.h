// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSJSONSERIALIZATION_H
#define NSJSONSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface NSJSONSerialization : NSObject {
    *void reserved;
}




+(BOOL)isValidJSONObject:(id)arg0 ;
+(NSInteger)writeJSONObject:(id)arg0 toStream:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)JSONObjectWithData:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)JSONObjectWithStream:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)dataWithJSONObject:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif