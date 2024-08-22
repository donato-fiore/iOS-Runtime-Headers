// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTTINTINGFILTERINGMATERIALSETTINGS_H
#define MTTINTINGFILTERINGMATERIALSETTINGS_H

@class NSString, NSArray, NSDictionary;
@protocol MTMaterialFilteringInternal, MTUserInfoProviding;


#import "MTTintingMaterialSettings.h"

@interface MTTintingFilteringMaterialSettings : MTTintingMaterialSettings <MTMaterialFilteringInternal, MTUserInfoProviding>

 {
    *CGImage _variableBlurInputMask;
}


@property (readonly, nonatomic, getter=isAverageColorEnabled) BOOL averageColorEnabled; // ivar: _averageColorEnabled
@property (readonly, nonatomic) CGFloat backdropScale; // ivar: _backdropScale
@property (readonly, nonatomic, getter=isBlurAtEnd) BOOL blurAtEnd; // ivar: _blurAtEnd
@property (readonly, copy, nonatomic) NSString *blurInputQuality; // ivar: _blurInputQuality
@property (readonly, nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (readonly, nonatomic) CGFloat brightness; // ivar: _brightness
@property (readonly, nonatomic) CAColorMatrix colorMatrix; // ivar: _colorMatrix
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat luminanceAmount; // ivar: _luminanceAmount
@property (readonly, copy, nonatomic) NSArray *luminanceValues; // ivar: _luminanceValues
@property (readonly, nonatomic) CGFloat saturation; // ivar: _saturation
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, copy, nonatomic) NSString *variableBlurInputMaskName; // ivar: _variableBlurInputMaskName
@property (readonly, nonatomic) CGFloat zoom; // ivar: _zoom


-(id)initWithMaterialDescription:(id)arg0 andDescendantDescriptions:(id)arg1 bundle:(id)arg2 ;
-(struct CGImage *)variableBlurInputMask;
-(void)_processMaterialFilteringDescription:(id)arg0 defaultingToIdentity:(BOOL)arg1 bundle:(id)arg2 ;
-(void)_processUserInfoDescription:(id)arg0 ;
-(void)dealloc;


@end


#endif