// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMUTABLEDATERANGESET_H
#define PXMUTABLEDATERANGESET_H



#import "PXDateRangeSet.h"

@interface PXMutableDateRangeSet : PXDateRangeSet



-(BOOL)_attemptToAddDateRange:(id)arg0 outNextRange:(*id)arg1 ;
-(void)addDateRange:(id)arg0 ;
-(void)removeAllDateRanges;


@end


#endif