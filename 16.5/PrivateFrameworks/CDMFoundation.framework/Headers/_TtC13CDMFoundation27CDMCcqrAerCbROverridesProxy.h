// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13CDMFOUNDATION27CDMCCQRAERCBROVERRIDESPROXY_H
#define _TTC13CDMFOUNDATION27CDMCCQRAERCBROVERRIDESPROXY_H



#import "SiriNLUOverrideProxy.h"

@interface _TtC13CDMFoundation27CDMCcqrAerCbROverridesProxy : SiriNLUOverrideProxy {
    ? defaultTemplatePattern;
    ? templatePattern;
    ? $__lazy_storage_$_captureGroupExpression;
}




-(BOOL)addWithCollection:(id)arg0 ;
-(BOOL)clean;
-(id)getRewriteHypothesisWithOverrideUtterance:(id)arg0 ;
-(id)initWithFilePaths:(id)arg0 templatePattern:(id)arg1 ;
-(id)initWithUseMemory:(BOOL)arg0 ;
-(id)initWithUseMemory:(BOOL)arg0 templatePattern:(id)arg1 ;
-(id)matchWithInputs:(id)arg0 ;


@end


#endif