// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFMEASUREMENTFORMATTER_H
#define HFMEASUREMENTFORMATTER_H

@class NSMeasurementFormatter, NSString;
@protocol HFUnitFormatter;



@interface HFMeasurementFormatter : NSMeasurementFormatter <HFUnitFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *measurementBlock; // ivar: _measurementBlock
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unitDescription;


-(id)init;
-(id)initWithMeasurementBlock:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 withUnit:(BOOL)arg1 ;


@end


#endif