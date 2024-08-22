// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNLAZYARRAYOPERATOR_H
#define _CNLAZYARRAYOPERATOR_H

@protocol _CNLazyArrayOperation;

#import <Foundation/Foundation.h>


@interface _CNLazyArrayOperator : NSObject <_CNLazyArrayOperation>



@property (readonly) NSObject<_CNLazyArrayOperation> *input; // ivar: _input


-(id)initWithInput:(id)arg0 ;
-(id)nextObject;


@end


#endif