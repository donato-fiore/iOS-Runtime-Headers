// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTMERGEABLEUNDOSTRING_H
#define TTMERGEABLEUNDOSTRING_H



#import "TTMergeableString.h"

@interface TTMergeableUndoString : TTMergeableString



-(struct TopoIDRange )insertAttributedString:(id)arg0 after:(*void)arg1 before:(*void)arg2 ;
-(void)addUndoCommand:(id)arg0 ;
-(void)applyUndoCommand:(id)arg0 ;
-(void)deleteSubstrings:(*void)arg0 withCharacterRanges:(*void)arg1 ;
-(void)undeleteSubstrings:(*void)arg0 ;


@end


#endif