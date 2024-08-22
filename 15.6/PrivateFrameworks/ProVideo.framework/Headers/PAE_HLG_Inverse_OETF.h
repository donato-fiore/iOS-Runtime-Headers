// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAE_HLG_INVERSE_OETF_H
#define PAE_HLG_INVERSE_OETF_H



#import "PAEFilterDefaultBase.h"

@interface PAE_HLG_Inverse_OETF : PAEFilterDefaultBase



-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;


@end


#endif