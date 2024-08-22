// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPSDOMAINACCESSORUTILS_H
#define NPSDOMAINACCESSORUTILS_H


#import <Foundation/Foundation.h>


@interface NPSDomainAccessorUtils : NSObject



+(BOOL)boolForObject:(id)arg0 existsAndHasValidFormat:(*BOOL)arg1 ;
+(CGFloat)doubleForObject:(id)arg0 existsAndHasValidFormat:(*BOOL)arg1 ;
+(NSInteger)integerForObject:(id)arg0 existsAndHasValidFormat:(*BOOL)arg1 ;
+(NSInteger)longForObject:(id)arg0 existsAndHasValidFormat:(*BOOL)arg1 ;
+(float)floatForObject:(id)arg0 existsAndHasValidFormat:(*BOOL)arg1 ;
+(id)URLForObject:(id)arg0 ;
+(id)arrayForObject:(id)arg0 ;
+(id)dataForObject:(id)arg0 ;
+(id)dictionaryForObject:(id)arg0 ;
+(id)objectForURL:(id)arg0 ;
+(id)stringArrayForObject:(id)arg0 ;
+(id)stringForObject:(id)arg0 ;


@end


#endif