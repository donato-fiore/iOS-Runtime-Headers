// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MONTREALNNGENERATENODE_H
#define MONTREALNNGENERATENODE_H


#import <Foundation/Foundation.h>

#import "MontrealNNModelNode.h"

@interface MontrealNNGenerateNode : NSObject

@property (readonly) MontrealNNModelNode *node; // ivar: _node
@property (readonly) ? parameters; // ivar: _parameters
@property (readonly) NSUInteger weightDataFormat; // ivar: _weightDataFormat
@property (readonly) NSUInteger weightIter; // ivar: _weightIter


-(NSUInteger)generateNode:(id)arg0 node:(id)arg1 weightIter:(NSUInteger)arg2 inputs:(id)arg3 outputs:(id)arg4 ;
-(id)dataFromWeights:(*float)arg0 length:(NSUInteger)arg1 ;
-(id)initWithParameters:(struct ? *)arg0 weightDataFormat:(NSUInteger)arg1 ;
-(void)setInput:(id)arg0 inputIndex:(NSInteger)arg1 ;
-(void)setInputs:(id)arg0 ;


@end


#endif