// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CONTEXTPLUGIN_H
#define CONTEXTPLUGIN_H

@class NSMutableDictionary, LACachedExternalizedContext, NSDate, NSString, NSDictionary;
@protocol LAContextExternalizationProt, LAContextServerEvaluationProt;

#import <Foundation/Foundation.h>

#import "Module.h"

@interface ContextPlugin : NSObject <LAContextExternalizationProt, LAContextServerEvaluationProt>

 {
    NSMutableDictionary *_internalOperationOptions;
}


@property (readonly, nonatomic) LACachedExternalizedContext *cachedExternalizedContext; // ivar: _cachedExternalizedContext
@property (readonly, nonatomic) BOOL contextOwner; // ivar: _contextOwner
@property (readonly, nonatomic) NSDate *creationTime; // ivar: _creationTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int instanceId; // ivar: _instanceId
@property (readonly, nonatomic) Module *module; // ivar: _module
@property (retain, nonatomic) NSDictionary *resultInfo; // ivar: _resultInfo
@property (readonly) Class superclass;
@property (readonly, nonatomic) *void underlyingPtr; // ivar: _underlyingPtr


+(void)pluginWithExternalizedContext:(id)arg0 reply:(id)arg1 ;
-(id)createInternalInfo:(id)arg0 skipCallerIdentification:(BOOL)arg1 callerBundleId:(id)arg2 request:(id)arg3 originator:(id)arg4 ;
-(id)createInternalInfoWithPolicy:(NSInteger)arg0 policyOptions:(id)arg1 request:(id)arg2 originator:(id)arg3 ;
-(id)externalizationObserver;
-(id)externalizedContext;
-(id)initWithContextOwner:(BOOL)arg0 underlyingPtr:(*void)arg1 module:(id)arg2 ;
-(void)authMethodWithReply:(id)arg0 ;
-(void)checkCredentialSatisfied:(NSInteger)arg0 policy:(NSInteger)arg1 reply:(id)arg2 ;
-(void)credentialOfType:(NSInteger)arg0 originator:(id)arg1 reply:(id)arg2 ;
-(void)evaluateACL:(id)arg0 operation:(id)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 request:(id)arg5 reply:(id)arg6 ;
-(void)evaluatePolicy:(NSInteger)arg0 options:(id)arg1 uiDelegate:(id)arg2 originator:(id)arg3 request:(id)arg4 reply:(id)arg5 ;
-(void)externalizedContextWithReply:(id)arg0 ;
-(void)isCredentialSet:(NSInteger)arg0 originator:(id)arg1 reply:(id)arg2 ;
-(void)optionsForInternalOperation:(NSInteger)arg0 originator:(id)arg1 reply:(id)arg2 ;
-(void)pauseProcessedEvent:(NSInteger)arg0 pause:(BOOL)arg1 reply:(id)arg2 ;
-(void)performOp:(id)arg0 reply:(id)arg1 ;
-(void)resetEvent:(NSInteger)arg0 originator:(id)arg1 reply:(id)arg2 ;
-(void)retryEvent:(NSInteger)arg0 originator:(id)arg1 reply:(id)arg2 ;
-(void)setCredential:(id)arg0 type:(NSInteger)arg1 options:(id)arg2 originator:(id)arg3 reply:(id)arg4 ;
-(void)setExternalizationObserver:(id)arg0 ;
-(void)setOptions:(id)arg0 forInternalOperation:(NSInteger)arg1 originator:(id)arg2 reply:(id)arg3 ;
-(void)setShowingCoachingHint:(BOOL)arg0 event:(NSInteger)arg1 originator:(id)arg2 reply:(id)arg3 ;


@end


#endif