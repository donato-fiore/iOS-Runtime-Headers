// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCENROLLMENTTABLEVIEWPROMOTIONCELL_H
#define DMCENROLLMENTTABLEVIEWPROMOTIONCELL_H

@class UITableViewCell, NSString, UIImage;
@protocol DMCEnrollmentTableViewCellDataSource;



@interface DMCEnrollmentTableViewPromotionCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(CGFloat)cellHeight;
-(CGFloat)estimatedCellHeight;
-(CGFloat)gapToNextSection;
-(id)cell;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 ;
-(void)_setupContentConfigurationWithIcon:(id)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif