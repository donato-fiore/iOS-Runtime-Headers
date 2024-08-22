// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMCHARTDESCRIPTOR_H
#define AXMCHARTDESCRIPTOR_H

@class NSArray, NSAttributedString, NSString;
@protocol AXMChartDictionaryRepresentable, NSCopying, AXMDataAxisDescriptor;

#import <Foundation/Foundation.h>

#import "AXMNumericDataAxisDescriptor.h"
#import "AXMCategoricalDataAxisDescriptor.h"

@interface AXMChartDescriptor : NSObject <AXMChartDictionaryRepresentable, NSCopying>



@property (copy, nonatomic) NSArray *additionalAxes; // ivar: _additionalAxes
@property (copy, nonatomic) NSArray *annotations; // ivar: _annotations
@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (nonatomic) NSInteger contentDirection; // ivar: _contentDirection
@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AXMNumericDataAxisDescriptor *durationAxisDescriptor; // ivar: _durationAxisDescriptor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AXMNumericDataAxisDescriptor *pitchAxisDescriptor; // ivar: _pitchAxisDescriptor
@property (copy, nonatomic) NSArray *series; // ivar: _series
@property (copy, nonatomic) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;
@property (readonly, nonatomic) AXMCategoricalDataAxisDescriptor *timbreAxisDescriptor; // ivar: _timbreAxisDescriptor
@property (readonly, nonatomic) NSObject<AXMDataAxisDescriptor> *timeAxisDescriptor;
@property (readonly, nonatomic) AXMCategoricalDataAxisDescriptor *timeCategoricalAxisDescriptor; // ivar: _timeCategoricalAxisDescriptor
@property (readonly, nonatomic) AXMNumericDataAxisDescriptor *timeNumericAxisDescriptor; // ivar: _timeNumericAxisDescriptor
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) AXMNumericDataAxisDescriptor *volumeAxisDescriptor; // ivar: _volumeAxisDescriptor
@property (retain, nonatomic) NSObject<AXMDataAxisDescriptor> *xAxis; // ivar: _xAxis
@property (retain, nonatomic) AXMNumericDataAxisDescriptor *yAxis; // ivar: _yAxis


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithAttributedTitle:(id)arg0 summary:(id)arg1 xAxisDescriptor:(id)arg2 yAxisDescriptor:(id)arg3 additionalAxes:(id)arg4 series:(id)arg5 ;
-(id)initWithAttributedTitle:(id)arg0 summary:(id)arg1 xAxisDescriptor:(id)arg2 yAxisDescriptor:(id)arg3 series:(id)arg4 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTitle:(id)arg0 summary:(id)arg1 xAxisDescriptor:(id)arg2 yAxisDescriptor:(id)arg3 additionalAxes:(id)arg4 series:(id)arg5 ;
-(id)initWithTitle:(id)arg0 summary:(id)arg1 xAxisDescriptor:(id)arg2 yAxisDescriptor:(id)arg3 series:(id)arg4 ;
-(id)zCategoricalAxisDescriptor;
-(id)zNumericAxisDescriptor;
-(void)_commonInitWithSummary:(id)arg0 xAxisDescriptor:(id)arg1 yAxisDescriptor:(id)arg2 additionalAxes:(id)arg3 series:(id)arg4 ;
-(void)generateDataSummariesWithCompletion:(id)arg0 ;


@end


#endif