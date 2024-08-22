// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHTENSOR_H
#define MPSGRAPHTENSOR_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPSGraph.h"
#import "MPSGraphBlock.h"
#import "MPSGraphOperation.h"

@interface MPSGraphTensor : NSObject <NSCopying>

 {
    MPSGraph *_graph;
    MPSGraphBlock *_parentBlock;
}


@property (readonly, nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, weak, nonatomic) MPSGraphOperation *operation; // ivar: _operation
@property (readonly, copy, nonatomic) NSArray *shape; // ivar: _shape
@property (readonly, nonatomic) Value value; // ivar: _value


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initTensorWithOperation:(id)arg0 value:(struct Value )arg1 graph:(id)arg2 ;
-(id)initTensorWithOperation:(id)arg0 value:(struct Value )arg1 graph:(id)arg2 name:(id)arg3 ;
-(id)initTensorWithOperation:(id)arg0 value:(struct Value )arg1 graph:(id)arg2 parentBlock:(id)arg3 name:(id)arg4 ;
-(id)initTensorWithValue:(struct Value )arg0 graph:(id)arg1 ;


@end


#endif