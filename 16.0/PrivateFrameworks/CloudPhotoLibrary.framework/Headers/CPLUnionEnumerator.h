// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLUNIONENUMERATOR_H
#define CPLUNIONENUMERATOR_H

@class NSMutableArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface CPLUnionEnumerator : NSObject <NSFastEnumeration>

 {
    id _generatorArray;
    NSMutableArray *_remainingGenerators;
    NSUInteger _currentGeneratorIndex;
    id<NSFastEnumeration> *_currentEnumerator;
    *void _currentEnumeratorMutationsPtr;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithEnumeratorGenerators:(id)arg0 ;
-(id)initWithEnumerators:(id)arg0 ;
-(void)_prepareNextEnumeratorWithState:(struct ? *)arg0 ;


@end


#endif