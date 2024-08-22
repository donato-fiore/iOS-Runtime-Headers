// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXSERVICE_H
#define MXSERVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MXService : NSObject

@property (retain) NSString *currentClient; // ivar: _currentClient
@property (readonly) BOOL isStarted; // ivar: _isStarted
@property (readonly) NSInteger sourceID; // ivar: _sourceID


-(BOOL)diagnosticsAvailable;
-(BOOL)diagnosticsSupported;
-(BOOL)metricsAvailable;
-(BOOL)metricsSupported;
-(BOOL)startService;
-(BOOL)stopService;
-(id)getDiagnosticsForClient:(id)arg0 dateString:(id)arg1 ;
-(id)getMetricsForClient:(id)arg0 ;
-(id)init;
-(id)initWithSourceID:(NSInteger)arg0 ;
-(id)pruneSourceData:(id)arg0 ;


@end


#endif