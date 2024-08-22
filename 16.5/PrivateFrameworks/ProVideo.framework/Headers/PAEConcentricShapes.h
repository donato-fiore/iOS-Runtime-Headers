// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAECONCENTRICSHAPES_H
#define PAECONCENTRICSHAPES_H



#import "PAEGeneratorDefaultBase.h"

@interface PAEConcentricShapes : PAEGeneratorDefaultBase {
    CGFloat _lastWidth;
    CGFloat _lastHeight;
    CGFloat _lastScale;
}




-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInfo:(struct ? )arg1 ;
-(BOOL)frameCleanup;
-(BOOL)frameSetup:(struct ? )arg0 hardware:(*BOOL)arg1 software:(*BOOL)arg2 ;
-(BOOL)parameterChanged:(unsigned int)arg0 ;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;


@end


#endif