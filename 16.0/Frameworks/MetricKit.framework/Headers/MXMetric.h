// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXMETRIC_H
#define MXMETRIC_H

@class NSMeasurementFormatter;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXMetric : NSObject <NSSecureCoding>



@property (retain) NSMeasurementFormatter *measurementFormatter; // ivar: _measurementFormatter


+(BOOL)supportsSecureCoding;
-(id)DictionaryRepresentation;
-(id)JSONRepresentation;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif