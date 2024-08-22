// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(BOOL)shouldAllowOriginalRenderFromNode:(struct BWRenderListRendererNode *)arg0 ;
-(id)initWithAnimationSupported:(BOOL)arg0 affectsMetadata:(BOOL)arg1 ;
-(id)initWithResourceProvider:(id)arg0 originalFilters:(id)arg1 processedFilters:(id)arg2 optimizationStrategy:(short)arg3 ;
-(void)dealloc;
-(void)prepareWithParameters:(id)arg0 forInputVideoFormat:(id)arg1 inputDepthFormat:(id)arg2 ;


@end


#endif