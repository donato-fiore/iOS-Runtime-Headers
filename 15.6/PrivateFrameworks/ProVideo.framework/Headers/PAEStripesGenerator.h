// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAESTRIPESGENERATOR_H
#define PAESTRIPESGENERATOR_H



#import "PAEGeneratorDefaultBase.h"

@interface PAEStripesGenerator : PAEGeneratorDefaultBase



-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInfo:(struct ? )arg1 ;
-(BOOL)frameSetup:(struct ? )arg0 hardware:(*BOOL)arg1 software:(*BOOL)arg2 ;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;


@end


#endif