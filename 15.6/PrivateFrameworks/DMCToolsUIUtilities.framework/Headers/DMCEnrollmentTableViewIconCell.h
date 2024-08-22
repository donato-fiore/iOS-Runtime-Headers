// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCENROLLMENTTABLEVIEWICONCELL_H
#define DMCENROLLMENTTABLEVIEWICONCELL_H

@class UITableViewCell, NSString, NSArray, UIStackView;
@protocol DMCEnrollmentTableViewCellDataSource;



@interface DMCEnrollmentTableViewIconCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *icons; // ivar: _icons
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


+(CGFloat)iconLength;
-(CGFloat)cellHeight;
-(CGFloat)estimatedCellHeight;
-(id)_createImageViewWithImage:(id)arg0 ;
-(id)_createStackViewWithViews:(id)arg0 ;
-(id)_systemImageWithName:(id)arg0 ;
-(id)cell;
-(id)initWithIconImages:(id)arg0 ;
-(id)initWithIconNames:(id)arg0 ;
-(void)_addConstraintsForStackView:(id)arg0 ;
-(void)_updateImageViewsWithCount:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)setIconImages:(id)arg0 ;
-(void)setIconNames:(id)arg0 ;


@end


#endif