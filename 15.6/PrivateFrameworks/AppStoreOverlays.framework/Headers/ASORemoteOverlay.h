// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASOREMOTEOVERLAY_H
#define ASOREMOTEOVERLAY_H

@class NSString, ASCSignpostSpan;
@protocol ASORemoteAppOverlayDelegate, ASORemoteContextProvider, ASOOverlay, ASOOverlayConfiguration;

#import <Foundation/Foundation.h>

#import "ASOOverlayTransitionContext.h"

@interface ASORemoteOverlay : NSObject <ASORemoteAppOverlayDelegate>



@property (weak, nonatomic) NSObject<ASORemoteContextProvider> *contextProvider; // ivar: _contextProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) ASCSignpostSpan *hostSpan; // ivar: _hostSpan
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isLoaded; // ivar: _isLoaded
@property (retain, nonatomic) NSObject<ASOOverlay> *overlay; // ivar: _overlay
@property (readonly, copy, nonatomic) NSObject<ASOOverlayConfiguration> *overlayConfiguration;
@property (retain, nonatomic) ASOOverlayTransitionContext *presentationTransitionContext; // ivar: _presentationTransitionContext
@property (readonly) Class superclass;


+(id)dismissOverlayOperationWithContextProvider:(id)arg0 ;
+(id)log;
-(id)context;
-(id)initWithOverlay:(id)arg0 contextProvider:(id)arg1 hostSpan:(id)arg2 ;
-(id)presentOverlayOperation;
-(void)finishWithError:(id)arg0 ;
-(void)remoteStoreOverlayDidFailToLoadWithError:(id)arg0 ;
-(void)remoteStoreOverlayDidFinishDismissal:(id)arg0 ;
-(void)remoteStoreOverlayDidFinishPresentation:(id)arg0 ;
-(void)remoteStoreOverlayWillStartDismissing:(id)arg0 executeBlock:(id)arg1 ;
-(void)remoteStoreOverlayWillStartPresenting:(id)arg0 executeBlock:(id)arg1 ;


@end


#endif