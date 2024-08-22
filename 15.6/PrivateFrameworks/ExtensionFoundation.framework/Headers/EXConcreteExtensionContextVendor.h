// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXCONCRETEEXTENSIONCONTEXTVENDOR_H
#define EXCONCRETEEXTENSIONCONTEXTVENDOR_H

@class NSExtensionContextVendor, NSMutableDictionary, NSString;
@protocol NSXPCListenerDelegate, EXExtensionContextVending;



@interface EXConcreteExtensionContextVendor : NSExtensionContextVendor <NSXPCListenerDelegate, EXExtensionContextVending>



@property (retain, nonatomic, setter=_setExtensionContexts:) NSMutableDictionary *_extensionContexts; // ivar: __extensionContexts
@property (retain, nonatomic, setter=_setExtensionPrincipalObjects:) NSMutableDictionary *_extensionPrincipalObjects; // ivar: __extensionPrincipalObjects
@property (retain, nonatomic, setter=_setExtensionServiceConnections:) NSMutableDictionary *_extensionServiceConnections; // ivar: __extensionServiceConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)_extensionContextClass;
+(Class)_extensionPrincipalClass;
+(id)_allowedItemPayloadClasses;
+(id)_completionConcurrentQueue;
+(id)_expirationConcurrentQueue;
+(id)_extensionDictionary;
+(id)_extensionMainStoryboard;
+(void)_startListening;
+(void)_startListening:(BOOL)arg0 ;
-(BOOL)_shouldCreatePrincipalObject;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_extensionContextForUUID:(id)arg0 ;
-(id)init;
-(void)_beginRequestWithExtensionItems:(id)arg0 listenerEndpoint:(id)arg1 withContextUUID:(id)arg2 completion:(id)arg3 ;
-(void)_hostDidBecomeActiveForContextUUID:(id)arg0 completion:(id)arg1 ;
-(void)_hostDidEnterBackgroundForContextUUID:(id)arg0 completion:(id)arg1 ;
-(void)_hostWillEnterForegroundForContextUUID:(id)arg0 completion:(id)arg1 ;
-(void)_hostWillResignActiveForContextUUID:(id)arg0 completion:(id)arg1 ;
-(void)_onGlobalStateQueueOnly_setPrincipalObject:(id)arg0 forUUID:(id)arg1 ;
-(void)_setPrincipalObject:(id)arg0 forUUID:(id)arg1 ;
-(void)_tearDownContextWithUUID:(id)arg0 ;


@end


#endif