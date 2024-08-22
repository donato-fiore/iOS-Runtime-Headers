// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMTTRLOADINGVIEWCONTROLLER_H
#define PMTTRLOADINGVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, UILabel;



@interface PMTTRLoadingViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (retain, nonatomic) UILabel *radarCollectionInfoLabel; // ivar: _radarCollectionInfoLabel


-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;


@end


#endif