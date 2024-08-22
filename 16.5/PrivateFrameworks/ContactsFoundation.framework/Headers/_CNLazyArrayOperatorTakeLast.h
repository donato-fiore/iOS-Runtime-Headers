// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNLAZYARRAYOPERATORTAKELAST_H
#define _CNLAZYARRAYOPERATORTAKELAST_H

@class CNLazyArrayOperator;


#import "CNQueue.h"

@interface _CNLazyArrayOperatorTakeLast : CNLazyArrayOperator {
    CNQueue *_buffer;
    BOOL _haveFilledBuffer;
}




-(id)initWithInput:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)nextObject;
-(void)fillBuffer;


@end


#endif