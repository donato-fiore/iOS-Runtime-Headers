// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCECELLVALUECOMBINATOR_H
#define TSCECELLVALUECOMBINATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSCECellValueCombinator : NSObject {
    NSMutableArray *_valuesForDimension;
}




-(void)addValuesForDimension:(id)arg0 ;
-(void)enumerateCombinationsWithBlock:(id)arg0 ;


@end


#endif