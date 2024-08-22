// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAEEQUIRECTPROJECT_H
#define PAEEQUIRECTPROJECT_H



#import "PAEGeneratorDefaultBase.h"

@interface PAEEquirectProject : PAEGeneratorDefaultBase



-(?)getProjectionFOVYDegrees;
-(?)getViewMatrix;
-(BOOL)addParameters;
-(BOOL)frameCleanup;
-(BOOL)frameSetup:(struct ? )arg0 hardware:(*BOOL)arg1 software:(*BOOL)arg2 ;
-(BOOL)renderOutput:(id)arg0 withInfo:(struct ? )arg1 ;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(struct HGEquirectProjectParams )getParams:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif