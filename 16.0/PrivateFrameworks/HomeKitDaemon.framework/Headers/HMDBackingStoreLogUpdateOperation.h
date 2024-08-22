// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBACKINGSTORELOGUPDATEOPERATION_H
#define HMDBACKINGSTORELOGUPDATEOPERATION_H

@class NSArray;


#import "HMDBackingStoreOperation.h"

@interface HMDBackingStoreLogUpdateOperation : HMDBackingStoreOperation

@property (nonatomic) NSInteger maskValue; // ivar: _maskValue
@property (nonatomic) NSInteger setValue; // ivar: _setValue
@property (retain, nonatomic) NSArray *values; // ivar: _values


-(id)initWithRowIDs:(id)arg0 failedPushedTo:(NSUInteger)arg1 ;
-(id)initWithRowIDs:(id)arg0 mask:(NSInteger)arg1 set:(NSInteger)arg2 ;
-(id)initWithRowIDs:(id)arg0 successfullyPushedTo:(NSUInteger)arg1 ;
-(id)mainReturningError;


@end


#endif