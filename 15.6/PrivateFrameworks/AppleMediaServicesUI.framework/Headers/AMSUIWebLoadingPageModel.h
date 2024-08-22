// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBLOADINGPAGEMODEL_H
#define AMSUIWEBLOADINGPAGEMODEL_H

@class NSString, AMSMetricsEvent;
@protocol AMSUIWebPageProvider;

#import <Foundation/Foundation.h>

#import "AMSUIWebClientContext.h"
#import "AMSUIWebNavigationBarModel.h"

@interface AMSUIWebLoadingPageModel : NSObject <AMSUIWebPageProvider>



@property (nonatomic) BOOL animateFadeIn; // ivar: _animateFadeIn
@property (readonly, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableDelay; // ivar: _disableDelay
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSMetricsEvent *impressionEvent; // ivar: _impressionEvent
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // ivar: _navigationBar
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize windowSize; // ivar: _windowSize


-(id)createViewControllerForContainer:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)loadPage;


@end


#endif