// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBFLOWOPTIONS_H
#define AMSUIWEBFLOWOPTIONS_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "AMSUIWebLoadingPageModel.h"
#import "AMSUIWebNavigationBarModel.h"

@interface AMSUIWebFlowOptions : NSObject

@property (nonatomic) BOOL animated; // ivar: _animated
@property (retain, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL deferredPresentation; // ivar: _deferredPresentation
@property (nonatomic) BOOL disableTimeout; // ivar: _disableTimeout
@property (retain, nonatomic) AMSUIWebLoadingPageModel *loadingPage; // ivar: _loadingPage
@property (nonatomic) NSInteger modalPresentationStyle; // ivar: _modalPresentationStyle
@property (nonatomic) NSInteger modalTransitionStyle; // ivar: _modalTransitionStyle
@property (nonatomic) CGSize modalWindowSize; // ivar: _modalWindowSize
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // ivar: _navigationBar
@property (retain, nonatomic) NSDictionary *pageData; // ivar: _pageData
@property (nonatomic) BOOL reuseExistingPage; // ivar: _reuseExistingPage
@property (nonatomic) BOOL suppressErrorPage; // ivar: _suppressErrorPage




@end


#endif