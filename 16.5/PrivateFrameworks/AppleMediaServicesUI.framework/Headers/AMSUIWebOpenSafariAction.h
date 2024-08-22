// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBOPENSAFARIACTION_H
#define AMSUIWEBOPENSAFARIACTION_H

@class NSURL, NSString, NSDictionary, UIViewController;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"
#import "AMSUIWebClientContext.h"
#import "AMSUIWebSafariViewController.h"

@interface AMSUIWebOpenSafariAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSString *callbackScheme; // ivar: _callbackScheme
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (weak, nonatomic) AMSUIWebSafariViewController *safariViewController; // ivar: _safariViewController
@property (readonly) Class superclass;


+(id)resultFromURL:(id)arg0 error:(id)arg1 ;
-(BOOL)_presentViewContoller:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;
-(void)_safariDataUpdate:(id)arg0 ;


@end


#endif