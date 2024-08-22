// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKUSEROPERATION_H
#define CUIKUSEROPERATION_H

@class EKEventStore, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "CUIKUserOperation.h"

@interface CUIKUserOperation : NSObject

@property (weak, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (nonatomic) BOOL inverseOperationPrecomputed; // ivar: _inverseOperationPrecomputed
@property (readonly, nonatomic) NSArray *objects; // ivar: _objects
@property (retain, nonatomic) NSArray *originalObjects; // ivar: _originalObjects
@property (retain, nonatomic) NSArray *originalSliceDescriptions; // ivar: _originalSliceDescriptions
@property (retain, nonatomic) NSString *precomputedActionName; // ivar: _precomputedActionName
@property (retain, nonatomic) CUIKUserOperation *precomputedInverseOperation; // ivar: _precomputedInverseOperation
@property (readonly, nonatomic) NSInteger span; // ivar: _span




@end


#endif