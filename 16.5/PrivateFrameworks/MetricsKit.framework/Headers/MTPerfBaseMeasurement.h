// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPERFBASEMEASUREMENT_H
#define MTPERFBASEMEASUREMENT_H

@class NSMutableArray, NSArray, NSString, NSMutableDictionary;
@protocol MTPerfBaseMeasurementData, MTPerfBaseMeasurementTransformation;

#import <Foundation/Foundation.h>


@interface MTPerfBaseMeasurement : NSObject <MTPerfBaseMeasurementData>

 {
    NSMutableArray *_additionalData;
    NSArray *_eventData;
}


@property (readonly, copy, nonatomic) NSArray *additionalFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *eventData;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *measurementSpecificData; // ivar: _measurementSpecificData
@property (weak, nonatomic) NSObject<MTPerfBaseMeasurementTransformation> *measurementTransformer; // ivar: _measurementTransformer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *timestamps; // ivar: _timestamps


-(id)getAdditionalData;
-(id)initWithMeasurementTransformer:(id)arg0 eventData:(id)arg1 ;
-(id)metricsData;
-(id)record;
-(void)addFields:(id)arg0 ;
-(void)addFieldsWithDictionary:(id)arg0 ;
-(void)addFieldsWithPromise:(id)arg0 ;


@end


#endif