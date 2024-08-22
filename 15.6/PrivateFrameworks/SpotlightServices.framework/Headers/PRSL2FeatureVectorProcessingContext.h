// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRSL2FEATUREVECTORPROCESSINGCONTEXT_H
#define PRSL2FEATUREVECTORPROCESSINGCONTEXT_H


#import <Foundation/Foundation.h>


@interface PRSL2FeatureVectorProcessingContext : NSObject

@property (nonatomic) NSUInteger expandedFeatureCount; // ivar: _expandedFeatureCount
@property (nonatomic) *unsigned short expandedFeatureExecutionOrder; // ivar: _expandedFeatureExecutionOrder


-(id)initWithFeatureOrder:(id)arg0 withInflation:(NSUInteger)arg1 withInflatedIndexToSize:(id)arg2 ;
-(void)dealloc;


@end


#endif