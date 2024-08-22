// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNLAZYARRAYOPERATORFLATMAP_H
#define _CNLAZYARRAYOPERATORFLATMAP_H

@class CNLazyArrayOperator;


#import "CNQueue.h"

@interface _CNLazyArrayOperatorFlatMap : CNLazyArrayOperator {
    id *_transform;
    CNQueue *_buffer;
}




-(id)initWithInput:(id)arg0 transform:(id)arg1 ;
-(id)nextObject;


@end


#endif