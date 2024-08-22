// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIMATERIALTREATMENT_H
#define PBUIMATERIALTREATMENT_H

@class NSString, NSBundle;
@protocol CALayerDelegate, CABackdropLayerDelegate, PBUIImageTreatment, NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface PBUIMaterialTreatment : NSObject <CALayerDelegate, CABackdropLayerDelegate, PBUIImageTreatment, NSSecureCoding, BSDescriptionProviding>



@property (copy, nonatomic) id *backdropScaleAdjustment; // ivar: _backdropScaleAdjustment
@property (readonly, nonatomic) BOOL canInterpolateToLowerScales;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSBundle *recipeBundle; // ivar: _recipeBundle
@property (copy, nonatomic) NSString *recipeName; // ivar: _recipeName
@property (readonly, nonatomic) CGFloat resolvedBackdropScale;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesStaticBackdropScaleFactor; // ivar: _usesStaticBackdropScaleFactor
@property (nonatomic) CGFloat weighting; // ivar: _weighting


+(BOOL)supportsSecureCoding;
-(BOOL)commitToRenderingTree:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecipeName:(id)arg0 fromBundle:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;


@end


#endif