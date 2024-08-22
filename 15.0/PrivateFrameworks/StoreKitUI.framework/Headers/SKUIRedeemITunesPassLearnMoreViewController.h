// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREDEEMITUNESPASSLEARNMOREVIEWCONTROLLER_H
#define SKUIREDEEMITUNESPASSLEARNMOREVIEWCONTROLLER_H

@class NSURL, NSString;
@protocol SKUIPassbookLoaderDelegate;


#import "SKUIRedeemStepViewController.h"
#import "SKUIRedeemITunesPassLearnMoreView.h"
#import "SKUIPassbookLoader.h"

@interface SKUIRedeemITunesPassLearnMoreViewController : SKUIRedeemStepViewController <SKUIPassbookLoaderDelegate>

 {
    BOOL _didTapAddPassbookButton;
    SKUIRedeemITunesPassLearnMoreView *_learnMoreView;
    SKUIPassbookLoader *_passbookLoader;
    NSURL *_passbookURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_existingPass;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)presentationViewControllerForPassbookLoader:(id)arg0 ;
-(void)_didLoadPassbookURLString:(id)arg0 ;
-(void)_doneButtonAction:(id)arg0 ;
-(void)_loadPassbookPass;
-(void)_loadPassbookURL;
-(void)_passButtonAction:(id)arg0 ;
-(void)_showErrorDialog;
-(void)dealloc;
-(void)loadView;
-(void)passbookLoaderDidFinish:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif