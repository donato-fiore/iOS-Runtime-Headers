// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRANSIENTOVERLAYDISMISSALREQUEST_H
#define SBTRANSIENTOVERLAYDISMISSALREQUEST_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "SBTransientOverlayViewController.h"
#import "SBWindowScene.h"

@interface SBTransientOverlayDismissalRequest : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) NSInteger requestType; // ivar: _requestType
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController; // ivar: _viewController
@property (readonly, weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


+(id)dismissalRequestForAllViewControllers;
+(id)dismissalRequestForAllViewControllersInWindowScene:(id)arg0 ;
+(id)dismissalRequestForViewController:(id)arg0 ;
-(id)_copyWithClass:(Class)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif