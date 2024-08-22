// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISIMPLEFIXEDDIGITPASSCODEENTRYFIELD_H
#define SBUISIMPLEFIXEDDIGITPASSCODEENTRYFIELD_H

@class UIView, NSMutableArray;


#import "SBUINumericPasscodeEntryFieldBase.h"

@interface SBUISimpleFixedDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {
    UIView *_characterIndicatorsContainerView;
    NSMutableArray *_characterIndicators;
    UIView *_springView;
    UIView *_springViewParent;
}




-(BOOL)_hasAnyCharacters;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg0 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg0 numberOfDigits:(NSUInteger)arg1 ;
-(struct CGRect )_entryFieldBoundsWithXOffset:(CGFloat)arg0 ;
-(struct CGSize )_viewSize;
-(struct UIEdgeInsets )_entryFieldPaddingOutsideRing;
-(void)_appendString:(id)arg0 ;
-(void)_autofillForBiometricAuthenticationWithCompletion:(id)arg0 ;
-(void)_deleteLastCharacter;
-(void)_resetForFailedPasscode:(BOOL)arg0 ;
-(void)reset;


@end


#endif