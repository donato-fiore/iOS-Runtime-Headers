// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSPINNERNAVIGATIONBARITEM_H
#define TSSPINNERNAVIGATIONBARITEM_H

@class UIBarButtonItem, UIActivityIndicatorView;



@interface TSSpinnerNavigationBarItem : UIBarButtonItem

@property (retain) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator


-(id)init;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif