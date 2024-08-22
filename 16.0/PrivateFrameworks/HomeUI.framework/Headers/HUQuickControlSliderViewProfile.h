// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLSLIDERVIEWPROFILE_H
#define HUQUICKCONTROLSLIDERVIEWPROFILE_H

@class NSString, HFNumberValueConstraints;
@protocol HUQuickControlIncrementalConvertibleProfile;


#import "HUQuickControlViewProfile.h"

@interface HUQuickControlSliderViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasOffState; // ivar: _hasOffState
@property (nonatomic) BOOL hasSecondaryValue; // ivar: _hasSecondaryValue
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger interactionFidelity; // ivar: _interactionFidelity
@property (nonatomic) NSUInteger preferredFillSection; // ivar: _preferredFillSection
@property (retain, nonatomic) HFNumberValueConstraints *primaryValueConstraints; // ivar: _primaryValueConstraints
@property (retain, nonatomic) HFNumberValueConstraints *secondaryValueConstraints; // ivar: _secondaryValueConstraints
@property (nonatomic) BOOL showGrabbers; // ivar: _showGrabbers
@property (readonly) Class superclass;


-(BOOL)supportsTouchContinuation;
-(CGFloat)gestureDragCoefficient;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif