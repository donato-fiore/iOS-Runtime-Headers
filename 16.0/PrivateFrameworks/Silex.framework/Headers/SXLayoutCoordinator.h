// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXLAYOUTCOORDINATOR_H
#define SXLAYOUTCOORDINATOR_H

@class NSString;
@protocol SXLayoutPipelineDelegate, SXLayoutInvalidationManagerDelegate, SXLayoutCoordinator, SXLayoutCoordinatorDelegate, SXDocumentProviding, SXLayoutInstructionFactory, SXLayoutIntegrator, SXLayoutInvalidationManager, SXLayoutPolicyManager, SXLayoutPipeline;

#import <Foundation/Foundation.h>

#import "SXDOMObjectProvider.h"
#import "SXLayoutBlueprintProvider.h"
#import "SXDelayed.h"
#import "SXLayoutOptions.h"
#import "SXLayoutParametersManager.h"

@interface SXLayoutCoordinator : NSObject <SXLayoutPipelineDelegate, SXLayoutInvalidationManagerDelegate, SXLayoutCoordinator>



@property (readonly, nonatomic) SXDOMObjectProvider *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, nonatomic) SXLayoutBlueprintProvider *blueprintProvider; // ivar: _blueprintProvider
@property (retain, nonatomic) SXDelayed *debouncer; // ivar: _debouncer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXLayoutCoordinatorDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentProviding> *documentProvider; // ivar: _documentProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXLayoutInstructionFactory> *instructionFactory; // ivar: _instructionFactory
@property (readonly, nonatomic) NSObject<SXLayoutIntegrator> *integrator; // ivar: _integrator
@property (readonly, nonatomic) NSObject<SXLayoutInvalidationManager> *invalidationManager; // ivar: _invalidationManager
@property (retain, nonatomic) SXLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly, nonatomic) SXLayoutParametersManager *layoutParametersManager; // ivar: _layoutParametersManager
@property (readonly, nonatomic) NSObject<SXLayoutPolicyManager> *layoutPolicyManager; // ivar: _layoutPolicyManager
@property (readonly, nonatomic) NSObject<SXLayoutPipeline> *pipeline; // ivar: _pipeline
@property (readonly) Class superclass;


-(id)initWithPipeline:(id)arg0 integrator:(id)arg1 instructionFactory:(id)arg2 invalidationManager:(id)arg3 blueprintProvider:(id)arg4 DOMObjectProvider:(id)arg5 layoutParametersManager:(id)arg6 documentProvider:(id)arg7 layoutPolicyManager:(id)arg8 ;
-(id)taskWithOptions:(id)arg0 layoutBlueprint:(id)arg1 instructions:(id)arg2 ;
-(void)layoutInvalidationManager:(id)arg0 didInvalidateBlueprint:(id)arg1 ;
-(void)layoutPipeline:(id)arg0 finishedTask:(id)arg1 withResult:(id)arg2 ;
-(void)layoutWithOptions:(id)arg0 ;
-(void)startTask:(id)arg0 ;


@end


#endif