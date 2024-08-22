// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKCREATEOPERATION_H
#define CUIKCREATEOPERATION_H

@class NSArray;


#import "CUIKUserOperation.h"

@interface CUIKCreateOperation : CUIKUserOperation

@property (retain, nonatomic) NSArray *precomputedInverseObjects; // ivar: _precomputedInverseObjects


-(BOOL)_executeWithUndoDelegate:(id)arg0 error:(*id)arg1 ;
-(Class)_inverseOperationClass;
-(NSInteger)_inverseOperationSpan;
-(id)_actionName;
-(id)_objectsForInverse;
-(void)_precomputeInverseObjects;


@end


#endif