// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUVIEWCONTROLLERDISMISSALREQUEST_H
#define HUVIEWCONTROLLERDISMISSALREQUEST_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface HUViewControllerDismissalRequest : NSObject

@property (nonatomic) BOOL animated; // ivar: _animated
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


+(id)requestWithViewController:(id)arg0 ;
-(id)initWithViewController:(id)arg0 ;


@end


#endif