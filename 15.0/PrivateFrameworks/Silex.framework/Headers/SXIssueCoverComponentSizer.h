// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXISSUECOVERCOMPONENTSIZER_H
#define SXISSUECOVERCOMPONENTSIZER_H

@protocol SXIssueCoverLayoutAttributesFactory;


#import "SXComponentSizer.h"

@interface SXIssueCoverComponentSizer : SXComponentSizer

@property (readonly, nonatomic) NSObject<SXIssueCoverLayoutAttributesFactory> *layoutOptionsFactory; // ivar: _layoutOptionsFactory


-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 layoutContext:(id)arg1 ;
-(id)initWithComponent:(id)arg0 componentLayout:(id)arg1 componentStyle:(id)arg2 DOMObjectProvider:(id)arg3 layoutOptions:(id)arg4 layoutOptionsFactory:(id)arg5 ;


@end


#endif