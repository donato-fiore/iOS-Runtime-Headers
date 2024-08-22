// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNLAZYARRAYOPERATORSKIP_H
#define _CNLAZYARRAYOPERATORSKIP_H

@class CNLazyArrayOperator;



@interface _CNLazyArrayOperatorSkip : CNLazyArrayOperator {
    NSUInteger _remainingSkipCount;
}




-(id)initWithInput:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)nextObject;


@end


#endif