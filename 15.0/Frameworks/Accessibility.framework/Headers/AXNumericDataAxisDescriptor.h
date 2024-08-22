// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXNUMERICDATAAXISDESCRIPTOR_H
#define AXNUMERICDATAAXISDESCRIPTOR_H

@class NSAttributedString, NSString, NSArray;
@protocol AXDictionaryRepresentable, AXDataAxisDescriptor;

#import <Foundation/Foundation.h>

#import "AXScale.h"

@interface AXNumericDataAxisDescriptor : NSObject <AXDictionaryRepresentable, AXDataAxisDescriptor>



@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *gridlinePositions; // ivar: _gridlinePositions
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lowerBound; // ivar: _lowerBound
@property (retain, nonatomic) AXScale *scale; // ivar: _scale
@property (nonatomic) NSInteger scaleType; // ivar: _scaleType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) CGFloat upperBound; // ivar: _upperBound
@property (copy, nonatomic) id *valueDescriptionProvider; // ivar: _valueDescriptionProvider


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithAttributedTitle:(id)arg0 lowerBound:(CGFloat)arg1 upperBound:(CGFloat)arg2 gridlinePositions:(id)arg3 valueDescriptionProvider:(id)arg4 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTitle:(id)arg0 lowerBound:(CGFloat)arg1 upperBound:(CGFloat)arg2 gridlinePositions:(id)arg3 valueDescriptionProvider:(id)arg4 ;
-(void)_commonInitWithLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 gridlinePositions:(id)arg2 valueDescriptionProvider:(id)arg3 ;


@end


#endif