// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSDISPLAYZOOMTABLEVIEWCELL_H
#define DBSDISPLAYZOOMTABLEVIEWCELL_H

@class UITableViewCell, NSString;
@protocol DBSDisplayZoomOptionViewDelegate, DBSDisplayZoomTableViewCellDelegate;


#import "DBSDisplayZoomOptionView.h"

@interface DBSDisplayZoomTableViewCell : UITableViewCell <DBSDisplayZoomOptionViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DBSDisplayZoomTableViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) DBSDisplayZoomOptionView *denseOptionView; // ivar: _denseOptionView
@property (retain, nonatomic) DBSDisplayZoomOptionView *denserOptionView; // ivar: _denserOptionView
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBSDisplayZoomOptionView *standardOptionView; // ivar: _standardOptionView
@property (readonly) Class superclass;
@property (retain, nonatomic) DBSDisplayZoomOptionView *zoomedOptionView; // ivar: _zoomedOptionView


+(NSInteger)cellStyle;
-(id)_optionViewsByDensity;
-(void)_configureForLegacy;
-(void)_configureForThreeDisplayOptionsWithLeadingView:(id)arg0 middleView:(id)arg1 trailingView:(id)arg2 ;
-(void)_configureForTwoDisplayOptionsWithLeadingView:(id)arg0 trailingView:(id)arg1 ;
-(void)configureView;
-(void)startAnimation;
-(void)stopAnimation;
-(void)updateSelectedViewWithOption:(NSUInteger)arg0 ;
-(void)userDidTapOnDisplayZoomOptionView:(id)arg0 ;


@end


#endif