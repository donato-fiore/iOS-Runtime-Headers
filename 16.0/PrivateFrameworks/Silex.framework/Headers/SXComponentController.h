// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTCONTROLLER_H
#define SXCOMPONENTCONTROLLER_H

@class NSString, NSArray, NSMutableDictionary, NSMutableArray, NSHashTable;
@protocol SXViewportChangeListener, SXComponentController, SXDOMObjectProviding, SXComponentViewEngine, SXComponentHosting;

#import <Foundation/Foundation.h>

#import "SXPresentationAttributes.h"
#import "SXLayoutBlueprint.h"
#import "SXViewport.h"

@interface SXComponentController : NSObject <SXViewportChangeListener, SXComponentController>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, nonatomic) NSObject<SXComponentViewEngine> *componentViewEngine; // ivar: _componentViewEngine
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *flattenedComponentViews; // ivar: _flattenedComponentViews
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SXComponentHosting> *host; // ivar: _host
@property (readonly, nonatomic) BOOL isPresented; // ivar: _isPresented
@property (nonatomic) BOOL isPresenting; // ivar: _isPresenting
@property (retain, nonatomic) NSMutableDictionary *mappedComponentViews; // ivar: _mappedComponentViews
@property (retain, nonatomic) NSMutableArray *nestedComponentViews; // ivar: _nestedComponentViews
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) SXPresentationAttributes *presentationAttributes; // ivar: _presentationAttributes
@property (readonly, nonatomic) SXLayoutBlueprint *presentedBlueprint; // ivar: _presentedBlueprint
@property (retain, nonatomic) NSMutableArray *sortedComponentViews; // ivar: _sortedComponentViews
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(id)componentViewForIdentifier:(id)arg0 ;
-(id)componentViewForPoint:(struct CGPoint )arg0 ;
-(id)componentViewForPoint:(struct CGPoint )arg0 inComponents:(id)arg1 ;
-(id)componentViews;
-(id)componentViewsForRole:(int)arg0 ;
-(id)componentViewsForRole:(int)arg0 forLayoutBlueprint:(id)arg1 ;
-(id)componentsInRect:(struct CGRect )arg0 ;
-(id)initWithViewport:(id)arg0 componentViewEngine:(id)arg1 DOMObjectProvider:(id)arg2 ;
-(id)presentComponentBlueprint:(id)arg0 inHost:(id)arg1 columnLayout:(id)arg2 ;
-(struct CGRect )renderBounds;
-(void)addObserver:(id)arg0 ;
-(void)assistiveTechnologyStatusDidChange;
-(void)fadeComponent:(id)arg0 completion:(id)arg1 ;
-(void)integrateBlueprint:(id)arg0 withCompletion:(id)arg1 ;
-(void)presentBlueprint:(id)arg0 forParentComponentView:(id)arg1 inHost:(id)arg2 ;
-(void)presentComponentsInBlueprint:(id)arg0 ;
-(void)provideInfosLayoutTo:(id)arg0 ;
-(void)removeComponentsInLayoutBlueprint:(id)arg0 removedFromLayoutBlueprint:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)renderContentsIfNeededForComponents:(id)arg0 ;
-(void)updatePresentationStateForNestedComponentView:(id)arg0 presentationState:(NSInteger)arg1 ;
-(void)updatePresentationStateForNestedComponentViews:(id)arg0 presentationState:(NSInteger)arg1 ;
-(void)updateVisibilityStatesForComponentViews:(id)arg0 ;
-(void)updateVisibilityStatesForComponentViews:(id)arg0 parentComponent:(id)arg1 withOffset:(struct CGPoint )arg2 ;
-(void)updateVisibilityStatesForComponentViews:(id)arg0 toState:(NSInteger)arg1 ;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)viewport:(id)arg0 boundsDidChangeFromBounds:(struct CGRect )arg1 ;
-(void)viewport:(id)arg0 dynamicBoundsDidChangeFromBounds:(struct CGRect )arg1 ;


@end


#endif