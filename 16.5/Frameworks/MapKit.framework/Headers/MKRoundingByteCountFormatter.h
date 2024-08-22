// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKROUNDINGBYTECOUNTFORMATTER_H
#define MKROUNDINGBYTECOUNTFORMATTER_H


#import <Foundation/Foundation.h>


@interface MKRoundingByteCountFormatter : NSObject



+(NSInteger)roundByteCount:(NSInteger)arg0 toNearest:(NSInteger)arg1 ;
+(id)stringFromByteCount:(NSInteger)arg0 roundedToNearest:(NSInteger)arg1 ;
+(id)stringFromByteCountWithRoundingTo10MB:(NSInteger)arg0 ;
+(id)stringFromByteCountWithRoundingTo1MB:(NSInteger)arg0 ;
+(id)stringFromByteCountWithRoundingTo5MB:(NSInteger)arg0 ;


@end


#endif