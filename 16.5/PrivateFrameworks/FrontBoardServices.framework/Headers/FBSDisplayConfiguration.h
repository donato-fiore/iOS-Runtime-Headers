// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSDISPLAYCONFIGURATION_H
#define FBSDISPLAYCONFIGURATION_H

@class NSSet, CADisplay, NSString;
@protocol BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FBSDisplayMode.h"
#import "FBSDisplayIdentity.h"
#import "FBSDisplayConfiguration.h"

@interface FBSDisplayConfiguration : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding>

 {
    CGRect _nativeBounds;
    FBSDisplayMode *_preferredMode;
    NSSet *_otherModes;
    CADisplay *_immutableCADisplay;
    CADisplay *_caDisplay;
    int _pid;
    BOOL _noEqual_comparable;
}


@property (readonly, nonatomic, getter=isUIKitMainLike) BOOL UIKitMainLike;
@property (readonly, copy, nonatomic) NSSet *availableModes; // ivar: _availableModes
@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic, getter=isCarDisplay) BOOL carDisplay;
@property (readonly, nonatomic, getter=isCarInstrumentsDisplay) BOOL carInstrumentsDisplay;
@property (readonly, nonatomic, getter=isCloningSupported) BOOL cloningSupported; // ivar: _cloningSupported
@property (readonly, nonatomic) NSInteger colorGamut;
@property (readonly, copy, nonatomic) FBSDisplayMode *currentMode; // ivar: _currentMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, copy, nonatomic) NSString *hardwareIdentifier; // ivar: _hardwareIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) CGFloat latency; // ivar: _latency
@property (readonly, nonatomic, getter=isMainDisplay) BOOL mainDisplay;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CGFloat nativeOrientation;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *originatingConfiguration; // ivar: _noEqual_originatingConfiguration
@property (readonly, nonatomic) NSInteger overscanCompensation; // ivar: _overscanCompensation
@property (readonly, nonatomic, getter=isOverscanned) BOOL overscanned; // ivar: _overscanned
@property (readonly, nonatomic) CGSize pixelSize; // ivar: _pixelSize
@property (readonly, copy, nonatomic) FBSDisplayMode *preferredMode;
@property (readonly, nonatomic) CGFloat refreshRate;
@property (readonly, nonatomic) CGPoint renderingCenter;
@property (readonly, nonatomic) CGSize safeOverscanRatio; // ivar: _safeOverscanRatio
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) unsigned int seed; // ivar: _noEqual_seed
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger tags; // ivar: _tags


+(BOOL)supportsSecureCoding;
-(BOOL)expectsSecureRendering;
-(BOOL)isConnected;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHiddenDisplay;
-(BOOL)isMainRootDisplay;
-(BOOL)supportsExtendedColor;
-(BOOL)wantsConnectionDebouncing;
-(CGFloat)orientation;
-(NSInteger)_nativeRotation;
-(NSInteger)type;
-(id)CADisplay;
-(id)_initWithIdentity:(id)arg0 hardwareIdentifier:(id)arg1 name:(id)arg2 deviceName:(id)arg3 seed:(unsigned int)arg4 comparable:(BOOL)arg5 tags:(NSInteger)arg6 currentMode:(id)arg7 preferredMode:(id)arg8 otherModes:(id)arg9 cloningSupported:(BOOL)arg10 overscanned:(BOOL)arg11 overscanCompensation:(NSInteger)arg12 safeOverscanRatio:(struct CGSize )arg13 pixelSize:(struct CGSize )arg14 nativeBounds:(struct CGRect )arg15 bounds:(struct CGRect )arg16 latency:(CGFloat)arg17 originatingConfiguration:(id)arg18 validityCheck:(NSInteger)arg19 ;
-(id)_initWithImmutableDisplay:(id)arg0 originalDisplay:(id)arg1 assertIfInvalid:(BOOL)arg2 ;
-(id)caDisplay;
-(id)copyForSecureRendering;
-(id)copyWithOverrideBounds:(struct CGRect )arg0 ;
-(id)copyWithOverrideMode:(id)arg0 ;
-(id)copyWithOverrideMode:(id)arg0 pixelSize:(struct CGSize )arg1 nativeBounds:(struct CGRect )arg2 ;
-(id)copyWithUniqueIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)immutableCADisplay;
-(id)init;
-(id)initWithCADisplay:(id)arg0 ;
-(id)initWithCADisplay:(id)arg0 isMainDisplay:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)laterConfiguration:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)uniqueID;
-(id)uniqueIdentifier;
-(struct CGPoint )nativeCenter;
-(struct CGRect )_nativeBounds;
-(struct CGRect )referenceBounds;
-(unsigned int)displayID;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif