// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBERRORVIEWCONTROLLER_H
#define AMSUIWEBERRORVIEWCONTROLLER_H

@class NSString;
@protocol AMSUIWebPagePresenter;


#import "AMSUICommonViewController.h"
#import "AMSUIWebAppearance.h"
#import "AMSUIWebClientContext.h"
#import "AMSUIErrorView.h"
#import "AMSUIWebErrorPageModel.h"

@interface AMSUIWebErrorViewController : AMSUICommonViewController <AMSUIWebPagePresenter>



@property (retain, nonatomic) AMSUIWebAppearance *appearance; // ivar: _appearance
@property (retain, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AMSUIErrorView *errorView; // ivar: _errorView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSUIWebErrorPageModel *model; // ivar: _model
@property (nonatomic) BOOL showingCancelButton; // ivar: _showingCancelButton
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 ;
-(void)_applyAppearance;
-(void)_showCancelButtonIfNeeded;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willPresentPageModel:(id)arg0 appearance:(id)arg1 ;


@end


#endif