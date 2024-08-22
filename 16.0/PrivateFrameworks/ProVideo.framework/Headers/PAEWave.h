// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAEWAVE_H
#define PAEWAVE_H



#import "PAEFilterDefaultBase.h"

@interface PAEWave : PAEFilterDefaultBase {
    unsigned int _programID;
    unsigned int _bilinearProgramID;
}




-(?)dynamicPropertiesAtTimewithError;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)dealloc;
-(void)getEdgeMode:(*unsigned int)arg0 withInfo:(struct ? )arg1 ;


@end


#endif