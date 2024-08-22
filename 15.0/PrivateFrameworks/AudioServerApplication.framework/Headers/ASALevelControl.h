// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASALEVELCONTROL_H
#define ASALEVELCONTROL_H



#import "ASAControl.h"

@interface ASALevelControl : ASAControl

@property (readonly, nonatomic) AudioValueRange decibelRange;
@property (nonatomic) float decibelValue;
@property (readonly, nonatomic) float maximumDecibelValue;
@property (readonly, nonatomic) float minimumDecibelValue;
@property (nonatomic) float scalarValue;


-(float)decibelFromScalar:(float)arg0 ;
-(float)scalarFromDecibel:(float)arg0 ;
-(id)coreAudioClassName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;


@end


#endif