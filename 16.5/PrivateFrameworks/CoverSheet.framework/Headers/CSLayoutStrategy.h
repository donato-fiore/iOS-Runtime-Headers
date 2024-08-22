// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLAYOUTSTRATEGY_H
#define CSLAYOUTSTRATEGY_H

@protocol CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating;

#import <Foundation/Foundation.h>


@interface CSLayoutStrategy : NSObject

@property (weak, nonatomic) NSObject<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating> *persistentLayout; // ivar: _persistentLayout


-(CGFloat)_customListWidthForPage:(id)arg0 startingBounds:(struct CGRect )arg1 ;
-(CGFloat)_listInsetXForPage:(id)arg0 ;
-(NSUInteger)_listLayoutForPage:(id)arg0 ;
-(NSUInteger)_listWidthStrategyForPage:(id)arg0 ;
-(struct CGRect )suggestedFrameForDateTimeViewInScreenCoordinates:(struct CGRect )arg0 forceCenteredX:(BOOL)arg1 ;
-(struct CGRect )suggestedFrameForListForPage:(id)arg0 bounds:(struct CGRect )arg1 ;
-(struct CGRect )suggestedVisibleFrameForSleeveInScreenCoordinates:(struct CGRect )arg0 forceCenteredX:(BOOL)arg1 ;
-(struct UIEdgeInsets )suggestedContentInsetsForListForPage:(id)arg0 ;


@end


#endif