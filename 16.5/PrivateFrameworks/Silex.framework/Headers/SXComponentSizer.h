// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTSIZER_H
#define SXCOMPONENTSIZER_H

@class NSMutableDictionary;
@protocol SXDOMObjectProviding, SXComponent, SXComponentLayout, SXComponentState, SXComponentStyle;

#import <Foundation/Foundation.h>

#import "SXLayoutOptions.h"

@interface SXComponentSizer : NSObject

@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, nonatomic) NSObject<SXComponent> *component; // ivar: _component
@property (readonly, nonatomic) NSObject<SXComponentLayout> *componentLayout; // ivar: _componentLayout
@property (retain, nonatomic) NSObject<SXComponentState> *componentState; // ivar: _componentState
@property (readonly, nonatomic) NSObject<SXComponentStyle> *componentStyle; // ivar: _componentStyle
@property (readonly, nonatomic) NSMutableDictionary *infoForRendering; // ivar: _infoForRendering
@property (readonly, nonatomic) SXLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (nonatomic) CGSize suggestedSize; // ivar: _suggestedSize


-(BOOL)allowComponentIntersection;
-(BOOL)requiresSizeChangeForStateChange:(id)arg0 fromState:(id)arg1 ;
-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 layoutContext:(id)arg1 ;
-(NSInteger)minimumColumnLength;
-(NSUInteger)shouldIgnoreMarginsForColumnLayout:(id)arg0 ;
-(NSUInteger)shouldIgnoreViewportPaddingForColumnLayout:(id)arg0 ;
-(id)initWithComponent:(id)arg0 componentLayout:(id)arg1 componentStyle:(id)arg2 DOMObjectProvider:(id)arg3 layoutOptions:(id)arg4 ;
-(id)snapLines;
-(struct UIEdgeInsets )bordersInsetsWithUnitConverter:(id)arg0 ;
-(struct UIEdgeInsets )contentInsetsWithUnitConverter:(id)arg0 ;
-(struct UIEdgeInsets )layoutMarginsWithUnitConverter:(id)arg0 ;
-(struct _NSRange )overrideColumnLayoutForColumnRange:(struct _NSRange )arg0 inColumnLayout:(id)arg1 ;
-(void)saveInfo:(id)arg0 forRenderingPhaseWithIdentifier:(id)arg1 ;


@end


#endif