// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUICOMMONERRORVIEWCONTROLLER_H
#define AMSUICOMMONERRORVIEWCONTROLLER_H

@class NSError, NSString;
@protocol AMSBagProtocol;


#import "AMSUICommonViewController.h"
#import "AMSUIErrorView.h"

@interface AMSUICommonErrorViewController : AMSUICommonViewController

@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (copy, nonatomic) id *cancelAction; // ivar: _cancelAction
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) AMSUIErrorView *errorView; // ivar: _errorView
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (copy, nonatomic) id *retryAction; // ivar: _retryAction


// -(id)initWithError:(id)arg0 logKey:(id)arg1 bag:(id)arg2 retryAction:(id)arg3 cancelAction:(unk)arg4  ;
-(id)navigationItem;
-(void)_cancelButtonAction;
-(void)_setup;
-(void)_setupNavigationItem;
-(void)_showCancelButton;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif