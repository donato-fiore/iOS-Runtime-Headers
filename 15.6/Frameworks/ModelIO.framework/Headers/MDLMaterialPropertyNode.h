// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLMATERIALPROPERTYNODE_H
#define MDLMATERIALPROPERTYNODE_H

@class NSMutableArray, NSArray, NSString;
@protocol MDLNamed;

#import <Foundation/Foundation.h>


@interface MDLMaterialPropertyNode : NSObject <MDLNamed>

 {
    NSMutableArray *_inputNodes;
}


@property (copy, nonatomic) id *evaluationFunction; // ivar: _evaluationFunction
@property (readonly, nonatomic) NSArray *inputs; // ivar: _inputs
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *outputs; // ivar: _outputs


-(id)initWithInputs:(id)arg0 outputs:(id)arg1 evaluationFunction:(id)arg2 ;


@end


#endif