// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKATTRIBUTECONTROLLER_H
#define AKATTRIBUTECONTROLLER_H

@class UIColor, UIFont, PKInk, NSDictionary;

#import <Foundation/Foundation.h>

#import "AKController.h"
#import "AKPageModelController.h"

@interface AKAttributeController : NSObject

@property NSUInteger arrowHeadStyle; // ivar: _arrowHeadStyle
@property NSInteger brushStyle; // ivar: _brushStyle
@property (weak) AKController *controller; // ivar: _controller
@property (retain) UIColor *fillColor; // ivar: _fillColor
@property (retain) UIFont *font; // ivar: _font
@property BOOL hasShadow; // ivar: _hasShadow
@property (nonatomic) NSInteger highlightStyle; // ivar: _highlightStyle
@property (retain, nonatomic) PKInk *ink; // ivar: _ink
@property (retain, nonatomic) AKPageModelController *modelControllerToObserveForSelections; // ivar: modelControllerToObserveForSelections
@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property BOOL strokeIsDashed; // ivar: _strokeIsDashed
@property CGFloat strokeWidth; // ivar: _strokeWidth
@property (retain) NSDictionary *textAttributes; // ivar: _textAttributes


+(id)defaultFont;
+(id)defaultTextAttributes;
+(void)initialize;
-(BOOL)_isEnabledForSender:(id)arg0 segment:(NSInteger)arg1 withSelectedAnnotations:(id)arg2 ;
-(BOOL)_updateStateOnSender:(id)arg0 segment:(NSInteger)arg1 fromSelectedAnnotations:(id)arg2 ;
-(BOOL)isAttributeSenderEnabled:(id)arg0 segment:(NSInteger)arg1 ;
-(BOOL)strokeColorIsEqualTo:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(void)_allAnnotations:(id)arg0 all:(*BOOL)arg1 atLeastOneShare:(*BOOL)arg2 attributeFromTag:(NSInteger)arg3 ;
-(void)_persistCurrentAttributes;
-(void)_restorePersistedAttributes;
-(void)_syncAttributesFromSelectedAnnotationsToUI;
-(void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)arg0 segment:(NSInteger)arg1 ;
-(void)_updateInk;
-(void)_updateStateOnSender:(id)arg0 segment:(NSInteger)arg1 ;
-(void)_updateStateOnSenderFromSelf:(id)arg0 segment:(NSInteger)arg1 ;
-(void)annotationEditingDidEndWithCompletion:(id)arg0 ;
-(void)forceHideRuler;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performAttributeActionForSender:(id)arg0 segment:(NSInteger)arg1 ;
-(void)resetToLastDrawingInk;
-(void)restoreStrokeColorToSystemDefault;
-(void)setDefaultInk;
-(void)syncFillColorOnSelectionToUI;
-(void)syncStrokeColorOnSelectionToUI;
-(void)toggleRuler;
-(void)updateAttributeSenderState:(id)arg0 segment:(NSInteger)arg1 enabled:(BOOL)arg2 ;
-(void)updateInkIfNeeded:(id)arg0 ;


@end


#endif