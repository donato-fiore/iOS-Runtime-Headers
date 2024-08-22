// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBHISTOGRAMBUILDER_H
#define CBHISTOGRAMBUILDER_H

@class NSMutableArray, NSArray;
@protocol CBHistogram;

#import <Foundation/Foundation.h>


@interface CBHistogramBuilder : NSObject <CBHistogram>



@property (readonly) NSMutableArray *bins; // ivar: _bins
@property (readonly) NSArray *edges; // ivar: _edges


-(id)initWithEdges:(id)arg0 ;
-(void)dealloc;
-(void)enumerateBinsUsingBlock:(id)arg0 ;
-(void)pushNumber:(CGFloat)arg0 ;
-(void)pushNumberWeighted:(CGFloat)arg0 withWeight:(CGFloat)arg1 ;
-(void)reset;


@end


#endif