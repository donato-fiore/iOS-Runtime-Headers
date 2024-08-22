// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RANGEDATAMANAGER_H
#define RANGEDATAMANAGER_H


#import <Foundation/Foundation.h>


@interface RangeDataManager : NSObject



+(BOOL)location:(NSInteger)arg0 isInRanges:(id)arg1 foundRange:(struct ? *)arg2 ;
+(id)collapseRanges:(id)arg0 ;
+(id)intersectionOfRangeLists:(id)arg0 ;
+(id)intersectionOfRanges1:(id)arg0 ranges2:(id)arg1 ;
+(id)invertedRanges:(id)arg0 duration:(NSInteger)arg1 ;
+(id)stringForRanges:(id)arg0 ;
+(id)unionOfRangeLists:(id)arg0 ;
+(id)unionOfRanges1:(id)arg0 ranges2:(id)arg1 ;
+(void)ranges:(id)arg0 addRange:(struct ? )arg1 forKey:(id)arg2 ;
+(void)unionOfRangeLists:(id)arg0 interleavedIntoList1:(*id)arg1 andList2:(*id)arg2 ;


@end


#endif