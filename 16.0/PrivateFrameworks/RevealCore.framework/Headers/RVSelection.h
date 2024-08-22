// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RVSELECTION_H
#define RVSELECTION_H


#import <Foundation/Foundation.h>


@interface RVSelection : NSObject



+(NSUInteger)maxContextLength;
+(struct _NSRange )revealRangeAtIndex:(NSUInteger)arg0 selectedRanges:(id)arg1 shouldUpdateSelection:(*BOOL)arg2 ;
+(struct _NSRange )searchRangeForString:(id)arg0 aroundLocation:(NSUInteger)arg1 ;


@end


#endif