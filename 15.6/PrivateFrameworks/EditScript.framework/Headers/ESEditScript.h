// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESEDITSCRIPT_H
#define ESEDITSCRIPT_H

@class NSArray, NSMutableArray;
@protocol ESEditScriptData;

#import <Foundation/Foundation.h>

#import "ESIntArray2D.h"

@interface ESEditScript : NSObject {
    BOOL _orderAtomsAscending;
    ESIntArray2D *_distanceMatrix;
    NSInteger _currentOperation;
    id<ESEditScriptData> *_itemAData;
    id<ESEditScriptData> *_itemBData;
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