// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDINTERACTIVECHARTTABLEVIEWCELL_H
#define WDINTERACTIVECHARTTABLEVIEWCELL_H

@class HKViewTableViewCell, NSString;
@protocol WDDisplayTypeDetailViewControllerChartCellType;



@interface WDInteractiveChartTableViewCell : HKViewTableViewCell <WDDisplayTypeDetailViewControllerChartCellType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger marginMode; // ivar: _marginMode
@property (readonly) Class superclass;


+(id)defaultReuseIdentifier;
-(void)setPrimaryValueSource:(id)arg0 secondaryValueSource:(id)arg1 chartSource:(id)arg2 ;
-(void)setTimeScope:(NSInteger)arg0 ;


@end


#endif