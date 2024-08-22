// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNCLIENTCONNECTION_H
#define LNCLIENTCONNECTION_H

@class NSString, NSMapTable, NSXPCConnection;
@protocol LNConnectionHostInterface, LNPerformActionOperationDelegate;

#import <Foundation/Foundation.h>

#import "LNAppContext.h"

@interface LNClientConnection : NSObject <LNConnectionHostInterface, LNPerformActionOperationDelegate>



@property (readonly, nonatomic) LNAppContext *appContext; // ivar: _appContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *performActionOperations; // ivar: _performActionOperations
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(struct ? *)currentAuditToken;
-(id)initWithConnection:(id)arg0 appContext:(id)arg1 ;
-(void)dealloc;
-(void)enqueuePerformActionOperation:(id)arg0 ;
-(void)fetchActionAppContextFromAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchActionForAutoShortcutPhrase:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchActionOutputValueWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDestinationMDMAccountIdentifierForAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDisplayRepresentationForActions:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchMetadataWithCompletionHandler:(id)arg0 ;
-(void)fetchOptionsDefaultValuesForAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchOptionsForActionMetadata:(id)arg0 parameterMetadata:(id)arg1 searchTerm:(id)arg2 localeIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)fetchParameterOptionDefaultValueForActionMetadata:(id)arg0 parameterIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchStructuredDataWithTypeIdentifier:(NSInteger)arg0 forEntityIdentifiers:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchSuggestedActionsForStartWorkoutAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSuggestedActionsWithSiriLanguageCode:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSuggestedFocusActionsForActionMetadata:(id)arg0 suggestionContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchViewActionsWithCompletionHandler:(id)arg0 ;
-(void)fetchViewEntitiesWithInteractionIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)getListenerEndpointWithCompletionHandler:(id)arg0 ;
-(void)performAction:(id)arg0 options:(id)arg1 executor:(id)arg2 completionHandler:(id)arg3 ;
-(void)performActionOperation:(id)arg0 didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)performPropertyQuery:(id)arg0 completionHandler:(id)arg1 ;
-(void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(id)arg0 completionHandler:(id)arg1 ;
-(void)performSuggestedResultsQueryWithEntityType:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePerformActionOperation:(id)arg0 ;


@end


#endif