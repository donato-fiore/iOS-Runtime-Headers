// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDDELETEPARTSHELPER_H
#define IMDDELETEPARTSHELPER_H


#import <Foundation/Foundation.h>


@interface IMDDeletePartsHelper : NSObject



+(BOOL)_convertDeletedPartsDict:(id)arg0 toIndexSet:(*id)arg1 toMap:(*id)arg2 ;
+(NSUInteger)_unsignedIntegerFromString:(id)arg0 ;
+(id)_makeDeletePartsDictFor:(id)arg0 withIndexes:(id)arg1 withIndexToRangeMap:(id)arg2 deleteDate:(id)arg3 ;


@end


#endif