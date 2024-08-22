// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNDSPGRAPHINTERPRETER_H
#define SNDSPGRAPHINTERPRETER_H


#import <Foundation/Foundation.h>


@interface SNDSPGraphInterpreter : NSObject {
    unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> _interpreter;
}




-(id)init;


@end


#endif