// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBREMOTETRANSIENTOVERLAYPRESENTATIONREQUEST_H
#define SBREMOTETRANSIENTOVERLAYPRESENTATIONREQUEST_H

@class SBSRemoteAlertPresentationTarget;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBTransientOverlayViewController.h"
#import "SBWindowScene.h"

@interface SBRemoteTransientOverlayPresentationRequest : NSObject <NSCopying>



@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (nonatomic) BOOL isScreenshotMarkup; // ivar: _isScreenshotMarkup
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget; // ivar: _presentationTarget
@property (nonatomic) BOOL shouldDismissPresentedBanners; // ivar: _shouldDismissPresentedBanners
@property (nonatomic) BOOL shouldDismissSiri; // ivar: _shouldDismissSiri
@property (nonatomic) BOOL shouldPresentEmbeddedInTargetScene; // ivar: _shouldPresentEmbeddedInTargetScene
@property (nonatomic) BOOL shouldStashPictureInPictureIfNeeded; // ivar: _shouldStashPictureInPictureIfNeeded
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController; // ivar: _viewController
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithViewController:(id)arg0 ;


@end


#endif