// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREVIEWINAPPRATINGBUTTONVIEWCONTROLLER_H
#define SKUIREVIEWINAPPRATINGBUTTONVIEWCONTROLLER_H

@class UIViewController, UILabel, NSString;



@interface SKUIReviewInAppRatingButtonViewController : UIViewController

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSUInteger style; // ivar: _style
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleString; // ivar: _titleString


-(id)initWithTitle:(id)arg0 style:(NSUInteger)arg1 ;
-(void)viewDidLoad;


@end


#endif