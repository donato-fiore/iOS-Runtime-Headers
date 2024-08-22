// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSEXTENSIONSERVICE_H
#define INSEXTENSIONSERVICE_H

@class INCExtensionConnection, NSString, NSArray, INExtensionContext, NSDictionary;
@protocol INSAnalyticsObserver, INSAnalyticsDataSource, INSAppLaunchCommandDelegate, OS_dispatch_queue, INSExtensionServiceDelegate;

#import <Foundation/Foundation.h>


@interface INSExtensionService : NSObject <INSAnalyticsObserver, INSAnalyticsDataSource, INSAppLaunchCommandDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_requestDelegateQueue;
    INCExtensionConnection *_currentConnection;
    NSString *_currentBundleIdForDisplay;
}


@property (copy, nonatomic) NSArray *airPlayRouteIdentifiers;
@property (readonly, copy, nonatomic) NSArray *commandIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INSExtensionServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) INExtensionContext *extensionContext; // ivar: _extensionContext
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly) Class superclass;


-(BOOL)_errorImpliesCloudRelay:(id)arg0 ;
-(BOOL)_isVoiceShortcutsRemoteExecutionUnavailable:(id)arg0 ;
-(BOOL)_prewarmExtensionWithIntent:(id)arg0 applicationIdentifier:(id)arg1 command:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)_shouldPrepareAudioSessionForCommand:(id)arg0 intent:(id)arg1 ;
-(id)_connectionForIntent:(id)arg0 ;
-(id)_extensionInputItems;
-(id)_siriLanguageCode;
-(id)_updatedEventContextWithExtensionLoadType:(id)arg0 wasPrewarmed:(BOOL)arg1 ;
-(id)analytics:(id)arg0 contextDictionaryForCommand:(id)arg1 ;
-(id)analytics:(id)arg0 contextDictionaryForError:(id)arg1 ;
-(id)completionHandlerForAppLaunchCommand:(SEL)arg0 withCompletion:(id)arg1 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(void)_extensionRequestDidFinishForIntent:(id)arg0 error:(id)arg1 ;
-(void)_extensionRequestWillStartForIntent:(id)arg0 ;
-(void)_logEventWithType:(NSInteger)arg0 context:(id)arg1 contextNoCopy:(BOOL)arg2 ;
-(void)_logPrewarmDidEndWithCommand:(id)arg0 applicationIdentifier:(id)arg1 wasPrewarmed:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_requiresHandlingCommand:(id)arg0 completion:(id)arg1 ;
-(void)analytics:(id)arg0 needsToLogEventWithType:(NSInteger)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3 ;
-(void)handleCommand:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleCommand:(id)arg0 fromRemoteDevice:(id)arg1 completionHandler:(id)arg2 ;
-(void)resetExternalResources;


@end


#endif