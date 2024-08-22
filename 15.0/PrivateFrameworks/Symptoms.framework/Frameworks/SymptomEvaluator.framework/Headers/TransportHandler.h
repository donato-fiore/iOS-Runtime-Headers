// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSPORTHANDLER_H
#define TRANSPORTHANDLER_H


#import <Foundation/Foundation.h>

#import "ReporterFilter.h"

@interface TransportHandler : NSObject {
    *_transport_connection_s _connection;
    NSUInteger _connectionId;
    *unk _writeFn;
    unsigned int _ackId;
    BOOL _readOutstanding;
    BOOL _filterUpdateOutstanding;
    BOOL _disabled;
    BOOL _sendEventOnClose;
    unsigned int _reporterId;
    char * _reporterName;
    ? _auditToken;
    NSUInteger _pid;
    char * _processName;
    char * _bundleId;
    ReporterFilter *_reporterFilter;
    BOOL _verifiedDelegateSymptom;
    int _reporterVersion;
}




+(id)applicationStateMonitor;
+(void)initialize;
+(void)requestExplicitDisconnectSymptom:(NSUInteger)arg0 ;
+(void)updateFilters:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(void)_sendAck:(unsigned int)arg0 ;
-(void)_sendFilterUpdate;
-(void)connect:(struct _transport_connection_s *)arg0 connId:(NSUInteger)arg1 writefn:(*unk)arg2 auditToken:(struct ? )arg3 pid:(NSUInteger)arg4 name:(char *)arg5 verifiedDelegateSymptom:(BOOL)arg6 ;
-(void)dealloc;
-(void)didReceiveEvent:(id)arg0 ;
-(void)disconnect;
-(void)generateLibnetcoreSymptomSignpost:(id)arg0 ;
-(void)receivePayload:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)startRead;


@end


#endif