// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBDYNAMICPAGEMODEL_H
#define AMSUIWEBDYNAMICPAGEMODEL_H

@class NSURL, ACAccount, NSString, NSDictionary, AMSMetricsEvent;
@protocol AMSUIWebPageProvider;

#import <Foundation/Foundation.h>

#import "AMSUIWebClientContext.h"
#import "AMSUIWebNavigationBarModel.h"

@interface AMSUIWebDynamicPageModel : NSObject <AMSUIWebPageProvider>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSDictionary *clientOptions; // ivar: _clientOptions
@property (retain, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSMetricsEvent *impressionEvent; // ivar: _impressionEvent
@property (retain, nonatomic) NSDictionary *metricsOverlay; // ivar: _metricsOverlay
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // ivar: _navigationBar
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize windowSize; // ivar: _windowSize


-(id)createViewControllerForContainer:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)loadPage;


@end


#endif