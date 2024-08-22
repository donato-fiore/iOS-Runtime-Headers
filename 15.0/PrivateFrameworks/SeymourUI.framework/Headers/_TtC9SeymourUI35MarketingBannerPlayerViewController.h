// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI35MARKETINGBANNERPLAYERVIEWCONTROLLER_H
#define _TTC9SEYMOURUI35MARKETINGBANNERPLAYERVIEWCONTROLLER_H

@class AVPlayerViewController;



@interface _TtC9SeymourUI35MarketingBannerPlayerViewController : AVPlayerViewController {
    ? eventHub;
    ? identifier;
    ? metricPage;
    ? videoID;
}


@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPlayerLayerView:(id)arg0 ;
-(void)playerFinished:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif