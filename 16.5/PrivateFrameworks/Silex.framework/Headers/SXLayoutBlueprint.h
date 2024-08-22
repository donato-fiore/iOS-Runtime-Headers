// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXLAYOUTBLUEPRINT_H
#define SXLAYOUTBLUEPRINT_H

@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSOrderedSet;
@protocol NSCopying, SXComponentBlueprintFactory, SXUnitConverterFactory;

#import <Foundation/Foundation.h>

#import "SXComponentDependencyResolver.h"
#import "SXLayoutOptions.h"
#import "SXLayoutBlueprint.h"

@interface SXLayoutBlueprint : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableDictionary *blueprint; // ivar: _blueprint
@property (nonatomic) CGSize blueprintSize; // ivar: _blueprintSize
@property (readonly, nonatomic) NSObject<SXComponentBlueprintFactory> *componentBlueprintFactory; // ivar: _componentBlueprintFactory
@property (retain, nonatomic) SXComponentDependencyResolver *dependencySolver; // ivar: _dependencySolver
@property (retain, nonatomic) NSMutableDictionary *flattenedBlueprint; // ivar: _flattenedBlueprint
@property (retain, nonatomic) NSMutableSet *invalidatedComponents; // ivar: _invalidatedComponents
@property (readonly, nonatomic) BOOL isComplete; // ivar: _isComplete
@property (readonly, nonatomic) SXLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) NSMutableArray *orderedComponentIdentifiers; // ivar: _orderedComponentIdentifiers
@property (weak, nonatomic) SXLayoutBlueprint *parentLayoutBlueprint; // ivar: _parentLayoutBlueprint
@property (readonly, nonatomic) SXLayoutBlueprint *rootLayoutBlueprint;
@property (retain, nonatomic) NSOrderedSet *snapLines; // ivar: _snapLines
@property (readonly, nonatomic) NSObject<SXUnitConverterFactory> *unitConverterFactory; // ivar: _unitConverterFactory
@property (nonatomic, getter=isUpdating) BOOL updating; // ivar: _updating


-(id)componentBlueprintForComponentIdentifier:(id)arg0 ;
-(id)componentBlueprintForComponentIdentifier:(id)arg0 includeChildren:(BOOL)arg1 ;
-(id)componentIdentifiers;
-(id)componentsInRect:(struct CGRect )arg0 ;
-(id)containerComponentIdentifierContainingComponentWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithLayoutOptions:(id)arg0 componentBlueprintFactory:(id)arg1 unitConverterFactory:(id)arg2 ;
-(id)layoutDescriptionForBlueprint:(id)arg0 depth:(NSUInteger)arg1 ;
-(id)snapLinesIncludingChildren:(BOOL)arg0 ;
-(void)endUpdates;
-(void)invalidateBlueprint;
-(void)invalidateBlueprintPosition;
-(void)invalidateDependentsOfComponentNode:(id)arg0 forDependencyResolver:(id)arg1 ;
-(void)invalidateDependentsOfInvalidatedComponents;
-(void)invalidatePositionForComponentWithIdentifier:(id)arg0 ;
-(void)invalidateSizeForComponentWithIdentifier:(id)arg0 ;
-(void)invalidateSizeForComponentWithIdentifier:(id)arg0 suggestedSize:(struct CGSize )arg1 ;
-(void)invalidateState:(id)arg0 forComponentWithIdentifier:(id)arg1 ;
-(void)registerLayout:(id)arg0 sizer:(id)arg1 forComponent:(id)arg2 ;
-(void)registerLayout:(id)arg0 sizer:(id)arg1 forComponent:(id)arg2 atIndex:(NSUInteger)arg3 ;
-(void)startUpdatesForWidth:(CGFloat)arg0 ;
-(void)storeComponentsFromBlueprint:(id)arg0 inDictionary:(id)arg1 ;
-(void)unregisterLayout:(id)arg0 ;
-(void)updatePosition:(struct CGPoint )arg0 forComponentWithIdentifier:(id)arg1 ;
-(void)updateSize:(struct CGSize )arg0 forComponentWithIdentifier:(id)arg1 ;


@end


#endif