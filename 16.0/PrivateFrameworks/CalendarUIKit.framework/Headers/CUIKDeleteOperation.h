// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKDELETEOPERATION_H
#define CUIKDELETEOPERATION_H

@class NSArray;


#import "CUIKUserOperation.h"

@interface CUIKDeleteOperation : CUIKUserOperation

@property (retain, nonatomic) NSArray *precomputedInverseObjects; // ivar: _precomputedInverseObjects


-(BOOL)_canBeUndone;
-(BOOL)_executeWithUndoDelegate:(id)arg0 error:(*id)arg1 ;
-(Class)_inverseOperationClass;
-(id)_actionName;
-(id)_objectsForInverse;


@end


#endif