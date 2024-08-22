// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWRENDERLIST_H
#define BWRENDERLIST_H

@class NSString, NSSet;
@protocol BWRenderListParameterListProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWRenderList : NSObject <BWRenderListParameterListProvider>

 {
    BWRenderListRendererList _rendererList;
    *BWRenderListRendererNode _originalMarkerRendererNode;
    BWRenderListParameterList _parameterList;
    BOOL _isolationQueuePrepared;
    NSObject<OS_dispatch_queue> *_preparationIsolationQueue;
}


@property (readonly, nonatomic) BOOL affectsMetadata; // ivar: _affectsMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *originalFilterNames; // ivar: _originalFilterNames
@property (readonly, nonatomic) *BWRenderListParameterList parameterList;
@property (nonatomic, getter=isPrepared) BOOL prepared;
@property (readonly, nonatomic) NSSet *processedFilterNames; // ivar: _processedFilterNames
@property (readonly, nonatomic) BOOL producesOriginalRender;
@property (readonly, nonatomic) *BWRenderListRendererList rendererList;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAnimation; // ivar: _supportsAnimation


+(id)shallowDepthOfFieldFilterName;
+(void)initialize;
-(?)_appendBatchRendererFromProvider:(?)arg0 toRendererList:(?)arg1 parameterListwithContext;
-(?)_appendSingleRendererOfType:(?)arg0 forFilter:(?)arg1 fromProvider:(?)arg2 toRendererList:(?)arg3 parameterListwithContext;
-(?)_finishOptimizingRendererList:(?)arg0 parameterList:(?)arg1 fromProvidercontext;
-(BOOL)_shouldStreamingSDOFRendererConsumeFilter:(id)arg0 ;
-(BOOL)_shouldUseMetalRendererForFilterWithName:(id)arg0 ;
-(BOOL)_shouldUseOptimizationStrategyDependentSDOFRendererForFilterWithName:(id)arg0 ;
-(BOOL)shouldAllowOriginalRenderFromNode:(struct BWRenderListRendererNode *)arg0 ;
-(id)copyParameters;
-(id)initWithAnimationSupported:(BOOL)arg0 affectsMetadata:(BOOL)arg1 ;
-(id)initWithResourceProvider:(id)arg0 originalFilters:(id)arg1 processedFilters:(id)arg2 optimizationStrategy:(short)arg3 ;
-(struct BWRenderListRendererNode *)firstRendererNode;
-(void)_continueOptimizingRendererList:(struct BWRenderListRendererList *)arg0 parameterList:(struct BWRenderListParameterList *)arg1 withFilter:(id)arg2 fromProvider:(id)arg3 context:(struct BWRenderListOptimizationContext *)arg4 ;
-(void)dealloc;
-(void)prepareWithParameters:(id)arg0 forInputVideoFormat:(id)arg1 inputDepthFormat:(id)arg2 ;


@end


#endif