// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAEVIGNETTE_H
#define PAEVIGNETTE_H



#import "PAEFilterDefaultBase.h"

@interface PAEVignette : PAEFilterDefaultBase



-(?)dynamicPropertiesAtTimewithError;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)getEdgeMode:(*unsigned int)arg0 withInfo:(struct ? )arg1 ;


@end


#endif