// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSLAYOUTANCHOR_H
#define NSLAYOUTANCHOR_H

@class NSString;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "NSISVariable.h"

@interface NSLayoutAnchor : NSObject <NSCopying, NSCoding>

 {
    id *_referenceItem;
    NSInteger _attr;
    NSISVariable *_variable;
    NSString *_name;
    id *_cachedReferenceItems;
    id *_reserved;
    BOOL _type;
    BOOL _reserved3;
}




+(id)_anchorForItem:(id)arg0 attribute:(NSInteger)arg1 ;
+(id)anchorNamed:(id)arg0 inItem:(id)arg1 ;
+(id)anchorNamed:(id)arg0 inItem:(id)arg1 symbolicAttribute:(NSInteger)arg2 ;
+(id)anchorWithItem:(id)arg0 attribute:(NSInteger)arg1 ;
+(id)anchorWithName:(id)arg0 forReferenceView:(id)arg1 ;
+(id)anchorWithName:(id)arg0 forReferenceView:(id)arg1 symbolicAttribute:(NSInteger)arg2 ;
+(id)layoutAnchorWithItem:(id)arg0 attribute:(NSInteger)arg1 ;
+(id)layoutAnchorWithName:(id)arg0 forReferenceView:(id)arg1 ;
-(BOOL)hasAmbiguousLayout;
-(BOOL)isCompatibleWithAnchor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)nsli_lowerIntoExpression:(id)arg0 withCoefficient:(CGFloat)arg1 forConstraint:(id)arg2 ;
-(BOOL)validateOtherAttribute:(NSInteger)arg0 ;
-(CGFloat)_valueInEngine:(id)arg0 ;
-(CGFloat)valueInItem:(id)arg0 ;
-(NSInteger)_anchorType;
-(NSInteger)_constraintAttribute;
-(NSInteger)_proxiedAttribute;
-(NSUInteger)hash;
-(id)_constituentAnchors;
-(id)_constraintItem;
-(id)_equationDescriptionInParent;
-(id)_equationDescriptionLegendEntries;
-(id)_expressionInContext:(struct ? )arg0 ;
-(id)_expressionInDefaultContextWithEngine:(id)arg0 ;
-(id)_nearestAncestorLayoutItem;
-(id)_proxiedItem;
-(id)_referenceItem;
-(id)_referenceView;
-(id)_referencedLayoutItems;
-(id)_referencingConstraints;
-(id)_variableName;
-(id)anchorWithName:(id)arg0 ;
-(id)anchorWithName:(id)arg0 referenceItem:(id)arg1 symbolicAttribute:(NSInteger)arg2 ;
-(id)constraintEqualToAnchor:(id)arg0 ;
-(id)constraintEqualToAnchor:(id)arg0 constant:(CGFloat)arg1 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg0 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg0 constant:(CGFloat)arg1 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg0 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg0 constant:(CGFloat)arg1 ;
-(id)constraintsAffectingLayout;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)equationDescription;
-(id)init;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIndependentVariableName:(id)arg0 item:(id)arg1 symbolicAttribute:(NSInteger)arg2 ;
-(id)initWithItem:(id)arg0 attribute:(NSInteger)arg1 ;
-(id)initWithName:(id)arg0 referenceItem:(id)arg1 symbolicAttribute:(NSInteger)arg2 ;
-(id)item;
-(id)name;
-(id)observableValueInItem:(id)arg0 ;
-(id)ruleEqualToAnchor:(id)arg0 ;
-(id)ruleEqualToAnchor:(id)arg0 constant:(CGFloat)arg1 ;
-(id)ruleEqualToAnchor:(id)arg0 constant:(CGFloat)arg1 priority:(float)arg2 identifier:(id)arg3 ;
-(id)ruleGreaterThanOrEqualToAnchor:(id)arg0 ;
-(id)ruleGreaterThanOrEqualToAnchor:(id)arg0 constant:(CGFloat)arg1 ;
-(id)ruleGreaterThanOrEqualToAnchor:(id)arg0 constant:(CGFloat)arg1 priority:(float)arg2 identifier:(id)arg3 ;
-(id)ruleLessThanOrEqualToAnchor:(id)arg0 ;
-(id)ruleLessThanOrEqualToAnchor:(id)arg0 constant:(CGFloat)arg1 ;
-(id)ruleLessThanOrEqualToAnchor:(id)arg0 constant:(CGFloat)arg1 priority:(float)arg2 identifier:(id)arg3 ;
-(void)_accumulateReferenceLayoutItemsIntoTable:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif