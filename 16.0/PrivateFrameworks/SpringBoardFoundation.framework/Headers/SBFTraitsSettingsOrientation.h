// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFTRAITSSETTINGSORIENTATION_H
#define SBFTRAITSSETTINGSORIENTATION_H

@class NSString;
@protocol NSCopying, NSMutableCopying, BSDescriptionProviding, BSInterfaceOrientationMapResolving><BSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "SBFTraitsArbitrationDeviceOrientationInputs.h"

@interface SBFTraitsSettingsOrientation : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) NSObject<BSInterfaceOrientationMapResolving><BSXPCSecureCoding> *orientationMapResolver; // ivar: _orientationMapResolver
@property (retain, nonatomic) SBFTraitsArbitrationDeviceOrientationInputs *rawOrientationInputs; // ivar: _rawOrientationInputs
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFTraitsArbitrationDeviceOrientationInputs *validatedOrientationInputs; // ivar: _validatedOrientationInputs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOrientationSettings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithOrientation:(NSInteger)arg0 ;
-(id)initWithOrientation:(NSInteger)arg0 orientationMapResolver:(id)arg1 validatedOrientationInputs:(id)arg2 rawOrientationInputs:(id)arg3 ;
-(id)initWithOrientationSettings:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif