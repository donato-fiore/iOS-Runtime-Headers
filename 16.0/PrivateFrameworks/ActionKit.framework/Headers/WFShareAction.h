// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHAREACTION_H
#define WFSHAREACTION_H

@class WFAction, NSString;
@protocol WFAppListProvider, WFStandaloneShortcutAction, NSObject;



@interface WFShareAction : WFAction <WFAppListProvider, WFStandaloneShortcutAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NSObject> *supportedExtensionsChangedObserver; // ivar: _supportedExtensionsChangedObserver


+(id)sharedEnumerator;
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(id)anyExtensionBundleIdentifierForIdentifier:(id)arg0 extensionPointIdentifier:(id)arg1 isContentManaged:(BOOL)arg2 error:(*id)arg3 ;
-(id)appEnumerator;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)overrideExtensionIdentifier;
-(id)selectedIdentifier;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)dealloc;
-(void)generateStandaloneShortcutRepresentation:(id)arg0 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)showUIWithArchivedItems:(id)arg0 isContentManaged:(BOOL)arg1 extensionBundleIdentifier:(id)arg2 ;


@end


#endif