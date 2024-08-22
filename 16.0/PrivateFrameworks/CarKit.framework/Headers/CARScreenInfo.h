// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CARSCREENINFO_H
#define CARSCREENINFO_H

@class NSString, NSURL, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "CARScreenViewArea.h"
#import "CARDisplayInfo.h"

@interface CARScreenInfo : NSObject

@property (retain, nonatomic) CARScreenViewArea *adjacentViewArea; // ivar: _adjacentViewArea
@property (readonly, nonatomic) NSUInteger availableInteractionModels;
@property (retain, nonatomic) CARScreenViewArea *currentViewArea; // ivar: _currentViewArea
@property (nonatomic) NSUInteger currentViewAreaTransitionControlType; // ivar: _currentViewAreaTransitionControlType
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL initialFocusOwner; // ivar: _initialFocusOwner
@property (readonly, nonatomic) NSURL *initialURL; // ivar: _initialURL
@property (readonly, nonatomic, getter=isLimitedUI) BOOL limitedUI; // ivar: _limitedUI
@property (readonly, nonatomic) NSUInteger limitedUIElements; // ivar: _limitedUIElements
@property (readonly, nonatomic) NSUInteger maxFramesPerSecond; // ivar: _maxFramesPerSecond
@property (readonly, nonatomic, getter=isNightMode) BOOL nightMode; // ivar: _nightMode
@property (retain, nonatomic) CARDisplayInfo *physicalDisplay; // ivar: _physicalDisplay
@property (readonly, nonatomic) CGSize physicalSize; // ivar: _physicalSize
@property (readonly, nonatomic) CGSize pixelSize; // ivar: _pixelSize
@property (readonly, nonatomic) NSUInteger primaryInteractionModel;
@property (readonly, copy, nonatomic) NSDictionary *screenInfoResponse; // ivar: _screenInfoResponse
@property (readonly, nonatomic) NSUInteger screenType; // ivar: _screenType
@property (readonly, nonatomic) CGSize squaredPixelSize; // ivar: _squaredPixelSize
@property (nonatomic) BOOL supportsAppearanceMode; // ivar: _supportsAppearanceMode
@property (readonly, nonatomic) BOOL supportsHighFidelityTouch; // ivar: _supportsHighFidelityTouch
@property (nonatomic) BOOL supportsLayerTracking; // ivar: _supportsLayerTracking
@property (nonatomic) BOOL supportsMapAppearanceMode; // ivar: _supportsMapAppearanceMode
@property (nonatomic) BOOL supportsPerDisplayNightMode; // ivar: _supportsPerDisplayNightMode
@property (nonatomic) NSUInteger systemAvailableInteractionModels; // ivar: _systemAvailableInteractionModels
@property (nonatomic) NSUInteger systemPrimaryInteractionModel; // ivar: _systemPrimaryInteractionModel
@property (readonly, copy, nonatomic) NSArray *viewAreas; // ivar: _viewAreas
@property (nonatomic) BOOL wantsCornerMasks; // ivar: _wantsCornerMasks


-(BOOL)_currentProcessHasEntitlement;
-(id)_descriptionForInteractionModel:(NSUInteger)arg0 ;
-(id)description;
-(id)descriptionForAvailableInteractionModels;
-(id)descriptionForPrimaryInteractionModel;
// -(id)initWithPropertySupplier:(id)arg0 screenType:(unk)arg1  ;
// -(id)initWithPropertySupplier:(id)arg0 screenType:(unk)arg1 additionalInsets:(NSUInteger)arg2 displayDictionary:(struct NSEdgeInsets )arg3  ;
-(struct CGPoint )originInDisplay;
-(struct CGSize )displayPixelSize;
-(void)limitedUIChanged:(BOOL)arg0 ;
-(void)nightModeChanged:(BOOL)arg0 ;


@end


#endif