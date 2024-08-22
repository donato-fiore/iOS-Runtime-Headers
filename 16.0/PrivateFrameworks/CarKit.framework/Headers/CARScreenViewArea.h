// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CARSCREENVIEWAREA_H
#define CARSCREENVIEWAREA_H

@protocol CARDisplayInfoProviding;

#import <Foundation/Foundation.h>


@interface CARScreenViewArea : NSObject

@property (nonatomic) NSEdgeInsets additionalInsets; // ivar: _additionalInsets
@property (weak, nonatomic) NSObject<CARDisplayInfoProviding> *displayInfoProvider; // ivar: _displayInfoProvider
@property (nonatomic) BOOL displaysTransitionControl; // ivar: _displaysTransitionControl
@property (readonly, nonatomic) CGRect safeFrame; // ivar: _safeFrame
@property (nonatomic) BOOL shouldApplyDisplayInsets; // ivar: _shouldApplyDisplayInsets
@property (nonatomic) NSUInteger statusBarEdge; // ivar: _statusBarEdge
@property (nonatomic) BOOL supportsFocusTransfer; // ivar: _supportsFocusTransfer
@property (nonatomic) BOOL supportsUIOutsideSafeArea; // ivar: _supportsUIOutsideSafeArea
@property (nonatomic) CGRect unadjustedSafeFrame; // ivar: _unadjustedSafeFrame
@property (readonly, nonatomic) CGRect visibleFrame; // ivar: _visibleFrame


+(struct NSEdgeInsets )insetsForOEMUIWithDisplaySize:(struct CGSize )arg0 originInDisplay:(struct CGPoint )arg1 safeFrame:(struct CGRect )arg2 viewAreaFrame:(struct CGRect )arg3 ;
+(struct NSEdgeInsets )insetsForOEMUIWithDisplaySize:(struct CGSize )arg0 safeFrame:(struct CGRect )arg1 viewAreaFrame:(struct CGRect )arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToViewArea:(id)arg0 ;
-(id)description;
// -(id)initWithPropertySupplier:(id)arg0 additionalInsets:(unk)arg1 displayInfoProvider:(struct NSEdgeInsets )arg2  ;
// -(id)initWithPropertySupplier:(id)arg0 additionalInsets:(unk)arg1 viewAreaDictionary:(struct NSEdgeInsets )arg2 wantsCornerMasks:(id)arg3 displayInfoProvider:(BOOL)arg4  ;
// -(id)initWithPropertySupplier:(id)arg0 displayInfoProvider:(unk)arg1  ;
-(void)_updateEffectiveSafeFrame;


@end


#endif