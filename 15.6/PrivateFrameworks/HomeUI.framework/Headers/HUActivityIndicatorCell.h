// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUACTIVITYINDICATORCELL_H
#define HUACTIVITYINDICATORCELL_H

@class UITableViewCell, UIActivityIndicatorView, NSString, UIImage, UIImageView;
@protocol HUDisableableCellProtocol, HFStringGenerator;


#import "HUTitleDescriptionContentView.h"

@interface HUActivityIndicatorCell : UITableViewCell <HUDisableableCellProtocol>



@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<HFStringGenerator> *descriptionText;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (readonly) Class superclass;
@property (readonly, nonatomic) HUTitleDescriptionContentView *titleDescriptionView; // ivar: _titleDescriptionView
@property (retain, nonatomic) NSObject<HFStringGenerator> *titleText;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupConstraints;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif