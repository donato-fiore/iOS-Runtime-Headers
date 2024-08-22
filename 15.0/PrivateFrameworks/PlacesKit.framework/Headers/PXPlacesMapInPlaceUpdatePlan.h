// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPLACESMAPINPLACEUPDATEPLAN_H
#define PXPLACESMAPINPLACEUPDATEPLAN_H

@class NSMapTable, NSString;
@protocol PXPlacesMapUpdatePlan, OS_dispatch_semaphore, PXPlacesMapLayoutResult, PXPlacesMapPipelineComponentProvider;

#import <Foundation/Foundation.h>


@interface PXPlacesMapInPlaceUpdatePlan : NSObject <PXPlacesMapUpdatePlan>

 {
    NSObject<OS_dispatch_semaphore> *_sema;
}


@property (retain) NSMapTable *currentLayoutItemToAnnotationTable; // ivar: _currentLayoutItemToAnnotationTable
@property (retain) NSObject<PXPlacesMapLayoutResult> *currentLayoutResult; // ivar: _currentLayoutResult
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider; // ivar: pipelineComponentProvider
@property (readonly) Class superclass;


-(id)_changesBetweenSourceLayoutResult:(id)arg0 targetLayoutResult:(id)arg1 ;
-(id)annotationForLayoutItem:(id)arg0 ;
-(id)init;
-(id)removalPlanResult;
-(id)resultForNewLayoutResult:(id)arg0 ;
-(void)reset;


@end


#endif