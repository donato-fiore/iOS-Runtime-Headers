// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SADIAGLATENCYDIAGNOSTICREPORTDIAGNOSTICREPORT_H
#define SADIAGLATENCYDIAGNOSTICREPORTDIAGNOSTICREPORT_H

@class NSString, NSNumber, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SADIAGLatencyDiagnosticReportDiagnosticReport : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *latency;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *uri;
@property (copy, nonatomic) NSString *verb;


+(id)latencyDiagnosticReportDiagnosticReportWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif