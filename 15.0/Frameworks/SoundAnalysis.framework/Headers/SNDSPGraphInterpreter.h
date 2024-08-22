// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNDSPGRAPHINTERPRETER_H
#define SNDSPGRAPHINTERPRETER_H


#import <Foundation/Foundation.h>


@interface SNDSPGraphInterpreter : NSObject {
    unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> _interpreter;
}




+(id)compileFile:(id)arg0 withSubstitutions:(id)arg1 includingPaths:(id)arg2 ;
+(id)compileText:(id)arg0 withSubstitutions:(id)arg1 includingPaths:(id)arg2 ;
+(struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> )stringMapFromStringDictionary:(id)arg0 ;
+(struct vector<std::string, std::allocator<std::string>> )stringVectorFromStringArray:(id)arg0 ;
-(id)compileFile:(id)arg0 withSubstitutions:(id)arg1 includingPaths:(id)arg2 ;
-(id)compileText:(id)arg0 withSubstitutions:(id)arg1 includingPaths:(id)arg2 ;
-(id)init;


@end


#endif