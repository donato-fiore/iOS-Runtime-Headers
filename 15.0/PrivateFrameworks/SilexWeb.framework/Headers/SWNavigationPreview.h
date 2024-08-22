// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWNAVIGATIONPREVIEW_H
#define SWNAVIGATIONPREVIEW_H

@class NSURLRequest, UIViewController;
@protocol SWNavigationHandler;

#import <Foundation/Foundation.h>


@interface SWNavigationPreview : NSObject

@property (readonly, nonatomic) NSObject<SWNavigationHandler> *navigationHandler; // ivar: _navigationHandler
@property (readonly, nonatomic) NSURLRequest *request; // ivar: _request
@property (readonly, weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 navigationHandler:(id)arg1 URLRequest:(id)arg2 ;


@end


#endif