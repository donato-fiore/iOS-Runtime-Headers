// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXRELOADINGVISUALPOSITIONSCHANGEDETAILS_H
#define PXRELOADINGVISUALPOSITIONSCHANGEDETAILS_H



#import "PXVisualPositionsChangeDetails.h"

@interface PXReloadingVisualPositionsChangeDetails : PXVisualPositionsChangeDetails {
    BOOL _reloadAnchor;
}




-(id)initWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 headerIndexesBeforeChanges:(id)arg2 countAfterChanges:(NSInteger)arg3 anchorIndexAfterChanges:(NSInteger)arg4 headerIndexesAfterChanges:(id)arg5 ;
-(id)initWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 headerIndexesBeforeChanges:(id)arg2 countAfterChanges:(NSInteger)arg3 anchorIndexAfterChanges:(NSInteger)arg4 headerIndexesAfterChanges:(id)arg5 reloadAllIncludingAnchor:(BOOL)arg6 ;
-(struct ? )bodyVisualPositionAfterApplyingChangesToBodyIndex:(NSInteger)arg0 ;
-(struct ? )bodyVisualPositionAfterRevertingChangesFromBodyIndex:(NSInteger)arg0 ;


@end


#endif