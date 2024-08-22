// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBWWALLPAPERVIEWCONTROLLERSCALEASSERTION_H
#define _SBWWALLPAPERVIEWCONTROLLERSCALEASSERTION_H

@class NSString;
@protocol SBWWallpaperScaleInvalidating, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBWWallpaperViewController.h"

@interface _SBWWallpaperViewControllerScaleAssertion : NSObject <SBWWallpaperScaleInvalidating, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) SBWWallpaperViewController *wallpaperViewController; // ivar: _wallpaperViewController


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithWallpaperViewController:(id)arg0 scale:(CGFloat)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithAnimationFactory:(id)arg0 ;


@end


#endif