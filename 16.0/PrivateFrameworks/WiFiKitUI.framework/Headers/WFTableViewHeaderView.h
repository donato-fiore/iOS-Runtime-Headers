// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTABLEVIEWHEADERVIEW_H
#define WFTABLEVIEWHEADERVIEW_H

@class UITableViewHeaderFooterView, UIActivityIndicatorView, UILabel, NSString;



@interface WFTableViewHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (nonatomic) BOOL animating; // ivar: _animating
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_configureContents;


@end


#endif