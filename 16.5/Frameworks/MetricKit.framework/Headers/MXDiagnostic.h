// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXDIAGNOSTIC_H
#define MXDIAGNOSTIC_H

@class NSString, NSMeasurementFormatter;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MXMetaData.h"

@interface MXDiagnostic : NSObject <NSSecureCoding>



@property (readonly) NSString *applicationVersion; // ivar: _applicationVersion
@property (retain) NSMeasurementFormatter *measurementFormatter; // ivar: _measurementFormatter
@property (retain) MXMetaData *metaData; // ivar: _metaData


+(BOOL)supportsSecureCoding;
-(id)JSONRepresentation;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetaData:(id)arg0 applicationVersion:(id)arg1 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif