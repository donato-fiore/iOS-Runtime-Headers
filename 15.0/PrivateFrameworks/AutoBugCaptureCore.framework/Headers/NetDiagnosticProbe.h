// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETDIAGNOSTICPROBE_H
#define NETDIAGNOSTICPROBE_H

@class NSString, NSMutableDictionary;
@protocol NetDiagnosticsShimDelegate;


#import "TestProbe.h"
#import "NetDiagnosticsShim.h"

@interface NetDiagnosticProbe : TestProbe <NetDiagnosticsShimDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *ndFilePath; // ivar: _ndFilePath
@property (retain, nonatomic) NetDiagnosticsShim *netDiags; // ivar: _netDiags
@property (retain, nonatomic) NSMutableDictionary *netDiagsTaskDict; // ivar: _netDiagsTaskDict
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *taskName; // ivar: _taskName


-(BOOL)netDiagnosticsTaskInProgress:(id)arg0 ;
-(BOOL)startNetDiagnosticsTask:(id)arg0 ;
-(BOOL)stopNetDiagnosticsTask:(id)arg0 ;
-(id)setUpDefaultTaskDictionary;
-(void)cancelTest:(id)arg0 ;
-(void)dealloc;
-(void)disconnectFromNetDiagnostics;


@end


#endif