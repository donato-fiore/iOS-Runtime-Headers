// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEGENERATORDEFAULTBASE_H
#define PAEGENERATORDEFAULTBASE_H

@protocol FxGenerator;


#import "PAESharedDefaultBase.h"

@interface PAEGeneratorDefaultBase : PAESharedDefaultBase <FxGenerator>





-(BOOL)canThrowRenderOutput:(id)arg0 withInfo:(struct ? )arg1 ;
-(BOOL)frameSetup:(struct ? )arg0 hardware:(*BOOL)arg1 software:(*BOOL)arg2 ;
-(BOOL)renderOutput:(id)arg0 withInfo:(struct ? )arg1 ;
-(void)filteredEdges:(*BOOL)arg0 withInfo:(struct ? )arg1 ;


@end


#endif