// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKOVERLAY_H
#define SKOVERLAY_H

@class NSString;
@protocol ASOOverlay, ASOOverlayDelegate, SKOverlayDelegate, ASOOverlayConfiguration;

#import <Foundation/Foundation.h>

#import "SKOverlayConfiguration.h"

@interface SKOverlay : NSObject <ASOOverlay, ASOOverlayDelegate>



@property (readonly, copy) SKOverlayConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKOverlayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSObject<ASOOverlayConfiguration> *overlayConfiguration;
@property (readonly, weak, nonatomic) NSObject<ASOOverlayDelegate> *overlayDelegate;
@property (readonly) Class superclass;


+(id)unsupportedPlatformErrorWithAPIName:(id)arg0 ;
+(void)dismissOverlayInScene:(id)arg0 ;
-(BOOL)isReadyToPresentInScene:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)tranformToPublicError:(id)arg0 ;
-(void)presentInScene:(id)arg0 ;
-(void)storeOverlay:(id)arg0 didFailToLoadWithError:(id)arg1 ;
-(void)storeOverlay:(id)arg0 didFinishDismissal:(id)arg1 ;
-(void)storeOverlay:(id)arg0 didFinishPresentation:(id)arg1 ;
-(void)storeOverlay:(id)arg0 willStartDismissal:(id)arg1 ;
-(void)storeOverlay:(id)arg0 willStartPresentation:(id)arg1 ;


@end


#endif