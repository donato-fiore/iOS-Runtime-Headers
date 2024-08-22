// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFAUTOBUGCAPTUREREPORTER_H
#define EFAUTOBUGCAPTUREREPORTER_H

@class NSString, SDRDiagnosticReporter;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EFAutoBugCaptureReporter : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SDRDiagnosticReporter *diagnosticReporter; // ivar: _diagnosticReporter
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
+(id)sharedReporter;
-(id)init;
-(void)reportIssueType:(id)arg0 description:(id)arg1 ;


@end


#endif