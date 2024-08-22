// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSDISPLAYINTERSTITIALRENDEROVERLAYDISMISSACTION_H
#define BKSDISPLAYINTERSTITIALRENDEROVERLAYDISMISSACTION_H

@class NSString;
@protocol BSDescriptionProviding, BKSDisplayRenderOverlayDismissAction;

#import <Foundation/Foundation.h>

#import "BKSDisplayRenderOverlayDescriptor.h"

@interface BKSDisplayInterstitialRenderOverlayDismissAction : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDismissAction>

 {
    BKSDisplayRenderOverlayDescriptor *_overlayDescriptor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dismiss;
-(void)dismissWithAnimation:(id)arg0 ;


@end


#endif