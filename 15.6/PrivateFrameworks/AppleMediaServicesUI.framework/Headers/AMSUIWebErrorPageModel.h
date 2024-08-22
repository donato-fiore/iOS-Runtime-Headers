// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBERRORPAGEMODEL_H
#define AMSUIWEBERRORPAGEMODEL_H

@class NSString, NSBundle, AMSMetricsEvent;
@protocol AMSUIWebPageProvider, AMSUIWebActionRunnable;

#import <Foundation/Foundation.h>

#import "AMSUIWebClientContext.h"
#import "AMSUIWebNavigationBarModel.h"

@interface AMSUIWebErrorPageModel : NSObject <AMSUIWebPageProvider>



@property (retain, nonatomic) NSObject<AMSUIWebActionRunnable> *action; // ivar: _action
@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (retain, nonatomic) NSString *actionButtonTitle; // ivar: _actionButtonTitle
@property (readonly, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (retain, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (nonatomic) BOOL errorMessageInternalOnly; // ivar: _errorMessageInternalOnly
@property (retain, nonatomic) NSString *errorTitle; // ivar: _errorTitle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSMetricsEvent *impressionEvent; // ivar: _impressionEvent
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // ivar: _navigationBar
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize windowSize; // ivar: _windowSize


+(id)_messageFromError:(id)arg0 ;
-(id)createViewControllerForContainer:(id)arg0 ;
-(id)initWithError:(id)arg0 context:(id)arg1 actionBlock:(id)arg2 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)loadPage;


@end


#endif