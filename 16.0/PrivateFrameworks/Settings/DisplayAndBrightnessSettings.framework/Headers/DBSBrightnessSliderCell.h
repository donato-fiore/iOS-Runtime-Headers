// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSBRIGHTNESSSLIDERCELL_H
#define DBSBRIGHTNESSSLIDERCELL_H

@class PSSliderTableCell, NSMutableArray, UILabel, UIView;



@interface DBSBrightnessSliderCell : PSSliderTableCell

@property (retain) NSMutableArray *controlAndWarningLayoutConstraints; // ivar: _controlAndWarningLayoutConstraints
@property (retain) UILabel *referenceWarningLabel; // ivar: _referenceWarningLabel
@property (retain) UIView *warningContainerView; // ivar: _warningContainerView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureLayout;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif