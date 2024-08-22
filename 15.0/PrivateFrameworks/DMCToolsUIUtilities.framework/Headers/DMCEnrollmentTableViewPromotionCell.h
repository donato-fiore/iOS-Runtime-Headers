// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCENROLLMENTTABLEVIEWPROMOTIONCELL_H
#define DMCENROLLMENTTABLEVIEWPROMOTIONCELL_H

@class UITableViewCell, NSString;
@protocol DMCEnrollmentTableViewCellDataSource;



@interface DMCEnrollmentTableViewPromotionCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)cellHeight;
-(CGFloat)estimatedCellHeight;
-(CGFloat)gapToNextSection;
-(id)cell;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 ;


@end


#endif