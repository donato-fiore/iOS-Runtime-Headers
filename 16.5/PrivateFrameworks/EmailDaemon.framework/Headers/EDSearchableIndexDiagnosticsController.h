// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSEARCHABLEINDEXDIAGNOSTICSCONTROLLER_H
#define EDSEARCHABLEINDEXDIAGNOSTICSCONTROLLER_H

@class NSString, NSBackgroundActivityScheduler;
@protocol EFLoggable, EFCancelable;

#import <Foundation/Foundation.h>

#import "EDSearchableIndexPersistence.h"

@interface EDSearchableIndexDiagnosticsController : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSBackgroundActivityScheduler *indexingDiagnosticsScheduler; // ivar: _indexingDiagnosticsScheduler
@property (retain, nonatomic) EDSearchableIndexPersistence *persistence; // ivar: _persistence
@property (retain, nonatomic) NSObject<EFCancelable> *stateCancelable; // ivar: _stateCancelable
@property (readonly) Class superclass;


+(id)log;
-(id)_debuggingDiagnostics;
-(id)initWithPersistence:(id)arg0 ;
-(void)_logDebuggingDiagnostics:(id)arg0 ;
-(void)_registerDebuggingDiagnosticsCaptureHandler;
-(void)_startLoggingDebuggingDiagnostics;
-(void)_stopCollection;
-(void)_stopLoggingDebuggingDiagnostics;
-(void)_unregisterDebuggingDiagnosticsCaptureHandler;
-(void)dealloc;
-(void)startCollection;


@end


#endif