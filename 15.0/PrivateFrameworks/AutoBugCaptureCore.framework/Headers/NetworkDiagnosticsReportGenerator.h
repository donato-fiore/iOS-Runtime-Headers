// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETWORKDIAGNOSTICSREPORTGENERATOR_H
#define NETWORKDIAGNOSTICSREPORTGENERATOR_H

@class NSString, NSDictionary, NSMutableDictionary, NSDate;
@protocol NetDiagnosticsShimDelegate;


#import "DiagnosticReportGenerator.h"
#import "NetDiagnosticsShim.h"

@interface NetworkDiagnosticsReportGenerator : DiagnosticReportGenerator <NetDiagnosticsShimDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NetDiagnosticsShim *netDiags; // ivar: _netDiags
@property (retain, nonatomic) NSDictionary *netDiagsResults; // ivar: _netDiagsResults
@property (retain, nonatomic) NSMutableDictionary *options; // ivar: _options
@property (retain, nonatomic) NSDate *reportStart; // ivar: _reportStart
@property (readonly) Class superclass;


-(BOOL)startNetDiagnosticsTaskWithReply:(id)arg0 ;
-(BOOL)startReportGeneration;
-(id)createDefaultTaskDictionaryWithTaskName:(char *)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg0 toStatus:(int)arg1 ;


@end


#endif