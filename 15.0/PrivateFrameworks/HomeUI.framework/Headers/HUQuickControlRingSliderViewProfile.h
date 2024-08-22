// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLRINGSLIDERVIEWPROFILE_H
#define HUQUICKCONTROLRINGSLIDERVIEWPROFILE_H

@class NSString, NSArray, HFNumberValueConstraints;
@protocol HUQuickControlIncrementalConvertibleProfile;


#import "HUQuickControlViewProfile.h"

@interface HUQuickControlRingSliderViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *gradationMarkingValues; // ivar: _gradationMarkingValues
@property (nonatomic) NSUInteger gradationMarkingViewStyle; // ivar: _gradationMarkingViewStyle
@property (nonatomic) NSUInteger handleViewStyle; // ivar: _handleViewStyle
@property (nonatomic) BOOL hasOffState; // ivar: _hasOffState
@property (nonatomic) BOOL hasSecondaryValue; // ivar: _hasSecondaryValue
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isHandleViewVisible; // ivar: _isHandleViewVisible
@property (retain, nonatomic) HFNumberValueConstraints *primaryValueConstraints; // ivar: _primaryValueConstraints
@property (retain, nonatomic) HFNumberValueConstraints *secondaryValueConstraints; // ivar: _secondaryValueConstraints
@property (nonatomic) BOOL shouldShowSupplementaryValue; // ivar: _shouldShowSupplementaryValue
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif