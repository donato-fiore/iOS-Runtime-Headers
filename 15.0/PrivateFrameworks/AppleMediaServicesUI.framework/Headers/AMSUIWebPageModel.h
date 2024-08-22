// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBPAGEMODEL_H
#define AMSUIWEBPAGEMODEL_H

@class NSString, AMSMetricsEvent;
@protocol AMSUIWebPageProvider;

#import <Foundation/Foundation.h>

#import "AMSUIWebClientContext.h"
#import "AMSUIWebNavigationBarModel.h"

@interface AMSUIWebPageModel : NSObject <AMSUIWebPageProvider>



@property (readonly, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreBottomSafeArea; // ivar: _ignoreBottomSafeArea
@property (nonatomic) BOOL ignoreTopSafeArea; // ivar: _ignoreTopSafeArea
@property (readonly, nonatomic) AMSMetricsEvent *impressionEvent; // ivar: _impressionEvent
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // ivar: _navigationBar
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize windowSize; // ivar: _windowSize


-(id)createViewController;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;


@end


#endif