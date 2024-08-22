// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNCHARTFORMULATYPEENUMERATOR_H
#define TNCHARTFORMULATYPEENUMERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TNChartFormulaTypeEnumerator : NSObject {
    NSArray *_keys;
    NSUInteger _count;
    NSUInteger _index;
}




-(NSUInteger)nextFormulaType;
-(id)initWithChartFormulaStorage:(id)arg0 ;


@end


#endif