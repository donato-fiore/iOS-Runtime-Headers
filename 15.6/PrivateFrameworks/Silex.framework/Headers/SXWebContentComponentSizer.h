// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXWEBCONTENTCOMPONENTSIZER_H
#define SXWEBCONTENTCOMPONENTSIZER_H

@protocol SWLoadingPolicyProvider;


#import "SXComponentSizer.h"

@interface SXWebContentComponentSizer : SXComponentSizer

@property (readonly, nonatomic) NSObject<SWLoadingPolicyProvider> *loadingPolicyProvider; // ivar: _loadingPolicyProvider


-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 layoutContext:(id)arg1 ;
-(id)initWithComponent:(id)arg0 componentLayout:(id)arg1 componentStyle:(id)arg2 DOMObjectProvider:(id)arg3 layoutOptions:(id)arg4 loadingPolicyProvider:(id)arg5 ;


@end


#endif