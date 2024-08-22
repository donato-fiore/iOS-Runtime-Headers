// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKREVERTOPERATION_H
#define CUIKREVERTOPERATION_H

@class EKChangeTracker;


#import "CUIKUserOperation.h"

@interface CUIKRevertOperation : CUIKUserOperation

@property (retain) EKChangeTracker *originalChangeTracker; // ivar: _originalChangeTracker




@end


#endif