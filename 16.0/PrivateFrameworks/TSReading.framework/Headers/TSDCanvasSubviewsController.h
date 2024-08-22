// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCANVASSUBVIEWSCONTROLLER_H
#define TSDCANVASSUBVIEWSCONTROLLER_H

@class NSDictionary, NSArray, NSMutableArray, TSURetainedPointerKeyDictionary, NSSet;
@protocol TSDLayerAndSubviewHosting;

#import <Foundation/Foundation.h>


@interface TSDCanvasSubviewsController : NSObject {
    NSDictionary *_repsByChildView;
    id<TSDLayerAndSubviewHosting> *_host;
    NSArray *_alternateLayersForViews;
    BOOL _needsLayout;
    BOOL _hasBeenTornDown;
    NSMutableArray *_subviewLayers;
    TSURetainedPointerKeyDictionary *_repViewControllersByChildView;
    _opaque_pthread_mutex_t _mutex;
}


@property (readonly, nonatomic) NSSet *repChildViews; // ivar: _repChildViews


-(id)initWithLayerAndSubviewHost:(id)arg0 ;
-(id)p_topLevelReps;
-(id)updateAlternateLayersForViews;
-(void)addSubviews:(id)arg0 ;
-(void)dealloc;
-(void)p_recursivelyFindAlternateLayersForRep:(id)arg0 accumulatingLayers:(id)arg1 repsByChildLayer:(id)arg2 ;
-(void)p_recursivelyFindChildViewsForRep:(id)arg0 accumulatingViews:(id)arg1 accumulatingRepsByChildView:(id)arg2 ;
-(void)p_recursivelyFindHostingRepsForRep:(id)arg0 accumulatingHostingReps:(id)arg1 ;
-(void)p_sortLayers:(id)arg0 ;
-(void)p_sortSubviews:(id)arg0 ;
-(void)removeSubviews:(id)arg0 ;
-(void)setNeedsLayout;
-(void)syncPerformBlock:(id)arg0 ;
-(void)teardown;
-(void)updateTopLevelLayersForTiling:(id)arg0 ;
-(void)updateViewsFromReps;


@end


#endif