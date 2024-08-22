// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTTRACECONFIG_H
#define PTTRACECONFIG_H

@class NSXPCConnection, NSString, NSURL, NSMutableArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PTTraceConfig : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger callstackSamplingRateMS; // ivar: _callstackSamplingRateMS
@property (nonatomic) BOOL compressWhenFinished; // ivar: _compressWhenFinished
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) BOOL includeKernelStacks; // ivar: _includeKernelStacks
@property (nonatomic) BOOL includeOSLogs; // ivar: _includeOSLogs
@property (nonatomic) BOOL includeOSSignposts; // ivar: _includeOSSignposts
@property (nonatomic) unsigned int kernelBufferDrainQoS; // ivar: _kernelBufferDrainQoS
@property (nonatomic) NSUInteger kernelBufferDrainRateMS; // ivar: _kernelBufferDrainRateMS
@property (nonatomic) NSUInteger kernelBufferSizeMB; // ivar: _kernelBufferSizeMB
@property (retain, nonatomic) NSString *ownerName; // ivar: _ownerName
@property (nonatomic) int ownerPID; // ivar: _ownerPID
@property (nonatomic) BOOL skipNotification; // ivar: _skipNotification
@property (nonatomic) NSUInteger source; // ivar: _source
@property (nonatomic) BOOL symbolicate; // ivar: _symbolicate
@property (retain, nonatomic) NSURL *traceDirectoryURL; // ivar: _traceDirectoryURL
@property (nonatomic) NSUInteger traceDurationSecs; // ivar: _traceDurationSecs
@property (retain, nonatomic) NSMutableArray *traceGroups; // ivar: _traceGroups
@property (retain, nonatomic) NSString *traceName; // ivar: _traceName
@property (nonatomic) NSUInteger traceTimeoutS; // ivar: _traceTimeoutS
@property (nonatomic) NSUInteger traceType; // ivar: _traceType
@property (nonatomic) BOOL useTraceRecord; // ivar: _useTraceRecord


+(BOOL)resetConfig;
+(BOOL)supportsSecureCoding;
+(id)configWithDictionary:(id)arg0 ;
+(id)configWithTemplate:(NSUInteger)arg0 ;
+(id)getCurrentConfig;
+(id)traceRecordConfigWithTemplate:(NSUInteger)arg0 ;
-(BOOL)storeConfig;
-(BOOL)validateConfig;
-(id)_getRemoteObjectProxy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_initConnection;
-(void)_invalidateSession;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif