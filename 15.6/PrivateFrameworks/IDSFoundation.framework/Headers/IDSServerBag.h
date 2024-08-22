// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSERVERBAG_H
#define IDSSERVERBAG_H

@class NSDictionary, NSNumber, NSString, NSData, IMConnectionMonitor, NSDate, NSMutableURLRequest, NSURL, NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IDSRemoteURLConnection.h"

@interface IDSServerBag : NSObject

@property (retain, setter=_setBag:) NSDictionary *_bag; // ivar: _bag
@property (retain) NSObject<OS_dispatch_queue> *_bagQueue; // ivar: _bagQueue
@property (retain) NSNumber *_cacheTime; // ivar: _cacheTime
@property (retain, setter=_setCachedBag:) NSDictionary *_cachedBag; // ivar: _cachedBag
@property (retain, setter=_setCachedHash:) NSString *_cachedHash; // ivar: _cachedHash
@property (retain, setter=_setCachedURLString:) NSString *_cachedURLString; // ivar: _cachedURLString
@property (retain) NSData *_certData; // ivar: _certData
@property (retain) IMConnectionMonitor *_connectionMonitor; // ivar: _connectionMonitor
@property (retain) NSDate *_loadDate; // ivar: _loadDate
@property (retain) IDSRemoteURLConnection *_remoteURLConnection; // ivar: _remoteURLConnection
@property (setter=_setTrustStatus:) int _trustStatus; // ivar: _trustStatus
@property (retain) NSMutableURLRequest *_urlRequest; // ivar: _urlRequest
@property BOOL allowSelfSignedCertificates; // ivar: _allowSelfSignedCertificates
@property BOOL allowUnsignedBags; // ivar: _allowUnsignedBags
@property (retain) NSString *apsEnvironmentName; // ivar: _apsEnvironmentName
@property (retain) NSURL *bagURL; // ivar: _bagURL
@property (copy) id *connectionMonitorCreationBlock; // ivar: _connectionMonitorCreationBlock
@property NSUInteger hasPairedDeviceState; // ivar: _hasPairedDeviceState
@property char hashAlgorithm; // ivar: _hashAlgorithm
@property (readonly) BOOL isInDebilitatedMode;
@property (readonly) BOOL isLoaded;
@property (readonly) BOOL isLoading;
@property (readonly) BOOL isServerAvailable;
@property (retain) NSMutableDictionary *overrideValues; // ivar: _overrideValues
@property (copy) id *remoteURLCreationBlock; // ivar: _remoteURLCreationBlock
@property (readonly) BOOL requiresIDSConnection;
@property (readonly) BOOL requiresIDSHost;
@property (retain) NSArray *serverCerts; // ivar: _serverCerts
@property (retain) NSData *serverGivenBag; // ivar: _serverGivenBag
@property (retain) NSData *serverSignature; // ivar: _serverSignature
@property int token; // ivar: _token


+(id)_sharedInstance;
+(id)_sharedInstanceForClass:(Class)arg0 ;
+(id)defaultBag;
+(id)sharedInstance;
+(id)sharedInstanceForBagType:(NSInteger)arg0 ;
-(BOOL)_allowInvalid;
-(BOOL)_allowedToLoadBag;
-(BOOL)_forceAllowBagLoading;
-(BOOL)_loadFromDictionary:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)_loadFromSignedDictionary:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)trustRefFromCertificates:(id)arg0 canReportFailure:(BOOL)arg1 trustRef:(struct __SecTrust **)arg2 ;
-(id)_initWithURL:(id)arg0 apsEnvironmentName:(id)arg1 allowSelfSignedCertificates:(BOOL)arg2 allowUnsignedBags:(BOOL)arg3 hashAlgorithm:(char)arg4 ;
// -(id)_initWithURL:(id)arg0 apsEnvironmentName:(id)arg1 allowSelfSignedCertificates:(BOOL)arg2 allowUnsignedBags:(BOOL)arg3 hashAlgorithm:(char)arg4 remoteURLCreationBlock:(id)arg5 connectionMonitorCreationBlock:(unk)arg6  ;
-(id)objectForKey:(id)arg0 ;
-(id)urlWithKey:(id)arg0 ;
-(void)__saveCacheToPrefs;
-(void)_cancelCurrentLoad;
-(void)_clearCache;
-(void)_clearOverrideValues;
-(void)_generateURLRequest;
-(void)_invalidate;
-(void)_loadFromCache;
-(void)_processBagResultData:(id)arg0 response:(id)arg1 inBackground:(BOOL)arg2 ;
-(void)_saveCacheToPrefs;
-(void)_saveToCache;
-(void)_setOverrideValue:(id)arg0 forKey:(id)arg1 ;
-(void)_startBagLoad:(BOOL)arg0 ;
-(void)connectionMonitorDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)forceBagLoad;
-(void)startBagLoad;


@end


#endif