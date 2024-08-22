// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNLAZYARRAYOPERATORDISTINCT_H
#define _CNLAZYARRAYOPERATORDISTINCT_H

@class CNLazyArrayOperator, NSMutableSet;



@interface _CNLazyArrayOperatorDistinct : CNLazyArrayOperator {
    NSMutableSet *_seenValues;
}




-(id)initWithInput:(id)arg0 ;
-(id)nextObject;


@end


#endif