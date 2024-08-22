// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI27ACTIVITYINDICATORDETAILVIEW_H
#define _TTC18HEALTHEXPERIENCEUI27ACTIVITYINDICATORDETAILVIEW_H

@class UIView, UIActivityIndicatorView, UITextView, UILabel, UIStackView;



@interface _TtC18HealthExperienceUI27ActivityIndicatorDetailView : UIView {
    ? action;
}


@property (nonatomic, weak) UIActivityIndicatorView *activityIndicatorView; // ivar: activityIndicatorView
@property (nonatomic, weak) UITextView *detailTextView; // ivar: detailTextView
@property (nonatomic, weak) UILabel *titleLabel; // ivar: titleLabel
@property (nonatomic, weak) UIStackView *titleStackView; // ivar: titleStackView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;


@end


#endif