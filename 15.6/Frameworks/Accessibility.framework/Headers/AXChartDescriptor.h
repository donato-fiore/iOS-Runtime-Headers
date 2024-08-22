// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXCHARTDESCRIPTOR_H
#define AXCHARTDESCRIPTOR_H

@class NSArray, NSAttributedString, NSString, NSUUID;
@protocol AXDictionaryRepresentable, NSCopying, AXDataAxisDescriptor;

#import <Foundation/Foundation.h>

#import "AXNumericDataAxisDescriptor.h"

@interface AXChartDescriptor : NSObject <AXDictionaryRepresentable, NSCopying>



@property (copy, nonatomic) NSArray *additionalAxes; // ivar: _additionalAxes
@property (copy, nonatomic) NSArray *annotations; // ivar: _annotations
@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (nonatomic) NSInteger contentDirection; // ivar: _contentDirection
@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *series; // ivar: _series
@property (copy, nonatomic) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSObject<AXDataAxisDescriptor> *xAxis; // ivar: _xAxis
@property (retain, nonatomic) AXNumericDataAxisDescriptor *yAxis; // ivar: _yAxis


-(id)_additionalCategoricalAxis;
-(id)_additionalNumericAxis;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithAttributedTitle:(id)arg0 summary:(id)arg1 xAxisDescriptor:(id)arg2 yAxisDescriptor:(id)arg3 additionalAxes:(id)arg4 series:(id)arg5 ;
-(id)initWithAttributedTitle:(id)arg0 summary:(id)arg1 xAxisDescriptor:(id)arg2 yAxisDescriptor:(id)arg3 series:(id)arg4 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTitle:(id)arg0 summary:(id)arg1 xAxisDescriptor:(id)arg2 yAxisDescriptor:(id)arg3 additionalAxes:(id)arg4 series:(id)arg5 ;
-(id)initWithTitle:(id)arg0 summary:(id)arg1 xAxisDescriptor:(id)arg2 yAxisDescriptor:(id)arg3 series:(id)arg4 ;
-(void)_commonInitWithSummary:(id)arg0 xAxisDescriptor:(id)arg1 yAxisDescriptor:(id)arg2 additionalAxes:(id)arg3 series:(id)arg4 ;
-(void)computeValueDescriptionsIfNeeded;


@end


#endif