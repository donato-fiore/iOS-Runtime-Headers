// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBWWALLPAPERVIEWCONTROLLERASSERTION_H
#define _SBWWALLPAPERVIEWCONTROLLERASSERTION_H

@class NSString;
@protocol BSInvalidatable, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBWWallpaperViewController.h"

@interface _SBWWallpaperViewControllerAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (readonly) NSInteger type; // ivar: _type
@property (readonly, weak, nonatomic) SBWWallpaperViewController *wallpaperViewController; // ivar: _wallpaperViewController


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithWallpaperViewController:(id)arg0 type:(NSInteger)arg1 reason:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;


@end


#endif