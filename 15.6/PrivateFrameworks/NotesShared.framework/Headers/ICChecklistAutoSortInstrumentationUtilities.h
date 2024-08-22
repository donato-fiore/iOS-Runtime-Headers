// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCHECKLISTAUTOSORTINSTRUMENTATIONUTILITIES_H
#define ICCHECKLISTAUTOSORTINSTRUMENTATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICChecklistAutoSortInstrumentationUtilities : NSObject



+(NSInteger)autoSortSelectionChangeCountForState:(BOOL)arg0 ;
+(id)autoSortSelectionCountUserDefaultsKeyForState:(BOOL)arg0 ;
+(void)clearAutoSortSelectionChangeCountForState:(BOOL)arg0 ;
+(void)incrementAutoSortSelectionChangeCountForState:(BOOL)arg0 ;


@end


#endif