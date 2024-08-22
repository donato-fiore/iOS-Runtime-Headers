// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHADDWIDGETDETAILSHEETWIDGETDESCRIPTIONVIEW_H
#define SBHADDWIDGETDETAILSHEETWIDGETDESCRIPTIONVIEW_H

@class UIView, UILabel;



@interface SBHAddWidgetDetailSheetWidgetDescriptionView : UIView

@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_createConstraints;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif