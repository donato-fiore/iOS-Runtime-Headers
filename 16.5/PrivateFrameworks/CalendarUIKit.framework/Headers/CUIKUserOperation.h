// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKUSEROPERATION_H
#define CUIKUSEROPERATION_H

@class NSString, NSError, EKEventStore, NSArray;

#import <Foundation/Foundation.h>

#import "CUIKUserOperation.h"

@interface CUIKUserOperation : NSObject

@property (readonly, nonatomic) NSString *actionName;
@property (nonatomic) BOOL createdAsInverseOfAnotherOperation; // ivar: _createdAsInverseOfAnotherOperation
@property (retain) NSError *error; // ivar: _error
@property (weak, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (nonatomic) BOOL inverseOperationPrecomputed; // ivar: _inverseOperationPrecomputed
@property (readonly, nonatomic) NSArray *objects; // ivar: _objects
@property (retain, nonatomic) NSArray *originalObjects; // ivar: _originalObjects
@property (retain, nonatomic) NSArray *originalSliceDescriptions; // ivar: _originalSliceDescriptions
@property (retain, nonatomic) NSString *precomputedActionName; // ivar: _precomputedActionName
@property (retain, nonatomic) CUIKUserOperation *precomputedInverseOperation; // ivar: _precomputedInverseOperation
@property (readonly, nonatomic) NSInteger span; // ivar: _span


+(id)operationForContext:(id)arg0 ;
+(id)operationWithObjects:(id)arg0 span:(NSInteger)arg1 ;
-(BOOL)_executeWithUndoDelegate:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeWithUndoDelegate:(id)arg0 ;
-(Class)_inverseOperationClass;
-(NSInteger)_inverseOperationSpan;
-(NSInteger)_spanFromSpan:(NSInteger)arg0 objects:(id)arg1 ;
-(id)_inverseOperation;
-(id)initWithObjects:(id)arg0 span:(NSInteger)arg1 createdAsInverseOfAnotherOperation:(BOOL)arg2 ;
-(id)inverseOperation;
-(void)_precomputeActionName;
-(void)_precomputeInverseOperation;
-(void)_storeOriginalSliceDescriptions;


@end


#endif