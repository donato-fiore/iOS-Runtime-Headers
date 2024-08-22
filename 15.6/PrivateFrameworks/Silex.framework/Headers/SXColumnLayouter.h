// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOLUMNLAYOUTER_H
#define SXCOLUMNLAYOUTER_H

@class NSString, NSMutableDictionary;
@protocol SXLayouter, SXLayouterDelegate, SXLayoutContextFactory, SXUnitConverterFactory;

#import <Foundation/Foundation.h>

#import "SXLayouterFactory.h"

@interface SXColumnLayouter : NSObject <SXLayouter>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXLayouterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *intersectionCache; // ivar: _intersectionCache
@property (readonly, nonatomic) NSObject<SXLayoutContextFactory> *layoutContextFactory; // ivar: _layoutContextFactory
@property (readonly, nonatomic) SXLayouterFactory *layouterFactory; // ivar: _layouterFactory
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXUnitConverterFactory> *unitConverterFactory; // ivar: _unitConverterFactory


-(BOOL)anchorPossibleForComponentWithBlueprint:(id)arg0 anchoredToComponentWithBlueprint:(id)arg1 layoutBlueprint:(id)arg2 columnStack:(id)arg3 ;
-(BOOL)componentBlueprint:(id)arg0 shouldIntersectWithComponentBlueprint:(id)arg1 ;
-(BOOL)intersectionPossibleForComponentWithBlueprint:(id)arg0 anchoredToComponentWithBlueprint:(id)arg1 layoutBlueprint:(id)arg2 columnStack:(id)arg3 ;
-(BOOL)stack:(id)arg0 stackComponents:(id)arg1 containsComponentIncludingAnchoredComponents:(id)arg2 forSourceComponent:(id)arg3 ;
-(CGFloat)factorForLayoutAttribute:(int)arg0 ;
-(id)columnStackForLayoutBlueprint:(id)arg0 columnLayout:(id)arg1 ;
-(id)findComponentStackBeforeComponent:(id)arg0 inColumnStack:(id)arg1 ;
-(id)initWithLayouterFactory:(id)arg0 layoutContextFactory:(id)arg1 unitConverterFactory:(id)arg2 ;
-(id)sortComponentDependencies:(id)arg0 forBlueprint:(id)arg1 ;
-(int)layoutAttributeForAnchor:(NSInteger)arg0 ;
-(struct CGPoint )calculatePositionForComponentNode:(id)arg0 columnLayout:(id)arg1 layoutBlueprint:(id)arg2 ;
-(struct CGSize )calculateSizeForComponentNode:(id)arg0 columnLayout:(id)arg1 layoutBlueprint:(id)arg2 dependencyResolver:(id)arg3 ;
-(void)analyzeSnapLinesForLayoutBlueprint:(id)arg0 ;
-(void)createDependenciesForLayoutBlueprint:(id)arg0 columnStack:(id)arg1 inDependencyResolver:(id)arg2 ;
-(void)layoutBlueprint:(id)arg0 columnLayout:(id)arg1 description:(id)arg2 shouldContinue:(*BOOL)arg3 ;


@end


#endif