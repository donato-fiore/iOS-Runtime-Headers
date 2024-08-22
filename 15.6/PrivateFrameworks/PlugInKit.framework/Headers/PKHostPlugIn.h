// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKHOSTPLUGIN_H
#define PKHOSTPLUGIN_H

@class NSDictionary, NSDate, NSURL, NSString, NSUserDefaults, NSUUID, NSBundle, NSXPCConnection, NSArray, Protocol, NSMutableSet;
@protocol PKPlugInPrivate, NSXPCConnectionDelegate, OS_dispatch_queue, PKCorePlugInProtocol, PKPlugIn;


#import "PKPlugInCore.h"

@interface PKHostPlugIn : PKPlugInCore <PKPlugInPrivate, NSXPCConnectionDelegate>



@property (retain) NSObject<OS_dispatch_queue> *_replyQueue; // ivar: __replyQueue
@property (retain) NSObject<OS_dispatch_queue> *_startQueue; // ivar: __startQueue
@property (retain) NSObject<OS_dispatch_queue> *_syncQueue; // ivar: __syncQueue
@property (readonly) BOOL active;
@property (readonly) NSDictionary *attributes;
@property (retain) NSDate *beganUsingAt; // ivar: _beganUsingAt
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSURL *containingUrl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *discoveryExtensions; // ivar: _discoveryExtensions
@property (readonly) NSUUID *effectiveUUID;
@property (retain) NSBundle *embeddedBundle; // ivar: _embeddedBundle
@property (retain) id *embeddedPrincipal; // ivar: _embeddedPrincipal
@property (readonly) NSDictionary *entitlements;
@property (retain) NSDictionary *environment; // ivar: _environment
@property (retain) NSDictionary *extensionState;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *identifier;
@property (readonly) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (retain) NSUUID *multipleInstanceUUID; // ivar: _multipleInstanceUUID
@property (copy) id *notificationBlock; // ivar: _notificationBlock
@property (readonly) BOOL onSystemVolume;
@property (readonly) NSDictionary *plugInDictionary;
@property (retain) id *plugInPrincipal; // ivar: _plugInPrincipal
@property (retain) NSXPCConnection *pluginConnection; // ivar: _pluginConnection
@property (copy) NSArray *preferredLanguages; // ivar: _preferredLanguages
@property (retain) id *queuedHostPrincipal; // ivar: _queuedHostPrincipal
@property (retain) Protocol *queuedHostProtocol; // ivar: _queuedHostProtocol
@property (readonly) NSMutableSet *requests; // ivar: _requests
@property (retain) NSArray *sandboxExtensions; // ivar: _sandboxExtensions
@property (retain) NSObject<PKCorePlugInProtocol> *service; // ivar: _service
@property (retain) NSString *serviceExtension; // ivar: _serviceExtension
@property (retain) NSDictionary *sourceForm; // ivar: _sourceForm
@property (readonly) BOOL spent;
@property NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (weak) NSObject<PKPlugIn> *supersededBy; // ivar: _supersededBy
@property (retain) NSUUID *supersedingUUID; // ivar: _supersedingUUID
@property (retain) NSObject<PKCorePlugInProtocol> *syncService; // ivar: _syncService
@property BOOL terminating; // ivar: _terminating
@property (readonly) NSDate *timestamp;
@property (readonly) NSURL *url;
@property unsigned int useCount; // ivar: _useCount
@property NSInteger userElection;
@property (readonly) NSUUID *uuid;
@property (readonly) NSString *version;


-(BOOL)beginUsingRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)beginUsingRequest:(id)arg0 withSubsystemOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)beginUsingWithError:(*id)arg0 ;
-(BOOL)beginUsingWithSubsystemOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)endUsingRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)endUsingWithError:(*id)arg0 ;
-(BOOL)isSandboxed;
-(BOOL)loadExtensions:(id)arg0 error:(*id)arg1 ;
-(BOOL)useBundle:(id)arg0 error:(*id)arg1 ;
-(id)createInstanceWithUUID:(id)arg0 ;
-(id)initWithForm:(id)arg0 ;
-(void)addRequest:(id)arg0 ;
-(void)beginUsing:(id)arg0 ;
-(void)beginUsingRequest:(id)arg0 completion:(id)arg1 ;
-(void)beginUsingRequest:(id)arg0 withSubsystemOptions:(id)arg1 completion:(id)arg2 ;
-(void)beginUsingWithSubsystemOptions:(id)arg0 completion:(id)arg1 ;
-(void)changeState:(NSUInteger)arg0 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)endUsing:(id)arg0 ;
-(void)endUsingRequest:(id)arg0 completion:(id)arg1 ;
-(void)messageTraceUsage;
-(void)preparePlugInUsingService:(id)arg0 completion:(id)arg1 ;
-(void)resume;
-(void)setBootstrapWithSubsystemOptions:(id)arg0 ;
-(void)setHostPrincipal:(id)arg0 withProtocol:(id)arg1 ;
-(void)setReplyQueue:(id)arg0 ;
-(void)startPlugInRequest:(id)arg0 synchronously:(BOOL)arg1 subsystemOptions:(id)arg2 completion:(id)arg3 ;
-(void)suspend;
-(void)unwind:(NSUInteger)arg0 force:(BOOL)arg1 ;
-(void)updateFromForm:(id)arg0 ;


@end


#endif