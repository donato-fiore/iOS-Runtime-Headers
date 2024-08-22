// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBSAFARIPAGEMODEL_H
#define AMSUIWEBSAFARIPAGEMODEL_H

@class NSURL, NSString, NSDictionary, AMSMetricsEvent;
@protocol AMSUIWebPageProvider;


#import "AMSUIWebModel.h"
#import "AMSUIWebClientContext.h"
#import "AMSUIWebLoadingPageModel.h"
#import "AMSUIWebNavigationBarModel.h"

@interface AMSUIWebSafariPageModel : AMSUIWebModel <AMSUIWebPageProvider>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSString *callbackScheme; // ivar: _callbackScheme
@property (readonly, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideToolBar; // ivar: _hideToolBar
@property (readonly, nonatomic) AMSMetricsEvent *impressionEvent; // ivar: _impressionEvent
@property (retain, nonatomic) AMSUIWebLoadingPageModel *loadingModel; // ivar: _loadingModel
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // ivar: _navigationBar
@property (nonatomic) BOOL showShareButton; // ivar: _showShareButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize windowSize; // ivar: _windowSize


-(id)createViewControllerForContainer:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)loadPage;


@end


#endif