// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCENROLLMENTTABLEVIEWTEXTFIELDCELL_H
#define DMCENROLLMENTTABLEVIEWTEXTFIELDCELL_H

@class UITableViewCell, NSString;
@protocol DMCEnrollmentTableViewCellDataSource;



@interface DMCEnrollmentTableViewTextFieldCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)cellHeight;
-(CGFloat)estimatedCellHeight;
-(id)_placeHolderStringForType:(NSUInteger)arg0 ;
-(id)cell;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)textField;
-(void)layoutSubviews;


@end


#endif