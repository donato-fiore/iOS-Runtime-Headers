// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCENROLLMENTTABLEVIEWTITLECELL_H
#define DMCENROLLMENTTABLEVIEWTITLECELL_H

@class UITableViewCell, NSString, UILabel;
@protocol DMCEnrollmentTableViewCellDataSource;



@interface DMCEnrollmentTableViewTitleCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(CGFloat)cellHeight;
-(CGFloat)estimatedCellHeight;
-(id)_fontForTitle;
-(id)cell;
-(id)initWithTitle:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif