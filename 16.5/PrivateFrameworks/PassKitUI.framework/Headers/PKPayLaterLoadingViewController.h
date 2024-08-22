// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERLOADINGVIEWCONTROLLER_H
#define PKPAYLATERLOADINGVIEWCONTROLLER_H



#import "PKPayLaterSetupViewController.h"

@interface PKPayLaterLoadingViewController : PKPayLaterSetupViewController {
    CGFloat _minimumDelayNanoSeconds;
}




-(id)additionalAnalyticsDictionary;
-(id)initWithSetupFlowController:(id)arg0 ;
-(void)_updateHeaderSubtitleWithAltTextIfNecessary;
-(void)viewDidLoad;


@end


#endif