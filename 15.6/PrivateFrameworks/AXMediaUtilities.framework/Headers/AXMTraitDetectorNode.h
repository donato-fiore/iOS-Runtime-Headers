// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMTRAITDETECTORNODE_H
#define AXMTRAITDETECTORNODE_H

@protocol NSSecureCoding;


#import "AXMEvaluationNode.h"

@interface AXMTraitDetectorNode : AXMEvaluationNode <NSSecureCoding>



@property (nonatomic) CGFloat colorDistanceTheshold; // ivar: _colorDistanceTheshold
@property (nonatomic) NSInteger sampleFrequency; // ivar: _sampleFrequency
@property (nonatomic) BOOL shouldEvaluateColorInformation; // ivar: _shouldEvaluateColorInformation


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)requiresVisionFramework;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(id)_blurValueForVisionObservation:(id)arg0 ;
-(id)_brightnessValueForVisionObservation:(id)arg0 ;
-(void)_evaluateColorInformation:(id)arg0 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;
-(void)nodeInitialize;


@end


#endif