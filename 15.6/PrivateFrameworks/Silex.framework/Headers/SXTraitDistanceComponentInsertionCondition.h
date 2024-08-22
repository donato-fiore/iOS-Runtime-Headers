// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTRAITDISTANCECOMPONENTINSERTIONCONDITION_H
#define SXTRAITDISTANCECOMPONENTINSERTIONCONDITION_H

@class NSString, NSMutableIndexSet;
@protocol SXComponentInsertionCondition;

#import <Foundation/Foundation.h>


@interface SXTraitDistanceComponentInsertionCondition : NSObject <SXComponentInsertionCondition>



@property (readonly, nonatomic) NSUInteger componentTrait; // ivar: _componentTrait
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _SXConvertibleValue distance; // ivar: _distance
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger otherComponentTrait; // ivar: _otherComponentTrait
@property (retain, nonatomic) NSMutableIndexSet *otherTraitAreas; // ivar: _otherTraitAreas
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableIndexSet *traitAreas; // ivar: _traitAreas


-(BOOL)validateMarker:(id)arg0 componentTraits:(NSUInteger)arg1 layoutProvider:(id)arg2 ;
-(id)initWithTrait:(NSUInteger)arg0 otherTrait:(NSUInteger)arg1 distance:(struct _SXConvertibleValue )arg2 ;
-(void)insertedComponent:(id)arg0 approximateLocation:(struct CGPoint )arg1 ;
-(void)inspectTraitAreasForComponents:(id)arg0 layoutProvider:(id)arg1 ;
-(void)prepareWithComponents:(id)arg0 layoutProvider:(id)arg1 ;


@end


#endif