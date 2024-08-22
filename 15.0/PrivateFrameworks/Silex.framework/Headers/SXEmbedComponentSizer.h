// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXEMBEDCOMPONENTSIZER_H
#define SXEMBEDCOMPONENTSIZER_H

@protocol SXEmbedDataProvider;


#import "SXComponentSizer.h"

@interface SXEmbedComponentSizer : SXComponentSizer

@property (readonly, nonatomic) NSObject<SXEmbedDataProvider> *embedDataProvider; // ivar: _embedDataProvider


-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 layoutContext:(id)arg1 ;
-(id)initWithComponent:(id)arg0 componentLayout:(id)arg1 componentStyle:(id)arg2 DOMObjectProvider:(id)arg3 layoutOptions:(id)arg4 embedDataProvider:(id)arg5 ;
-(struct _NSRange )overrideColumnLayoutForColumnRange:(struct _NSRange )arg0 inColumnLayout:(id)arg1 ;


@end


#endif