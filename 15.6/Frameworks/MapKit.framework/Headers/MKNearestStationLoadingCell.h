// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKNEARESTSTATIONLOADINGCELL_H
#define MKNEARESTSTATIONLOADINGCELL_H

@class UITableViewCell, UIActivityIndicatorView;



@interface MKNearestStationLoadingCell : UITableViewCell {
    UIActivityIndicatorView *_activityIndicatorView;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif