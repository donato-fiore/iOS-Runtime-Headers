// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENEXPOSUREWINDOW_H
#define ENEXPOSUREWINDOW_H

@class NSDate, NSArray;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface ENExposureWindow : NSObject <CUXPCCodable>



@property (nonatomic) unsigned char calibrationConfidence; // ivar: _calibrationConfidence
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) unsigned int diagnosisReportType; // ivar: _diagnosisReportType
@property (nonatomic) unsigned int infectiousness; // ivar: _infectiousness
@property (copy, nonatomic) NSArray *scanInstances; // ivar: _scanInstances
@property (nonatomic) unsigned int variantOfConcernType; // ivar: _variantOfConcernType


-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif