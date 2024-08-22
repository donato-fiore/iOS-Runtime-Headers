// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXBUTTONCOMPONENTSIZER_H
#define SXBUTTONCOMPONENTSIZER_H

@class NSString;
@protocol SXTextSourceDataSource;


#import "SXComponentSizer.h"
#import "SXTextLayouter.h"

@interface SXButtonComponentSizer : SXComponentSizer <SXTextSourceDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXTextLayouter *textLayouter; // ivar: _textLayouter


-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 layoutContext:(id)arg1 ;
-(id)additionsForTextSource:(id)arg0 ;
-(id)componentTextStyleForTextSource:(id)arg0 inheritingFromDefaultStyles:(BOOL)arg1 ;
-(id)contentSizeCategoryForTextSource:(id)arg0 ;
-(id)defaultComponentTextStyleForTextSource:(id)arg0 ;
-(id)defaultComponentTextStylesForTextSource:(id)arg0 ;
-(id)initWithComponent:(id)arg0 componentLayout:(id)arg1 componentStyle:(id)arg2 DOMObjectProvider:(id)arg3 layoutOptions:(id)arg4 textProvider:(id)arg5 textComponentLayoutHosting:(id)arg6 textSourceFactory:(id)arg7 ;
-(id)inlineTextStylesForTextSource:(id)arg0 ;
-(id)textResizerForTextSource:(id)arg0 ;
-(id)textRulesForTextSource:(id)arg0 ;
-(id)textStyleForIdentifier:(id)arg0 ;
-(struct UIEdgeInsets )contentInsetsWithUnitConverter:(id)arg0 ;
-(struct UIEdgeInsets )layoutMarginsWithUnitConverter:(id)arg0 ;


@end


#endif