// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSDISPLAYCONFIGURATIONBUILDER_H
#define FBSDISPLAYCONFIGURATIONBUILDER_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>

#import "FBSDisplayConfiguration.h"
#import "FBSDisplayMode.h"

@interface FBSDisplayConfigurationBuilder : NSObject {
    FBSDisplayConfiguration *_configuration;
    os_unfair_lock_s _lock;
    NSString *_lock_uniqueIdentifier;
    FBSDisplayMode *_lock_currentMode;
    FBSDisplayMode *_lock_preferredMode;
    NSSet *_lock_otherModes;
    CGSize _lock_pixelSize;
    CGRect _lock_nativeBounds;
    CGRect _lock_bounds;
    BOOL _lock_geometrySet;
    BOOL _lock_secure;
    BOOL _lock_mainLike;
    BOOL _lock_noCloning;
    NSInteger _lock_overscanCompensation;
    CGSize _lock_safeOverscanRatio;
    BOOL _lock_overscanned;
    BOOL _lock_overscanSet;
}




-(id)_lock_sanitizedModeForMode:(id)arg0 ;
-(id)buildConfigurationWithError:(*id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)setCloningNotSupported;
-(void)setCurrentMode:(id)arg0 preferredMode:(id)arg1 otherModes:(id)arg2 ;
-(void)setExpectsSecureRendering;
-(void)setOverscanned:(BOOL)arg0 compensation:(NSInteger)arg1 safeRatio:(struct CGSize )arg2 ;
-(void)setPixelSize:(struct CGSize )arg0 nativeBounds:(struct CGRect )arg1 bounds:(struct CGRect )arg2 ;
-(void)setUIKitMainLike;
-(void)setUniqueIdentifier:(id)arg0 ;


@end


#endif