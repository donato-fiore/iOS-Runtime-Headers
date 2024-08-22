// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBDYNAMICVIEWCONTROLLER_H
#define AMSUIWEBDYNAMICVIEWCONTROLLER_H

@class NSString;
@protocol AMSUIWebPagePresenter, AMSUIDynamicViewControllerDelegate;


#import "AMSUIDynamicViewController.h"
#import "AMSUIWebClientContext.h"

@interface AMSUIWebDynamicViewController : AMSUIDynamicViewController <AMSUIWebPagePresenter, AMSUIDynamicViewControllerDelegate>



@property (retain, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 URL:(id)arg1 ;
-(void)dynamicViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didFinishWithPurchaseResult:(id)arg1 error:(id)arg2 ;
-(void)willPresentPageModel:(id)arg0 appearance:(id)arg1 ;


@end


#endif