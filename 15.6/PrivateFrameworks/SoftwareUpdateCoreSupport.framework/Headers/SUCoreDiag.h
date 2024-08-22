// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCOREDIAG_H
#define SUCOREDIAG_H

@class NSString, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUCoreDiagStats.h"

@interface SUCoreDiag : NSObject

@property (retain, nonatomic) NSString *appendingDumpFilename; // ivar: _appendingDumpFilename
@property (nonatomic) BOOL isSharedDiag; // ivar: _isSharedDiag
@property (retain, nonatomic) NSString *lastReportedUUID; // ivar: _lastReportedUUID
@property (retain, nonatomic) SUCoreDiagStats *trackStats; // ivar: _trackStats
@property (retain, nonatomic) NSMutableArray *trackingHistory; // ivar: _trackingHistory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trackingQueue; // ivar: _trackingQueue
@property (retain, nonatomic) NSString *uniqueInstanceName; // ivar: _uniqueInstanceName


+(id)sharedDiag;
-(NSInteger)allIndications;
-(id)_copyTrackedStatsClearingAfter:(BOOL)arg0 droppingMatchedIndications:(NSInteger)arg1 ;
-(id)_dumpMaskToString:(NSInteger)arg0 ;
-(id)copyTrackedStatsClearingAfter:(BOOL)arg0 ;
-(id)copyTrackedStatsClearingAfter:(BOOL)arg0 droppingMatchedIndications:(NSInteger)arg1 ;
-(id)initWithAppendedDomain:(id)arg0 appendingDumpFilename:(id)arg1 ;
-(id)instanceName;
-(id)loadDump:(id)arg0 ;
-(void)_appendToHistory:(id)arg0 ;
-(void)_dumpEvent:(id)arg0 ;
-(void)_dumpToFile:(id)arg0 dumpingDict:(id)arg1 forReason:(id)arg2 ;
-(void)_dumpTracked:(id)arg0 dumpingTo:(NSInteger)arg1 usingFilename:(id)arg2 clearingStatistics:(BOOL)arg3 clearingHistory:(BOOL)arg4 ;
-(void)_logTrackedError:(id)arg0 fromLocation:(id)arg1 forReason:(id)arg2 withResult:(NSInteger)arg3 withError:(id)arg4 ;
-(void)collectTrackedStatsClearingAfter:(BOOL)arg0 completion:(id)arg1 ;
-(void)collectTrackedStatsClearingAfter:(BOOL)arg0 droppingMatchedIndications:(NSInteger)arg1 completion:(id)arg2 ;
-(void)dumpTracked:(id)arg0 dumpingTo:(NSInteger)arg1 usingFilename:(id)arg2 clearingStatistics:(BOOL)arg3 clearingHistory:(BOOL)arg4 ;
-(void)trackAnomaly:(id)arg0 forReason:(id)arg1 withResult:(NSInteger)arg2 withError:(id)arg3 ;
-(void)trackBegin:(id)arg0 ;
-(void)trackBegin:(id)arg0 atLevel:(int)arg1 ;
-(void)trackBegin:(id)arg0 atLevel:(int)arg1 forModule:(id)arg2 ;
-(void)trackBegin:(id)arg0 atLevel:(int)arg1 forModule:(id)arg2 withIdentifier:(id)arg3 ;
-(void)trackEnd:(id)arg0 ;
-(void)trackEnd:(id)arg0 atLevel:(int)arg1 ;
-(void)trackEnd:(id)arg0 atLevel:(int)arg1 forModule:(id)arg2 ;
-(void)trackEnd:(id)arg0 atLevel:(int)arg1 forModule:(id)arg2 withIdentifier:(id)arg3 withResult:(NSInteger)arg4 withError:(id)arg5 ;
-(void)trackEnd:(id)arg0 atLevel:(int)arg1 forModule:(id)arg2 withResult:(NSInteger)arg3 withError:(id)arg4 ;
-(void)trackEnd:(id)arg0 atLevel:(int)arg1 withResult:(NSInteger)arg2 withError:(id)arg3 ;
-(void)trackEnd:(id)arg0 withResult:(NSInteger)arg1 withError:(id)arg2 ;
-(void)trackError:(id)arg0 forReason:(id)arg1 withResult:(NSInteger)arg2 withError:(id)arg3 ;
-(void)trackFailure:(id)arg0 forReason:(id)arg1 withResult:(NSInteger)arg2 withError:(id)arg3 ;
-(void)trackFault:(id)arg0 forReason:(id)arg1 withResult:(NSInteger)arg2 withError:(id)arg3 ;
-(void)trackLastReportedUUID:(id)arg0 ;
-(void)trackStateEvent:(id)arg0 previousState:(id)arg1 handlingEvent:(id)arg2 nextState:(id)arg3 performingAction:(id)arg4 withInfo:(id)arg5 ;


@end


#endif