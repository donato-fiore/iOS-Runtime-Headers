// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXLAYOUTPIPELINE_H
#define SXLAYOUTPIPELINE_H

@class NSString, NSOperationQueue, NSMutableArray;
@protocol SXLayoutPipeline, SXDOMObjectProviderFactory, SXLayoutPipelineDelegate, SXLayoutOperationFactory;

#import <Foundation/Foundation.h>


@interface SXLayoutPipeline : NSObject <SXLayoutPipeline>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviderFactory> *DOMObjectProviderFactory; // ivar: _DOMObjectProviderFactory
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXLayoutPipelineDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXLayoutOperationFactory> *layoutOperationFactory; // ivar: _layoutOperationFactory
@property (readonly, nonatomic) NSOperationQueue *layoutOperationQueue; // ivar: _layoutOperationQueue
@property (readonly, nonatomic) NSMutableArray *postProcessors; // ivar: _postProcessors
@property (readonly, nonatomic) NSMutableArray *preProcessors; // ivar: _preProcessors
@property (readonly) Class superclass;


-(id)initWithLayoutOperationFactory:(id)arg0 DOMObjectProviderFactory:(id)arg1 ;
-(void)addProcessor:(id)arg0 type:(NSUInteger)arg1 ;
-(void)cancelTasks;
-(void)finalizeLayoutForLayoutOperation:(id)arg0 task:(id)arg1 DOMObjectProvider:(id)arg2 ;
-(void)layoutWithTask:(id)arg0 ;
-(void)removeProcessor:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif