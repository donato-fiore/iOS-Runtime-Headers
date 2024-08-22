// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKCOIDPLACEMENTADDOPERATION_H
#define TSKCOIDPLACEMENTADDOPERATION_H

@class NSString;
@protocol TSKCOObjectCountConstraint;


#import "TSKCOIdPlacementBaseOperation.h"

@interface TSKCOIdPlacementAddOperation : TSKCOIdPlacementBaseOperation <TSKCOObjectCountConstraint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int objectCount; // ivar: _objectCount
@property (readonly, nonatomic) int objectCounterSpace; // ivar: _objectCounterSpace
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAddress:(*void)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 dominating:(BOOL)arg3 noop:(BOOL)arg4 ;
-(id)initWithAddress:(*void)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 dominating:(BOOL)arg3 noop:(BOOL)arg4 objectCount:(int)arg5 objectCounterSpace:(int)arg6 ;
-(id)initWithAddress:(*void)arg0 toIndex:(int)arg1 ;
-(id)initWithAddress:(*void)arg0 toIndex:(int)arg1 noop:(BOOL)arg2 objectCount:(int)arg3 objectCounterSpace:(int)arg4 ;
-(id)initWithAddress:(*void)arg0 toIndex:(int)arg1 objectCount:(int)arg2 objectCounterSpace:(int)arg3 ;
-(id)initWithUUIDPath:(id)arg0 toIndex:(int)arg1 ;
-(id)initWithUnarchiver:(id)arg0 message:(*void)arg1 ;
-(id)operationWithNewNoop:(BOOL)arg0 ;
-(id)toString;
-(int)placementType;
-(struct shared_ptr<TSKCO::AbstractOperation> )newTransformableOperation;
-(void)saveToArchiver:(id)arg0 message:(*void)arg1 ;


@end


#endif