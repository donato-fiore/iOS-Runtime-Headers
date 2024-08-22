// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHPCHANGEDIRECTION_H
#define CHPCHANGEDIRECTION_H



#import "EDProcessor.h"

@interface CHPChangeDirection : EDProcessor



-(BOOL)isObjectSupported:(id)arg0 ;
-(id)createNewSeriesCollectionForOrthogonalDirection:(id)arg0 forChart:(id)arg1 ;
-(id)getGraphicPropertiesForSeriesWithIndex:(NSUInteger)arg0 fromCollection:(id)arg1 isVaryColors:(BOOL)arg2 forChart:(id)arg3 ;
-(id)getSeriesCollectionForOrthogonalDirection:(id)arg0 forChart:(id)arg1 ;
-(void)addDataValue:(id)arg0 to:(id)arg1 withIndex:(NSUInteger)arg2 ;
-(void)applyProcessorToObject:(id)arg0 sheet:(id)arg1 ;
-(void)changeBarColumnDirection:(id)arg0 ;
-(void)changeChartDirection:(id)arg0 sheet:(id)arg1 ;
-(void)cleanUpOldSeriesCollection:(id)arg0 ;
-(void)mapSeriesCollection:(id)arg0 from:(id)arg1 forChart:(id)arg2 ;
-(void)mapSeriesValues:(id)arg0 to:(id)arg1 forIndex:(NSUInteger)arg2 byRow:(BOOL)arg3 forChart:(id)arg4 ;


@end


#endif