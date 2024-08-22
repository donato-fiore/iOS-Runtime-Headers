// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMUTABLETRANSIENTOVERLAYPRESENTATIONREQUEST_H
#define SBMUTABLETRANSIENTOVERLAYPRESENTATIONREQUEST_H

@class BSProcessHandle;


#import "SBTransientOverlayPresentationRequest.h"
#import "SBTransientOverlayViewController.h"
#import "SBWindowScene.h"

@interface SBMutableTransientOverlayPresentationRequest : SBTransientOverlayPresentationRequest

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (copy, nonatomic) id *completionHandler;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;
@property (nonatomic) BOOL shouldDismissSiri;
@property (retain, nonatomic) SBTransientOverlayViewController *viewController;
@property (weak, nonatomic) SBWindowScene *windowScene;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif