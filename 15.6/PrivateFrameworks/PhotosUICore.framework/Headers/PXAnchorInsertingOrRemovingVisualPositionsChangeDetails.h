// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXANCHORINSERTINGORREMOVINGVISUALPOSITIONSCHANGEDETAILS_H
#define PXANCHORINSERTINGORREMOVINGVISUALPOSITIONSCHANGEDETAILS_H



#import "PXVisualPositionsChangeDetails.h"

@interface PXAnchorInsertingOrRemovingVisualPositionsChangeDetails : PXVisualPositionsChangeDetails {
    BOOL _anchorInserted;
    NSInteger _anchorRelativePosition;
}




-(id)initWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 headerIndexesBeforeChanges:(id)arg2 countAfterChanges:(NSInteger)arg3 anchorIndexAfterChanges:(NSInteger)arg4 headerIndexesAfterChanges:(id)arg5 ;
-(id)initWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 headerIndexesBeforeChanges:(id)arg2 countAfterChanges:(NSInteger)arg3 anchorIndexAfterChanges:(NSInteger)arg4 headerIndexesAfterChanges:(id)arg5 anchorInserted:(BOOL)arg6 relativePosition:(NSInteger)arg7 ;
-(struct ? )bodyVisualPositionAfterApplyingChangesToBodyIndex:(NSInteger)arg0 ;
-(struct ? )bodyVisualPositionAfterRevertingChangesFromBodyIndex:(NSInteger)arg0 ;


@end


#endif