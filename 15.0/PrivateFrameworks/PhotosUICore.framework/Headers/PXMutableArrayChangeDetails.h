// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMUTABLEARRAYCHANGEDETAILS_H
#define PXMUTABLEARRAYCHANGEDETAILS_H



#import "PXArrayChangeDetails.h"

@interface PXMutableArrayChangeDetails : PXArrayChangeDetails {
    BOOL _isNonIncremental;
}




+(BOOL)_mutableCopyInputs;
+(id)changeDetailsWithNoIncrementalChanges;
-(BOOL)hasIncrementalChanges;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_addAdditionalRemovedIndex:(NSUInteger)arg0 afterChangesIndex:(NSUInteger)arg1 ;
-(void)_addAdditionalRemovedIndexSet:(id)arg0 afterChangesIndex:(id)arg1 ;
-(void)_addInsertedIndexes:(id)arg0 ;
-(void)_addInsertedRange:(struct _NSRange )arg0 ;
-(void)_addRemovedIndex:(NSUInteger)arg0 ;
-(void)_addRemovedIndexes:(id)arg0 ;
-(void)_becomeNonIncremental;
-(void)_removeInsertForRemovedIndexAfterChanges:(NSUInteger)arg0 ;
-(void)_updateChangedIndexesWithChangeDetails:(id)arg0 ;
-(void)_updateMovesWithChangesDetails:(id)arg0 ;
-(void)_updatePropertyChangesWithChangeDetails:(id)arg0 ;
-(void)addChangeDetails:(id)arg0 ;


@end


#endif