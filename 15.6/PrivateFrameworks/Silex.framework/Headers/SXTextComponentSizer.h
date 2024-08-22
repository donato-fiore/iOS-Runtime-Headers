// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTCOMPONENTSIZER_H
#define SXTEXTCOMPONENTSIZER_H

@class NSString;
@protocol SXTextSourceDataSource;


#import "SXComponentSizer.h"
#import "SXTextLayouter.h"
#import "SXTextResizer.h"

@interface SXTextComponentSizer : SXComponentSizer <SXTextSourceDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger stringLength;
@property (readonly) Class superclass;
@property (retain, nonatomic) SXTextLayouter *textLayouter; // ivar: _textLayouter
@property (retain, nonatomic) SXTextResizer *textResizer; // ivar: _textResizer


-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 layoutContext:(id)arg1 ;
-(CGFloat)verticalPositionForRange:(struct _NSRange )arg0 ;
-(id)additionsForTextSource:(id)arg0 ;
-(id)componentTextStyleForTextSource:(id)arg0 inheritingFromDefaultStyles:(BOOL)arg1 ;
-(id)contentSizeCategoryForTextSource:(id)arg0 ;
-(id)defaultComponentTextStyleForTextSource:(id)arg0 ;
-(id)defaultComponentTextStylesForTextSource:(id)arg0 ;
-(id)existingExclusionPathForComponentWithIdentifier:(id)arg0 ;
-(id)initWithComponent:(id)arg0 componentLayout:(id)arg1 componentStyle:(id)arg2 DOMObjectProvider:(id)arg3 layoutOptions:(id)arg4 textComponentLayoutHosting:(id)arg5 textSourceFactory:(id)arg6 ;
-(id)inlineTextStylesForTextSource:(id)arg0 ;
-(id)snapLines;
-(id)textResizerForTextSource:(id)arg0 ;
-(id)textRulesForTextSource:(id)arg0 ;
-(id)textStyleForIdentifier:(id)arg0 ;
-(void)addExclusionPath:(id)arg0 ;
-(void)removeAllExclusionPaths;


@end


#endif