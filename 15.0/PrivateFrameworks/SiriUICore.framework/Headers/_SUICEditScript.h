// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SUICEDITSCRIPT_H
#define _SUICEDITSCRIPT_H

@class NSArray, NSMutableArray;
@protocol _SUICEditScriptData;

#import <Foundation/Foundation.h>

#import "_SUICIntArray2D.h"

@interface _SUICEditScript : NSObject {
    BOOL _orderAtomsAscending;
    _SUICIntArray2D *_distanceMatrix;
    NSInteger _currentOperation;
    id<_SUICEditScriptData> *_itemAData;
    id<_SUICEditScriptData> *_itemBData;
}


@property (copy, nonatomic) NSArray *operationPrecedenceArray; // ivar: _operationPrecedenceArray
@property (retain, nonatomic) NSMutableArray *script; // ivar: _script


-(id)initWithOperationPrecedence:(NSInteger)arg0 orderAtomsAscending:(BOOL)arg1 ;
-(id)operationPrecedenceArrayFromOperationPrecedence:(NSInteger)arg0 ;
-(void)addToCurrentScriptAtomEditOperation:(NSInteger)arg0 editIndex:(NSUInteger)arg1 newText:(id)arg2 indexInArrayB:(NSUInteger)arg3 ;
-(void)computeDistanceMatrix;
-(void)computeEditsFromMatrix;
-(void)finalizeCurrentScriptAtom;
-(void)initializeCurrentScriptAtom;


@end


#endif