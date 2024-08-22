// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSCOREINTERPRETERBYTECODE_H
#define PPSCOREINTERPRETERBYTECODE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PPScoreInterpreterBytecode : NSObject {
    unique_ptr<std::vector<PPSubscoreIdentifier>, std::default_delete<std::vector<PPSubscoreIdentifier>>> _subscoreComputeOrder;
    NSArray *_bytecodeDataBySubscoreTypeAndIndex;
    NSArray *_bytecodeRetainedObjectSlots;
    unique_ptr<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>, std::default_delete<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>>> _subscoreDependencies;
}


@property (readonly, nonatomic) *__CFBitVector arrayScoreInputsNeeded; // ivar: _arrayScoreInputsNeeded
@property (readonly, nonatomic) *__CFBitVector objectScoreInputsNeeded; // ivar: _objectScoreInputsNeeded
@property (readonly, nonatomic) *__CFBitVector scalarScoreInputsNeeded; // ivar: _scalarScoreInputsNeeded


+(id)bytecodeFromAsset:(id)arg0 ;
+(id)bytecodeFromFactorName:(id)arg0 namespaceName:(id)arg1 ;
+(id)scoreInterpreterParseRootFromAsset:(id)arg0 scalarSubscoreCount:(*NSUInteger)arg1 arraySubscoreCount:(*NSUInteger)arg2 objectSubscoreCount:(*NSUInteger)arg3 ;
-(id)init;
-(id)initWithParseRoot:(id)arg0 scalarSubscoreCount:(NSUInteger)arg1 arraySubscoreCount:(NSUInteger)arg2 objectSubscoreCount:(NSUInteger)arg3 ;
-(void)dealloc;


@end


#endif