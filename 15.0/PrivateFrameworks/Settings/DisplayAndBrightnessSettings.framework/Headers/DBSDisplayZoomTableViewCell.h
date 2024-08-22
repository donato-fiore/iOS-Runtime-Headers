// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DBSDISPLAYZOOMTABLEVIEWCELL_H
#define DBSDISPLAYZOOMTABLEVIEWCELL_H

@class UITableViewCell, NSString;
@protocol DBSDisplayZoomOptionViewDelegate, DBSDisplayZoomTableViewCellDelegate;


#import "DBSDisplayZoomOptionView.h"

@interface DBSDisplayZoomTableViewCell : UITableViewCell <DBSDisplayZoomOptionViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DBSDisplayZoomTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBSDisplayZoomOptionView *standardOptionView; // ivar: _standardOptionView
@property (readonly) Class superclass;
@property (retain, nonatomic) DBSDisplayZoomOptionView *zoomedOptionView; // ivar: _zoomedOptionView


+(NSInteger)cellStyle;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configureView;
-(void)startAnimation;
-(void)stopAnimation;
-(void)updateSelectedViewWithOption:(NSUInteger)arg0 ;
-(void)userDidTapOnDisplayZoomOptionView:(id)arg0 ;


@end


#endif