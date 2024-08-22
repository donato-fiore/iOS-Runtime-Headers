// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBCAMERAREADERPAGEMODEL_H
#define AMSUIWEBCAMERAREADERPAGEMODEL_H

@class NSString, AMSMetricsEvent, UIViewController;
@protocol AMSUIWebPageProvider, AMSUIWebActionRunnable;

#import <Foundation/Foundation.h>

#import "AMSUIWebClientContext.h"
#import "AMSUIWebNavigationBarModel.h"

@interface AMSUIWebCameraReaderPageModel : NSObject <AMSUIWebPageProvider>



@property (retain, nonatomic) NSObject<AMSUIWebActionRunnable> *action; // ivar: _action
@property (nonatomic) BOOL allowsCameraToggle; // ivar: _allowsCameraToggle
@property (nonatomic) BOOL allowsTextEntry; // ivar: _allowsTextEntry
@property (readonly, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSObject<AMSUIWebActionRunnable> *bottomLinkAction; // ivar: _bottomLinkAction
@property (retain, nonatomic) NSString *bottomLinkLabel; // ivar: _bottomLinkLabel
@property (retain, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen; // ivar: _fullScreen
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSMetricsEvent *impressionEvent; // ivar: _impressionEvent
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // ivar: _navigationBar
@property (nonatomic) NSInteger pageType; // ivar: _pageType
@property (weak, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (retain, nonatomic) NSString *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) NSString *secondaryLabel; // ivar: _secondaryLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *textFieldPlaceholder; // ivar: _textFieldPlaceholder
@property (readonly, nonatomic) CGSize windowSize; // ivar: _windowSize


-(id)createViewControllerForContainer:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)loadPage;


@end


#endif