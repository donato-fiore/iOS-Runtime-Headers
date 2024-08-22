// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPROFILETITLEPAGEORGANIZATIONCELL_H
#define MCPROFILETITLEPAGEORGANIZATIONCELL_H

@class UITableViewCell, NSString, UILabel, UIStackView;
@protocol MCUIScrollAnimationResponder;



@interface MCProfileTitlePageOrganizationCell : UITableViewCell <MCUIScrollAnimationResponder>



@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (retain, nonatomic) UILabel *appleIDLabel; // ivar: _appleIDLabel
@property (retain, nonatomic) UILabel *appleIDValueLabel; // ivar: _appleIDValueLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (retain, nonatomic) UILabel *organizationLabel; // ivar: _organizationLabel
@property (copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (retain, nonatomic) UILabel *organizationValueLabel; // ivar: _organizationValueLabel
@property (readonly) Class superclass;


-(id)_createHorizontalStackWithViews:(id)arg0 ;
-(id)_createLabelLabel;
-(id)_createValueLabel;
-(id)_createVerticalStackWithViews:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateConstraintWithStack:(id)arg0 ;
-(void)updateProgressWithTranslationDistance:(CGFloat)arg0 referenceDistance:(CGFloat)arg1 isScrolling:(BOOL)arg2 ;


@end


#endif