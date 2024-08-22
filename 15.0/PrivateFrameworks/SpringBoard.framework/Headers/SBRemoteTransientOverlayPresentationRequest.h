// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBREMOTETRANSIENTOVERLAYPRESENTATIONREQUEST_H
#define SBREMOTETRANSIENTOVERLAYPRESENTATIONREQUEST_H

@class SBSRemoteAlertPresentationTarget;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBTransientOverlayViewController.h"

@interface SBRemoteTransientOverlayPresentationRequest : NSObject <NSCopying>



@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (nonatomic) BOOL isScreenshotMarkup; // ivar: _isScreenshotMarkup
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget; // ivar: _presentationTarget
@property (nonatomic) BOOL shouldDismissSiri; // ivar: _shouldDismissSiri
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController; // ivar: _viewController


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithViewController:(id)arg0 ;


@end


#endif