// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFANNINGVISUALPOSITIONSCHANGEDETAILS_H
#define PXFANNINGVISUALPOSITIONSCHANGEDETAILS_H



#import "PXVisualPositionsChangeDetails.h"

@interface PXFanningVisualPositionsChangeDetails : PXVisualPositionsChangeDetails {
    NSInteger _anchorFan;
    NSInteger _anchorReload;
}




-(id)initWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 headerIndexesBeforeChanges:(id)arg2 countAfterChanges:(NSInteger)arg3 anchorIndexAfterChanges:(NSInteger)arg4 headerIndexesAfterChanges:(id)arg5 ;
-(id)initWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 headerIndexesBeforeChanges:(id)arg2 countAfterChanges:(NSInteger)arg3 anchorIndexAfterChanges:(NSInteger)arg4 headerIndexesAfterChanges:(id)arg5 anchorFan:(NSInteger)arg6 anchorReload:(NSInteger)arg7 ;
-(struct ? )bodyVisualPositionAfterApplyingChangesToBodyIndex:(NSInteger)arg0 ;
-(struct ? )bodyVisualPositionAfterRevertingChangesFromBodyIndex:(NSInteger)arg0 ;


@end


#endif