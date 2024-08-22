// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXARRAYNOINCREMENTALCHANGEDETAILS_H
#define _PXARRAYNOINCREMENTALCHANGEDETAILS_H



#import "PXArrayChangeDetails.h"

@interface _PXArrayNoIncrementalChangeDetails : PXArrayChangeDetails



-(BOOL)hasIncrementalChanges;
-(NSUInteger)indexAfterApplyingChangesToIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexAfterRevertingChangesFromIndex:(NSUInteger)arg0 ;


@end


#endif