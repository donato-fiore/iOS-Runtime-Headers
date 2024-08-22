// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKRESLICEOPERATION_H
#define CUIKRESLICEOPERATION_H



#import "CUIKSaveOperation.h"

@interface CUIKResliceOperation : CUIKSaveOperation



-(BOOL)_executeWithUndoDelegate:(id)arg0 error:(*id)arg1 ;
-(Class)_inverseOperationClass;
-(id)_objectsForInverse;


@end


#endif