// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFTRAITSARBITRATIONINPUTS_H
#define SBFTRAITSARBITRATIONINPUTS_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBFTraitsArbitrationDeviceOrientationInputs.h"
#import "SBFTraitsArbitrationInterfaceIdiomInputs.h"
#import "SBFTraitsArbitrationKeyboardInputs.h"

@interface SBFTraitsArbitrationInputs : NSObject <NSCopying, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) SBFTraitsArbitrationDeviceOrientationInputs *deviceOrientationInputs; // ivar: _deviceOrientationInputs
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) SBFTraitsArbitrationInterfaceIdiomInputs *interfaceIdiomInputs; // ivar: _interfaceIdiomInputs
@property (readonly, copy, nonatomic) SBFTraitsArbitrationKeyboardInputs *keyboardInputs; // ivar: _keyboardInputs
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithInterfaceIdiomInputs:(id)arg0 deviceOrientationInputs:(id)arg1 keyboardInputs:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif