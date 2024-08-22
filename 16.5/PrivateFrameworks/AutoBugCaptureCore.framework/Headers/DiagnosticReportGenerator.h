// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIAGNOSTICREPORTGENERATOR_H
#define DIAGNOSTICREPORTGENERATOR_H

@protocol DiagnosticReportGeneratorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DiagnosticCase.h"

@interface DiagnosticReportGenerator : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (weak, nonatomic) NSObject<DiagnosticReportGeneratorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) DiagnosticCase *diagCase; // ivar: _diagCase
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL reportGenerated; // ivar: _reportGenerated
@property (nonatomic) CGFloat timeoutSeconds; // ivar: _timeoutSeconds


-(BOOL)generateReportForCase:(id)arg0 reportName:(id)arg1 ;
-(BOOL)generateReportForCase:(id)arg0 reportName:(id)arg1 completion:(id)arg2 ;
-(BOOL)startReportGeneration;
-(id)initWithQueue:(id)arg0 ;
-(void)setDefaults;


@end


#endif