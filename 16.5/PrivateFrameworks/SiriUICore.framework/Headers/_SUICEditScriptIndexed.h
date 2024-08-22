// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SUICEDITSCRIPTINDEXED_H
#define _SUICEDITSCRIPTINDEXED_H

@class SUICEditScript;


#import "_SUICAtomIndexed.h"

@interface _SUICEditScriptIndexed : SUICEditScript {
    _SUICAtomIndexed *_currentScriptAtom;
}




+(id)editScriptFromArray:(id)arg0 toArray:(id)arg1 ;
+(id)editScriptFromArray:(id)arg0 toArray:(id)arg1 orderAtomsAscending:(BOOL)arg2 operationPrecedence:(NSInteger)arg3 ;
-(id)applyToArray:(id)arg0 ;
-(id)initWithOperationPrecedence:(NSInteger)arg0 dataClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3 orderAtomsAscending:(BOOL)arg4 ;
-(void)addToCurrentScriptAtomEditOperation:(NSInteger)arg0 editIndex:(NSUInteger)arg1 newText:(id)arg2 indexInArrayB:(NSUInteger)arg3 ;
-(void)finalizeCurrentScriptAtom;
-(void)initializeCurrentScriptAtom;


@end


#endif