// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNDATADETECTORRESULT_H
#define VNDATADETECTORRESULT_H

@class BCSDetectedCode, DDScannerResult, NSString;

#import <Foundation/Foundation.h>

#import "VNObservation.h"

@interface VNDataDetectorResult : NSObject

@property (retain, nonatomic) BCSDetectedCode *detectedBarcodeSupportCode; // ivar: _detectedBarcodeSupportCode
@property (retain, nonatomic) VNObservation *originalObservation; // ivar: _originalObservation
@property (retain, nonatomic) DDScannerResult *scannerResult; // ivar: _scannerResult
@property (retain, nonatomic) NSString *shortDescription; // ivar: _shortDescription
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSString *value; // ivar: _value


-(id)debugDescription;
-(id)initWithBCSDetectedCode:(id)arg0 description:(id)arg1 observation:(id)arg2 ;
-(id)initWithDDScannerResult:(id)arg0 observation:(id)arg1 ;


@end


#endif