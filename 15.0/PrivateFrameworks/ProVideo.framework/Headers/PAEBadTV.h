// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAEBADTV_H
#define PAEBADTV_H



#import "PAEFilterDefaultBase.h"

@interface PAEBadTV : PAEFilterDefaultBase



-(?)createWavyTableOfHeight:(?)arg0 rowBytes:(?)arg1 table:(?)arg2 flipatTime;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)dealloc;


@end


#endif