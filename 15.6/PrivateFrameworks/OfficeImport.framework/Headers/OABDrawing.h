// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OABDRAWING_H
#define OABDRAWING_H


#import <Foundation/Foundation.h>


@interface OABDrawing : NSObject



+(id)readBackgroundPropertiesFromDrawing:(id)arg0 state:(id)arg1 ;
+(id)readDrawablesFromDrawing:(id)arg0 state:(id)arg1 ;
+(unsigned int)addShapeIdForObject:(id)arg0 ;
+(void)applyRulesFromSolverContainer:(id)arg0 state:(id)arg1 ;


@end


#endif