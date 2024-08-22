// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBROUTEPAGEMODEL_H
#define AMSUIWEBROUTEPAGEMODEL_H

@class NSURL, NSString, NSDictionary, AMSMetricsEvent;
@protocol AMSUIWebPageProvider;

#import <Foundation/Foundation.h>

#import "AMSUIWebClientContext.h"
#import "AMSUIWebNavigationBarModel.h"
#import "AMSUIWebWrapperViewController.h"

@interface AMSUIWebRoutePageModel : NSObject <AMSUIWebPageProvider>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) NSDictionary *clientOptions; // ivar: _clientOptions
@property (readonly, weak, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSMetricsEvent *impressionEvent; // ivar: _impressionEvent
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // ivar: _navigationBar
@property (readonly) Class superclass;
@property (retain, nonatomic) AMSUIWebWrapperViewController *viewController; // ivar: _viewController
@property (readonly, nonatomic) CGSize windowSize; // ivar: _windowSize


-(id)_webPageViewController;
-(id)createViewControllerForContainer:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)loadPage;


@end


#endif