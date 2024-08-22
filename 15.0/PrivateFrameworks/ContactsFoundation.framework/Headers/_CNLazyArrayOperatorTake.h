// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNLAZYARRAYOPERATORTAKE_H
#define _CNLAZYARRAYOPERATORTAKE_H

@class CNLazyArrayOperator;



@interface _CNLazyArrayOperatorTake : CNLazyArrayOperator {
    NSUInteger _remainingTakeCount;
}




-(id)initWithInput:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)nextObject;


@end


#endif