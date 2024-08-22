// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREVIEWINAPPRATINGCONTROLVIEWCONTROLLER_H
#define SKUIREVIEWINAPPRATINGCONTROLVIEWCONTROLLER_H

@class UIViewController;


#import "SKUIStarRatingControl.h"

@interface SKUIReviewInAppRatingControlViewController : UIViewController

@property (retain, nonatomic) SKUIStarRatingControl *ratingControl; // ivar: _ratingControl


-(id)_repeatedTemplateImageForImage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)commonInit;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif