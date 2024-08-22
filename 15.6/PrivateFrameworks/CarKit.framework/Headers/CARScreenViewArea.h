// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARSCREENVIEWAREA_H
#define CARSCREENVIEWAREA_H


#import <Foundation/Foundation.h>


@interface CARScreenViewArea : NSObject

@property (nonatomic) BOOL displaysTransitionControl; // ivar: _displaysTransitionControl
@property (readonly, nonatomic) CGRect safeFrame; // ivar: _safeFrame
@property (nonatomic) NSUInteger statusBarEdge; // ivar: _statusBarEdge
@property (nonatomic) BOOL supportsFocusTransfer; // ivar: _supportsFocusTransfer
@property (nonatomic) BOOL supportsUIOutsideSafeArea; // ivar: _supportsUIOutsideSafeArea
@property (nonatomic) CGRect unadjustedSafeFrame; // ivar: _unadjustedSafeFrame
@property (readonly, nonatomic) CGRect visibleFrame; // ivar: _visibleFrame


+(struct NSEdgeInsets )insetsForOEMUIWithDisplaySize:(struct CGSize )arg0 safeFrame:(struct CGRect )arg1 viewAreaFrame:(struct CGRect )arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToViewArea:(id)arg0 ;
-(id)description;
-(id)initWithPropertySupplier:(id)arg0 ;
// -(id)initWithPropertySupplier:(id)arg0 additionalInsets:(unk)arg1  ;
// -(id)initWithPropertySupplier:(id)arg0 additionalInsets:(unk)arg1 viewAreaDictionary:(struct NSEdgeInsets )arg2 displayPixelSize:(id)arg3 wantsCornerMasks:(struct CGSize )arg4  ;


@end


#endif