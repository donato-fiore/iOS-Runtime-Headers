// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKVIEWELEMENTSTYLECOMPOSER_H
#define IKVIEWELEMENTSTYLECOMPOSER_H


#import <Foundation/Foundation.h>

#import "IKViewElementStyle.h"
#import "IKViewElementStyleComposer.h"
#import "IKStyleList.h"

@interface IKViewElementStyleComposer : NSObject

@property (retain, nonatomic) IKViewElementStyle *composedSansDefaultStyle; // ivar: _composedSansDefaultStyle
@property (retain, nonatomic) IKViewElementStyle *composedStyle; // ivar: _composedStyle
@property (readonly, nonatomic, getter=isCompositionDone) BOOL compositionDone; // ivar: _compositionDone
@property (readonly, retain, nonatomic) IKViewElementStyleComposer *defaultStyleComposer; // ivar: _defaultStyleComposer
@property (readonly, retain, nonatomic) IKViewElementStyle *elementStyleOverrides; // ivar: _elementStyleOverrides
@property (readonly, retain, nonatomic) IKViewElementStyleComposer *parentStyleComposer; // ivar: _parentStyleComposer
@property (readonly, nonatomic) BOOL requiresMediaQueryEvaluation; // ivar: _requiresMediaQueryEvaluation
@property (readonly, retain, nonatomic) IKStyleList *styleList; // ivar: _styleList


+(id)styleComposerWithDefaultStyleComposer:(id)arg0 parentStyleComposer:(id)arg1 styleList:(id)arg2 elementStyleOverrides:(id)arg3 ;
-(id)composedSansDefaultStyleWithMediaQueryEvaluator:(id)arg0 ;
-(id)composedStyleWithMediaQueryEvaluator:(id)arg0 ;
-(id)consolidatedDefaultStyleList;
-(id)initWithDefaultStyleComposer:(id)arg0 parentStyleComposer:(id)arg1 styleList:(id)arg2 elementStyleOverrides:(id)arg3 ;
-(void)_composeWithMediaQueryEvaluator:(id)arg0 ;
-(void)setNeedsRecomposition;


@end


#endif