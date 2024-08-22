// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKREVERTOPERATION_H
#define CUIKREVERTOPERATION_H

@class EKChangeTracker;


#import "CUIKUserOperation.h"

@interface CUIKRevertOperation : CUIKUserOperation

@property (retain) EKChangeTracker *originalChangeTracker; // ivar: _originalChangeTracker


+(id)operationForContext:(id)arg0 ;
-(BOOL)_executeWithUndoDelegate:(id)arg0 error:(*id)arg1 ;
-(Class)_inverseOperationClass;
-(id)_actionName;
-(id)_inverseOperation;


@end


#endif