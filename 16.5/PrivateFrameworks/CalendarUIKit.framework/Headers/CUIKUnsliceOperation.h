// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKUNSLICEOPERATION_H
#define CUIKUNSLICEOPERATION_H



#import "CUIKSaveOperation.h"

@interface CUIKUnsliceOperation : CUIKSaveOperation



-(BOOL)_executeWithUndoDelegate:(id)arg0 error:(*id)arg1 ;
-(Class)_inverseOperationClass;
-(id)_inverseForUndoSliceOutcome:(id)arg0 ;
-(id)_objectsForInverse;
-(id)originalObjects;


@end


#endif