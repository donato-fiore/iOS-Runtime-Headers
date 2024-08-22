// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDSUPPLEMENTARYCONTROLKEYTRANSFORMATION_H
#define UIKEYBOARDSUPPLEMENTARYCONTROLKEYTRANSFORMATION_H

@class NSString;
@protocol UIKeyboardKeyplaneTransformation;

#import <Foundation/Foundation.h>


@interface UIKeyboardSupplementaryControlKeyTransformation : NSObject <UIKeyboardKeyplaneTransformation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)_derivedLeadingControlKeyWidthForRow:(NSUInteger)arg0 keysForRow:(id)arg1 context:(id)arg2 ;
+(CGFloat)_derivedTrailingControlKeyWidthForRow:(NSUInteger)arg0 orientation:(NSInteger)arg1 ;
+(CGFloat)_keyPitchForKeyplane:(id)arg0 ;
+(CGFloat)_keyplanePaddingForOrientation:(NSInteger)arg0 ;
+(CGFloat)_keyplanePaddingForOrientation:(NSInteger)arg0 row:(NSUInteger)arg1 ;
+(CGFloat)_totalKeyPaddingForOrientation:(NSInteger)arg0 ;
+(NSUInteger)_numberOfKeysInRow:(id)arg0 firstKey:(*id)arg1 lastKey:(*id)arg2 ;
+(id)_cachedUndoOrRedoKeyForKeyplane:(id)arg0 ;
+(id)_supplementaryControlKeySetForOrientation:(NSInteger)arg0 context:(id)arg1 ;
+(id)_supplementaryControlKeyWithName:(id)arg0 context:(id)arg1 ;
+(id)_supplementaryScriptSwitchKeyWithContext:(id)arg0 ;
+(id)_supplementaryShiftKeysWithContext:(id)arg0 ;
+(id)cachedControlKeySetsForTransformationContext:(id)arg0 ;
+(id)transformKeyplane:(id)arg0 withTransformationContext:(id)arg1 ;
+(id)transformationIdentifier;
+(struct CGSize )layoutScaleFactorForContext:(id)arg0 ;
+(void)adjustHorizontalPaddingForKeyplane:(id)arg0 withTransformationContext:(id)arg1 ;
+(void)transformKeysForFiveRowKeyplane:(id)arg0 withTransformationContext:(id)arg1 ;
+(void)transformKeysForFourRowKeyplane:(id)arg0 withTransformationContext:(id)arg1 ;
+(void)transformKeysForHandwritingKeyplane:(id)arg0 withTransformationContext:(id)arg1 ;
+(void)transformLastRowKeysForKeyplane:(id)arg0 row:(NSUInteger)arg1 withTransformationContext:(id)arg2 ;


@end


#endif