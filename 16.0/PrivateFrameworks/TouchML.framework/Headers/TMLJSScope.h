// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLJSSCOPE_H
#define TMLJSSCOPE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface TMLJSScope : NSObject

@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSMutableSet *vars; // ivar: _vars


-(void)addVar:(id)arg0 ;


@end


#endif