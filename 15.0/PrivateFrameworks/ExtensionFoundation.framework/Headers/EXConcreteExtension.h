// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EXCONCRETEEXTENSION_H
#define EXCONCRETEEXTENSION_H

@class NSExtension, NSString, NSDictionary, NSSet, NSBundle, NSMutableDictionary, NSUUID;
@protocol PKPlugIn;



@interface EXConcreteExtension : NSExtension {
    os_unfair_lock_s _unfairLock;
    NSString *_identifier;
    NSString *_version;
    NSDictionary *_attributes;
    NSDictionary *_infoDictionary;
    NSString *_extensionPointIdentifier;
    id *_requestCompletionBlock;
    id *_requestCancellationBlock;
    id *_requestInterruptionBlock;
}


@property (copy, nonatomic, setter=_setAllowedErrorClasses:) NSSet *_allowedErrorClasses; // ivar: __allowedErrorClasses
@property (readonly, retain, nonatomic) NSBundle *_extensionBundle; // ivar: __extensionBundle
@property (retain, nonatomic, setter=_setExtensionContexts:) NSMutableDictionary *_extensionContexts; // ivar: __extensionContexts
@property (retain, nonatomic, setter=_setExtensionExpirationsIdentifiers:) NSMutableDictionary *_extensionExpirationIdentifiers; // ivar: __extensionExpirationIdentifiers
@property (retain, nonatomic, setter=_setExtensionServiceConnections:) NSMutableDictionary *_extensionServiceConnections; // ivar: __extensionServiceConnections
@property (copy, nonatomic, getter=_extensionState, setter=_setExtensionState:) NSDictionary *_extensionState;
@property (readonly, copy) NSString *_localizedName; // ivar: __localizedName
@property (readonly, copy) NSString *_localizedShortName; // ivar: __localizedShortName
@property (retain, setter=_setPlugIn:) NSObject<PKPlugIn> *_plugIn; // ivar: __plugIn
@property (copy) id *_requestPostCompletionBlock; // ivar: __requestPostCompletionBlock
@property (copy) id *_requestPostCompletionBlockWithItems; // ivar: __requestPostCompletionBlockWithItems
@property (retain) id *_stashedPlugInConnection; // ivar: __stashedPlugInConnection
@property (copy, nonatomic) NSUUID *connectionUUID; // ivar: _connectionUUID
@property (nonatomic, getter=_isObservingHostAppStateChanges, setter=_setObservingHostAppStateChanges:) BOOL observingHostAppStateChanges; // ivar: _observingHostAppStateChanges
@property (readonly) CGFloat requestTeardownDelay;
@property (nonatomic) NSInteger wantsDedicatedQueue; // ivar: _wantsDedicatedQueue


+(BOOL)_evaluateActivationRule:(id)arg0 withDictionaryIfItMatchesActiveWebPageAlternative:(id)arg1 matchResult:(*NSInteger)arg2 ;
+(BOOL)_evaluateActivationRule:(id)arg0 withInputItemsIfTheyMatchActiveWebPageAlternative:(id)arg1 matchResult:(*NSInteger)arg2 ;
+(BOOL)_evaluateActivationRuleWithoutWorkarounds:(id)arg0 withExtensionItemsRepresentation:(id)arg1 ;
// +(BOOL)_genericValuesMatchActiveWebPageAlternativeWithExtensionItems:(id)arg0 attachmentsLens:(id)arg1 registeredTypeIdentifiersLens:(unk)arg2 isActiveWebPageAttachmentCheck:(id)arg3  ;
+(BOOL)_inputItemsMatchActiveWebPageAlternative:(id)arg0 ;
+(BOOL)_matchingDictionaryMatchesActiveWebPageAlternative:(id)arg0 ;
+(BOOL)_shouldLogExtensionDiscovery;
+(BOOL)evaluateActivationRule:(id)arg0 withExtensionItemsRepresentation:(id)arg1 ;
+(id)_dictionaryIncludingOnlyItemsWithRegisteredTypeIdentifier:(id)arg0 fromMatchingDictionary:(id)arg1 ;
+(id)_inputItemsByApplyingActiveWebPageAlternative:(id)arg0 ifNeededByActivationRule:(id)arg1 ;
+(id)beginMatchingExtensionsWithAttributes:(id)arg0 completion:(id)arg1 ;
+(id)extensionWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)extensionWithIdentifier:(id)arg0 excludingDisabledExtensions:(BOOL)arg1 error:(*id)arg2 ;
+(id)extensionsWithMatchingAttributes:(id)arg0 error:(*id)arg1 ;
+(id)globalStateQueueForExtension:(id)arg0 ;
+(id)predicateForActivationRule:(id)arg0 ;
+(void)endMatchingExtensions:(id)arg0 ;
+(void)extensionWithURL:(id)arg0 completion:(id)arg1 ;
+(void)extensionWithUUID:(id)arg0 completion:(id)arg1 ;
+(void)extensionsWithMatchingAttributes:(id)arg0 completion:(id)arg1 ;
+(void)extensionsWithMatchingAttributes:(id)arg0 synchronously:(BOOL)arg1 completion:(id)arg2 ;
+(void)initialize;
+(void)initializeFiltering;
-(BOOL)_beginUsingAndCreateExtensionAssertionWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)_isMarkedNew;
-(BOOL)_isPhotoServiceAccessGranted;
-(BOOL)_isSystemExtension;
-(BOOL)_wantsProcessPerRequest;
-(BOOL)attemptOptIn:(*id)arg0 ;
-(BOOL)attemptOptOut:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)makeExtensionContextAndXPCConnectionForRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)optedIn;
-(BOOL)validateRequest:(id)arg0 error:(*id)arg1 ;
-(Class)_hostContextClass;
-(NSUInteger)hash;
-(id)_allowedItemPayloadClasses;
-(id)_bareExtensionServiceConnection;
-(id)_beginExtensionRequest:(id)arg0 error:(*id)arg1 ;
-(id)_extensionContextForUUID:(id)arg0 ;
-(id)_initWithPKPlugin:(id)arg0 ;
-(id)_itemProviderForPayload:(id)arg0 extensionContext:(id)arg1 ;
-(id)attributes;
-(id)beginExtensionRequestWithInputItems:(id)arg0 error:(*id)arg1 ;
-(id)beginExtensionRequestWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 error:(*id)arg2 ;
-(id)beginExtensionRequestWithOptions:(NSUInteger)arg0 inputItems:(id)arg1 error:(*id)arg2 ;
-(id)beginExtensionRequestWithOptions:(NSUInteger)arg0 inputItems:(id)arg1 listenerEndpoint:(id)arg2 error:(*id)arg3 ;
-(id)description;
-(id)extensionContexts;
-(id)extensionPointIdentifier;
-(id)icons;
-(id)identifier;
-(id)infoDictionary;
-(id)init;
-(id)objectForInfoDictionaryKey:(id)arg0 ;
-(id)requestCancellationBlock:(SEL)arg0 ;
-(id)requestCompletionBlock:(SEL)arg0 ;
-(id)requestInterruptionBlock:(SEL)arg0 ;
-(id)version;
-(int)pidForRequestIdentifier:(id)arg0 ;
-(void)_beginExtensionRequest:(id)arg0 completion:(id)arg1 ;
-(void)_cancelRequestWithError:(id)arg0 forExtensionContextWithUUID:(id)arg1 completion:(id)arg2 ;
-(void)_completeRequestReturningItems:(id)arg0 forExtensionContextWithUUID:(id)arg1 completion:(id)arg2 ;
-(void)_didCreateExtensionContext:(id)arg0 ;
-(void)_didShowExtensionManagementInterface;
-(void)_didShowNewExtensionIndicator;
-(void)_dropAssertion;
-(void)_hostDidBecomeActiveNote:(id)arg0 ;
-(void)_hostDidEnterBackgroundNote:(id)arg0 ;
-(void)_hostWillEnterForegroundNote:(id)arg0 ;
-(void)_hostWillResignActiveNote:(id)arg0 ;
-(void)_kill:(int)arg0 ;
-(void)_loadItemForPayload:(id)arg0 contextIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)_loadPreviewImageForPayload:(id)arg0 contextIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)_openURL:(id)arg0 completion:(id)arg1 ;
-(void)_reallyBeginExtensionRequest:(id)arg0 completion:(id)arg1 ;
-(void)_reallyBeginExtensionRequest:(id)arg0 synchronously:(BOOL)arg1 completion:(id)arg2 ;
-(void)_resetExtensionState;
-(void)_safelyBeginUsing:(id)arg0 ;
-(void)_safelyBeginUsingSynchronously:(BOOL)arg0 request:(id)arg1 readyHandler:(id)arg2 ;
-(void)_safelyBeginUsingWithRequest:(id)arg0 readyHandler:(id)arg1 ;
-(void)_safelyEndUsing:(id)arg0 ;
-(void)_safelyEndUsingRequestWithPKUUID:(id)arg0 processAssertion:(id)arg1 continuation:(id)arg2 ;
-(void)beginExtensionRequestWithInputItems:(id)arg0 completion:(id)arg1 ;
-(void)beginExtensionRequestWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 completion:(id)arg2 ;
-(void)beginExtensionRequestWithOptions:(NSUInteger)arg0 inputItems:(id)arg1 completion:(id)arg2 ;
-(void)beginExtensionRequestWithOptions:(NSUInteger)arg0 inputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(id)arg3 ;
-(void)cancelExtensionRequestWithIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)setRequestCancellationBlock:(id)arg0 ;
-(void)setRequestCompletionBlock:(id)arg0 ;
-(void)setRequestInterruptionBlock:(id)arg0 ;


@end


#endif