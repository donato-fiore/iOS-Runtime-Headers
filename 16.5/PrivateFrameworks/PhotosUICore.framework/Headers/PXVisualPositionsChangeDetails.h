// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXVISUALPOSITIONSCHANGEDETAILS_H
#define PXVISUALPOSITIONSCHANGEDETAILS_H

@class NSIndexSet;

#import <Foundation/Foundation.h>


@interface PXVisualPositionsChangeDetails : NSObject

@property (readonly, nonatomic) NSInteger anchorBodyIndexAfterChanges; // ivar: _anchorBodyIndexAfterChanges
@property (readonly, nonatomic) NSInteger anchorBodyIndexBeforeChanges; // ivar: _anchorBodyIndexBeforeChanges
@property (readonly, nonatomic) NSInteger anchorIndexAfterChanges; // ivar: _anchorIndexAfterChanges
@property (readonly, nonatomic) NSInteger anchorIndexBeforeChanges; // ivar: _anchorIndexBeforeChanges
@property (readonly, nonatomic) NSInteger countAfterChanges; // ivar: _countAfterChanges
@property (readonly, nonatomic) NSInteger countBeforeChanges; // ivar: _countBeforeChanges
@property (readonly, nonatomic) NSIndexSet *headerIndexesAfterChanges; // ivar: _headerIndexesAfterChanges
@property (readonly, nonatomic) NSIndexSet *headerIndexesBeforeChanges; // ivar: _headerIndexesBeforeChanges


+(id)changeDetailsWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 countAfterChanges:(NSInteger)arg2 anchorIndexAfterChanges:(NSInteger)arg3 anchorFan:(NSInteger)arg4 ;
+(id)changeDetailsWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 countAfterChanges:(NSInteger)arg2 anchorIndexAfterChanges:(NSInteger)arg3 anchorFan:(NSInteger)arg4 anchorReload:(NSInteger)arg5 ;
+(id)changeDetailsWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 countAfterChanges:(NSInteger)arg2 anchorRemoved:(NSInteger)arg3 indexAfterChanges:(NSInteger)arg4 ;
+(id)changeDetailsWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 headerIndexesBeforeChanges:(id)arg2 countAfterChanges:(NSInteger)arg3 anchorIndexAfterChanges:(NSInteger)arg4 headerIndexesAfterChanges:(id)arg5 anchorFan:(NSInteger)arg6 anchorReload:(NSInteger)arg7 ;
+(id)changeDetailsWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 headerIndexesBeforeChanges:(id)arg2 countAfterChanges:(NSInteger)arg3 anchorIndexAfterChanges:(NSInteger)arg4 headerIndexesAfterChanges:(id)arg5 reloadAllIncludingAnchor:(BOOL)arg6 ;
+(id)changeDetailsWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 headerIndexesBeforeChanges:(id)arg2 countAfterChanges:(NSInteger)arg3 anchorRemoved:(NSInteger)arg4 indexAfterChanges:(NSInteger)arg5 headerIndexesAfterChanges:(id)arg6 ;
+(id)changeDetailsWithCountBeforeChanges:(NSInteger)arg0 anchorInserted:(NSInteger)arg1 indexBeforeChanges:(NSInteger)arg2 countAfterChanges:(NSInteger)arg3 anchorIndexAfterChanges:(NSInteger)arg4 ;
+(id)changeDetailsWithCountBeforeChanges:(NSInteger)arg0 anchorInserted:(NSInteger)arg1 indexBeforeChanges:(NSInteger)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(NSInteger)arg4 anchorIndexAfterChanges:(NSInteger)arg5 headerIndexesAfterChanges:(id)arg6 ;
-(id)arrayChangeDetailsWithItemsChanged:(BOOL)arg0 ;
-(id)init;
-(id)initWithCountBeforeChanges:(NSInteger)arg0 anchorIndexBeforeChanges:(NSInteger)arg1 headerIndexesBeforeChanges:(id)arg2 countAfterChanges:(NSInteger)arg3 anchorIndexAfterChanges:(NSInteger)arg4 headerIndexesAfterChanges:(id)arg5 ;
-(struct ? )bodyVisualPositionAfterApplyingChangesToBodyIndex:(NSInteger)arg0 ;
-(struct ? )bodyVisualPositionAfterRevertingChangesFromBodyIndex:(NSInteger)arg0 ;
-(struct ? )visualPositionAfterApplyingChangesToIndex:(NSInteger)arg0 ;
-(struct ? )visualPositionAfterRevertingChangesFromIndex:(NSInteger)arg0 ;


@end


#endif