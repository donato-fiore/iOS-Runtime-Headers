// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBREMOTETRANSIENTOVERLAYDISMISSALREQUEST_H
#define SBREMOTETRANSIENTOVERLAYDISMISSALREQUEST_H


#import <Foundation/Foundation.h>

#import "SBTransientOverlayViewController.h"

@interface SBRemoteTransientOverlayDismissalRequest : NSObject

@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) BOOL shouldInvalidatePresentation; // ivar: _shouldInvalidatePresentation
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController; // ivar: _viewController


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithViewController:(id)arg0 ;


@end


#endif