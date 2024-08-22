// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMODULESUMMARYCOMPONENTCONTROLLER_H
#define WFMODULESUMMARYCOMPONENTCONTROLLER_H

@class NSString, NSDictionary;
@protocol WFModuleSummaryViewDelegate, WFComponentEditingSession, WFActionEventObserver;


#import "CKStatefulViewComponentController.h"

@interface WFModuleSummaryComponentController : CKStatefulViewComponentController <WFModuleSummaryViewDelegate, WFComponentEditingSession, WFActionEventObserver>



@property (nonatomic) BOOL actionRunning; // ivar: _actionRunning
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldReflowWhenComponentRemounted; // ivar: _shouldReflowWhenComponentRemounted
@property (retain, nonatomic) NSDictionary *stagedParameterStates; // ivar: _stagedParameterStates
@property (nonatomic) BOOL summaryIsEditing; // ivar: _summaryIsEditing
@property (readonly) Class superclass;


+(CGFloat)heightForComponent:(id)arg0 withWidth:(CGFloat)arg1 ;
+(id)newStatefulView:(id)arg0 ;
+(void)configureStatefulView:(id)arg0 forComponent:(id)arg1 ;
-(BOOL)canRelinquishStatefulView;
-(id)summaryView;
-(id)viewControllerContainingSummaryView:(id)arg0 ;
-(void)actionRunningStateDidChange:(id)arg0 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)didAcquireStatefulView:(id)arg0 ;
-(void)didUpdateComponent;
-(void)reflowWithStagedParameterStates:(id)arg0 ;
-(void)summaryViewDidEndEditing:(id)arg0 ;
-(void)summaryViewDidInvalidateSize:(id)arg0 ;
-(void)summaryViewWillBeginEditing:(id)arg0 ;
-(void)updateColorsForRunningStateAnimated:(BOOL)arg0 ;
-(void)willRelinquishStatefulView:(id)arg0 ;


@end


#endif