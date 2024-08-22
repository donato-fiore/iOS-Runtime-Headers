// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBAPPOVERLAYACTION_H
#define AMSUIWEBAPPOVERLAYACTION_H

@class NSString, SKOverlay, AMSPromise;
@protocol SKOverlayDelegate;


#import "AMSUIWebAction.h"

@interface AMSUIWebAppOverlayAction : AMSUIWebAction <SKOverlayDelegate>



@property (retain, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (retain, nonatomic) NSString *campaignToken; // ivar: _campaignToken
@property (retain, nonatomic) NSString *customProductPageIdentifier; // ivar: _customProductPageIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismiss; // ivar: _dismiss
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *latestReleaseID; // ivar: _latestReleaseID
@property (retain, nonatomic) SKOverlay *presentationOverlay; // ivar: _presentationOverlay
@property (retain, nonatomic) AMSPromise *presentationPromise; // ivar: _presentationPromise
@property (retain, nonatomic) NSString *providerToken; // ivar: _providerToken
@property (readonly) Class superclass;


+(id)_determineSceneWithContext:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;
-(void)_finishPromiseWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)storeOverlay:(id)arg0 didFailToLoadWithError:(id)arg1 ;
-(void)storeOverlay:(id)arg0 didFinishDismissal:(id)arg1 ;
-(void)storeOverlay:(id)arg0 didFinishPresentation:(id)arg1 ;


@end


#endif