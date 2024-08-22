// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPORTRAITMODEINSTRUCTIONLABEL_H
#define CAMPORTRAITMODEINSTRUCTIONLABEL_H



#import "CAMInstructionLabel.h"

@interface CAMPortraitModeInstructionLabel : CAMInstructionLabel

@property (nonatomic) NSInteger devicePosition; // ivar: _devicePosition
@property (nonatomic) NSInteger flashMode; // ivar: _flashMode
@property (nonatomic, getter=isFlashSupported) BOOL flashSupported; // ivar: _flashSupported
@property (nonatomic) NSInteger lightingType; // ivar: _lightingType
@property (nonatomic) NSInteger lowLightMode; // ivar: _lowLightMode
@property (nonatomic) NSInteger lowLightStatus; // ivar: _lowLightStatus
@property (nonatomic) NSUInteger numberOfPeopleFound; // ivar: _numberOfPeopleFound
@property (nonatomic) NSInteger shallowDepthOfFieldStatus; // ivar: _shallowDepthOfFieldStatus


+(BOOL)shouldDisplayInstructionForShallowDepthOfFieldStatus:(NSInteger)arg0 ;
+(id)_textForShallowDepthOfFieldStatus:(NSInteger)arg0 numberOfPeopleFound:(NSUInteger)arg1 flashSupported:(BOOL)arg2 flashMode:(NSInteger)arg3 devicePosition:(NSInteger)arg4 lightingType:(NSInteger)arg5 lowlightMode:(NSInteger)arg6 lowLightStatus:(NSInteger)arg7 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateTextWithPriorStatus:(NSInteger)arg0 ;


@end


#endif