// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNLAZYARRAYOPERATORSKIPLAST_H
#define _CNLAZYARRAYOPERATORSKIPLAST_H

@class CNLazyArrayOperator;


#import "CNQueue.h"

@interface _CNLazyArrayOperatorSkipLast : CNLazyArrayOperator {
    CNQueue *_buffer;
    NSUInteger _limit;
    BOOL _haveFilledBuffer;
}




-(BOOL)fillBuffer;
-(id)initWithInput:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)nextObject;


@end


#endif