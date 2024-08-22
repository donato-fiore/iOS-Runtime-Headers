// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCVIEWSERVICEERRORVIEWCONTROLLER_H
#define DOCVIEWSERVICEERRORVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol DOCViewServiceErrorViewDelegate, DOCViewServiceErrorViewControllerDelegate;


#import "DOCViewServiceErrorView.h"

@interface DOCViewServiceErrorViewController : UIViewController <DOCViewServiceErrorViewDelegate>

 {
    DOCViewServiceErrorView *_errorView;
}


@property (weak) NSObject<DOCViewServiceErrorViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *errorSubtitle;
@property (retain, nonatomic) NSString *errorTitle;


-(void)didTapTryAgainInErrorView:(id)arg0 ;
-(void)loadView;


@end


#endif