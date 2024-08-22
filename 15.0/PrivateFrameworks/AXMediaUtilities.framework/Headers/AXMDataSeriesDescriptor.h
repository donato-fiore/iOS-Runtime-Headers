// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMDATASERIESDESCRIPTOR_H
#define AXMDATASERIESDESCRIPTOR_H

@class NSArray, NSAttributedString, NSString;
@protocol AXMChartDictionaryRepresentable, NSCopying;

#import <Foundation/Foundation.h>

#import "AXMDataSummary.h"

@interface AXMDataSeriesDescriptor : NSObject <AXMChartDictionaryRepresentable, NSCopying>



@property (readonly, nonatomic) NSArray *additionalCategoricalValues;
@property (readonly, nonatomic) NSArray *additionalNumericalValues;
@property (copy, nonatomic) NSAttributedString *attributedName; // ivar: _attributedName
@property (copy, nonatomic) NSArray *dataPoints; // ivar: _dataPoints
@property (readonly, nonatomic) AXMDataSummary *dataSummary; // ivar: _dataSummary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isContinuous; // ivar: _isContinuous
@property (readonly, nonatomic) CGFloat maximumDataValueOnTimeAxis;
@property (readonly, nonatomic) NSString *meanValueDescription; // ivar: _meanValueDescription
@property (readonly, nonatomic) CGFloat minimumDataValueOnTimeAxis;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *xValues;
@property (readonly, nonatomic) NSArray *yValues;


-(id)_mutableArrayOfNSNullWithCount:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithAttributedName:(id)arg0 isContinuous:(BOOL)arg1 dataPoints:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithName:(id)arg0 isContinuous:(BOOL)arg1 dataPoints:(id)arg2 ;
-(id)numericalValuesFromDataPointValues:(id)arg0 ;
-(void)_commonInitWithContinuous:(BOOL)arg0 dataPoints:(id)arg1 ;


@end


#endif