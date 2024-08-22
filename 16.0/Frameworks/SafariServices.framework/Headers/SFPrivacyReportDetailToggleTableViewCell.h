// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPRIVACYREPORTDETAILTOGGLETABLEVIEWCELL_H
#define SFPRIVACYREPORTDETAILTOGGLETABLEVIEWCELL_H

@class UITableViewCell, UISegmentedControl, UILabel;
@protocol SFPrivacyReportDetailToggleTableViewCellDelegate;



@interface SFPrivacyReportDetailToggleTableViewCell : UITableViewCell {
    UISegmentedControl *_segmentedControl;
    UILabel *_titleLabel;
}


@property (weak, nonatomic) NSObject<SFPrivacyReportDetailToggleTableViewCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger detailType; // ivar: _detailType
@property (nonatomic) BOOL useCurrentWebsiteHeader; // ivar: _useCurrentWebsiteHeader


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addSegmentForDetailType:(NSInteger)arg0 ;
-(void)_selectDetailType:(NSInteger)arg0 ;
-(void)_updateTitle;


@end


#endif