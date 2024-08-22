// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSLOGFORMATTER_H
#define IDSLOGFORMATTER_H


#import <Foundation/Foundation.h>


@interface IDSLogFormatter : NSObject



+(id)descriptionForArray:(id)arg0 options:(NSUInteger)arg1 ;
+(id)descriptionForArray:(id)arg0 options:(NSUInteger)arg1 level:(NSInteger)arg2 ;
+(id)descriptionForData:(id)arg0 options:(NSUInteger)arg1 ;
+(id)descriptionForDictionary:(id)arg0 options:(NSUInteger)arg1 ;
+(id)descriptionForDictionary:(id)arg0 options:(NSUInteger)arg1 level:(NSInteger)arg2 ;
+(id)descriptionForObject:(id)arg0 options:(NSUInteger)arg1 ;
+(id)descriptionForObject:(id)arg0 options:(NSUInteger)arg1 level:(NSInteger)arg2 ;
+(id)descriptionForString:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif