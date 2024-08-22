// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESEDITSCRIPTRANGED_H
#define ESEDITSCRIPTRANGED_H

@class NSString;


#import "ESEditScript.h"
#import "ESAtomRanged.h"

@interface ESEditScriptRanged : ESEditScript {
    NSInteger _options;
    ESAtomRanged *_currentScriptAtom;
}


@property (readonly, weak, nonatomic) NSString *stringA;
@property (readonly, weak, nonatomic) NSString *stringB;


+(id)editScriptForSmallestSingleEditFromString:(id)arg0 toString:(id)arg1 ;
+(id)editScriptForSmallestSingleEditFromString:(id)arg0 toString:(id)arg1 chunkSize:(NSInteger)arg2 ;
+(id)editScriptFromString:(id)arg0 toString:(id)arg1 ;
+(id)editScriptFromString:(id)arg0 toString:(id)arg1 chunkSize:(NSInteger)arg2 orderAtomsAscending:(BOOL)arg3 operationPrecedence:(NSInteger)arg4 options:(NSInteger)arg5 ;
-(id)applyToString:(id)arg0 ;
-(id)initWithOperationPrecedence:(NSInteger)arg0 dataClass:(Class)arg1 chunkSize:(NSInteger)arg2 stringA:(id)arg3 stringB:(id)arg4 orderAtomsAscending:(BOOL)arg5 options:(NSInteger)arg6 ;
-(void)addToCurrentScriptAtomEditOperation:(NSInteger)arg0 editIndex:(NSUInteger)arg1 newText:(id)arg2 indexInArrayB:(NSUInteger)arg3 ;
-(void)computeSmallestSingleEdit;
-(void)finalizeCurrentScriptAtom;
-(void)initializeCurrentScriptAtom;
-(void)removeAnyOverlapBetweenIndexOfFirstDifference:(*NSInteger)arg0 andReverseIndexOfLastDifference:(*NSInteger)arg1 shouldShortenFirstDifference:(BOOL)arg2 ;


@end


#endif