// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSDISPLAYRENDEROVERLAY_H
#define BKSDISPLAYRENDEROVERLAY_H

@class NSString, CADisplay;
@protocol BSDescriptionProviding, BKSDisplayRenderOverlayDescribing, BKSDisplayRenderOverlayDismissAction;

#import <Foundation/Foundation.h>

#import "BKSDisplayRenderOverlayDescriptor.h"
#import "BKSDisplayProgressIndicatorProperties.h"

@interface BKSDisplayRenderOverlay : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDescribing, BKSDisplayRenderOverlayDismissAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_descriptor) BKSDisplayRenderOverlayDescriptor *descriptor; // ivar: _descriptor
@property (readonly, retain, nonatomic) CADisplay *display;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger interfaceOrientation;
@property (readonly, nonatomic, getter=isInterstitial) BOOL interstitial;
@property (readonly, nonatomic) BOOL lockBacklight;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;
@property (readonly, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property (readonly) Class superclass;


+(id)dismissActions;
+(id)existingOverlayForDisplay:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dismiss;
-(void)dismissWithAnimation:(id)arg0 ;
-(void)freeze;
-(void)present;


@end


#endif