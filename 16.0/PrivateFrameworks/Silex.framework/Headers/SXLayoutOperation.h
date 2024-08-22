// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXLAYOUTOPERATION_H
#define SXLAYOUTOPERATION_H

@class NSOperation, NSString;
@protocol SXLayouterDelegate, SXDOMObjectProviding, SXComponentSizerEngine, SXLayoutBlueprintFactory;


#import "SXLayoutBlueprint.h"
#import "SXColumnLayouter.h"
#import "SXLayoutTask.h"

@interface SXLayoutOperation : NSOperation <SXLayouterDelegate>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (copy, nonatomic, setter=afterLayout:) id *afterBlock; // ivar: _afterBlock
@property (copy, nonatomic, setter=beforeLayout:) id *beforeBlock; // ivar: _beforeBlock
@property (readonly, nonatomic) NSObject<SXComponentSizerEngine> *componentSizerEngine; // ivar: _componentSizerEngine
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property BOOL executing; // ivar: _executing
@property BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SXLayoutBlueprint *layoutBlueprint; // ivar: _layoutBlueprint
@property (readonly, nonatomic) NSObject<SXLayoutBlueprintFactory> *layoutBlueprintFactory; // ivar: _layoutBlueprintFactory
@property (readonly, nonatomic) SXColumnLayouter *layouter; // ivar: _layouter
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXLayoutTask *task; // ivar: _task


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)layoutBlueprint:(id)arg0 containsComponents:(id)arg1 ;
-(id)createLayoutBlueprintForComponents:(id)arg0 ;
-(id)initWithTask:(id)arg0 layouter:(id)arg1 DOMObjectProvider:(id)arg2 componentSizerEngine:(id)arg3 layoutBlueprintFactory:(id)arg4 ;
-(id)layoutWithBlueprint:(id)arg0 ;
-(void)afterLayout:(id)arg0 ;
-(void)beforeLayout:(id)arg0 ;
-(void)cancelOperation;
-(void)finishBookKeeping;
-(void)layouter:(id)arg0 didFinishLayoutForComponentBlueprint:(id)arg1 layoutBlueprint:(id)arg2 shouldContinueLayout:(*BOOL)arg3 ;
-(void)prepareLayoutBlueprint:(id)arg0 ;
-(void)registerComponent:(id)arg0 layoutBlueprint:(id)arg1 componentIndex:(NSUInteger)arg2 ;
-(void)start;
-(void)startBookKeeping;
-(void)updateLayoutBlueprint:(id)arg0 components:(id)arg1 ;


@end


#endif