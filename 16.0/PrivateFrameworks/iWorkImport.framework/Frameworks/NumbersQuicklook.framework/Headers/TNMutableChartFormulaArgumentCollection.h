// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNMUTABLECHARTFORMULAARGUMENTCOLLECTION_H
#define TNMUTABLECHARTFORMULAARGUMENTCOLLECTION_H



#import "TNChartFormulaArgumentCollection.h"

@interface TNMutableChartFormulaArgumentCollection : TNChartFormulaArgumentCollection



-(id)initWithArray:(id)arg0 ;
-(void)addElement:(id)arg0 ;
-(void)insertElement:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeElementAtIndex:(NSUInteger)arg0 ;
-(void)removeLastElement;
-(void)replaceElementAtIndex:(NSUInteger)arg0 withElement:(id)arg1 ;


@end


#endif