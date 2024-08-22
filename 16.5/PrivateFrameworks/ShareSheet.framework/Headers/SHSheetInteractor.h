// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETINTERACTOR_H
#define SHSHEETINTERACTOR_H

@class SFCollaborationPerformer, NSString;
@protocol SHSheetServiceManagerDelegate, SHSheetSessionDelegate, SHSheetActivityPerformerDelegate, SFCollaborationPerformerDelegate, SFCollaborationCreationDelegate, SHSheetInteractor, SHSheetActivityPerformerPresentationInterface, SHSheetInteractorDelegate;

#import <Foundation/Foundation.h>

#import "SHSheetActivityPerformer.h"
#import "SHSheetServiceManager.h"
#import "SHSheetSession.h"

@interface SHSheetInteractor : NSObject <SHSheetServiceManagerDelegate, SHSheetSessionDelegate, SHSheetActivityPerformerDelegate, SFCollaborationPerformerDelegate, SFCollaborationCreationDelegate, SHSheetInteractor>



@property (retain, nonatomic) SHSheetActivityPerformer *activityPerformer; // ivar: _activityPerformer
@property (weak, nonatomic) NSObject<SHSheetActivityPerformerPresentationInterface> *activityPresentationController; // ivar: _activityPresentationController
@property (retain, nonatomic) SFCollaborationPerformer *collaborationPerformer; // ivar: _collaborationPerformer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHSheetInteractorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSessionStarted;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SHSheetServiceManager *serviceManager; // ivar: _serviceManager
@property (retain, nonatomic) SHSheetSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)_prepareActivityProxyForRequest:(id)arg0 ;
-(id)collaborationServiceForActivityPerformer:(id)arg0 ;
-(id)collaborationServiceForSession:(id)arg0 ;
-(id)collaborationSharingResultForActivity:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)linkMetadataForActivityPerformer:(id)arg0 ;
-(id)serviceManager:(id)arg0 identificationResultsFromSuggestedImageData:(id)arg1 ;
-(void)_deleteSharingURL:(id)arg0 ;
-(void)_didPerformActivityWithResult:(id)arg0 ;
-(void)_performActivity:(id)arg0 ;
-(void)_recordActivityInteractionForResult:(id)arg0 ;
-(void)_recordActivityViewControllerInteraction;
-(void)_runActivity:(id)arg0 ;
-(void)_setupServiceManagerIfNeeded;
-(void)addParticipantsAllowedForCollaborationItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)canManageShareForDocumentInSharedFolderWithCompletionHandler:(id)arg0 ;
-(void)canShareFolderContainingExistingSharedItemsWithCompletionHandler:(id)arg0 ;
-(void)clearActivityForResult:(id)arg0 ;
-(void)collaborationFooterViewModelDidChangeForSession:(id)arg0 ;
-(void)createSharingURLForCollaborationRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)createSharingURLWithParticipantsForCollaborationRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)didBeginCreationForCollaborationPerformer:(id)arg0 ;
-(void)didCancelCreationForCollaborationPerformer:(id)arg0 ;
-(void)didFailCreationForCollaborationPerformer:(id)arg0 error:(id)arg1 ;
-(void)didFinishCreationForCollaborationPerformer:(id)arg0 ;
-(void)favoriteUserDefaultsActivity:(BOOL)arg0 withIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)headerMetadataDidChangeForSession:(id)arg0 ;
-(void)isCollaborativeDidChangeForSession:(id)arg0 ;
-(void)longPressShareActivityWithIdentifier:(id)arg0 ;
-(void)manageShareForDocumentInSharedFolder;
-(void)performActionActivityWithIdentifier:(id)arg0 ;
-(void)performActivity:(id)arg0 ;
-(void)performActivityWithRequest:(id)arg0 forExtension:(id)arg1 completion:(id)arg2 ;
-(void)performEditAction;
-(void)performPeopleSuggestion:(id)arg0 ;
-(void)performPersonSuggestionWithIdentifier:(id)arg0 ;
-(void)performShareActivityWithIdentifier:(id)arg0 ;
-(void)performUserDefaultsActivityWithIdentifier:(id)arg0 activityCategory:(NSInteger)arg1 ;
-(void)preheatActivitiesIfNeeded;
-(void)provideFeedbackForPeopleSugestionIdentifier:(id)arg0 ;
-(void)removePersonSuggestionWithIdentifier:(id)arg0 ;
-(void)requestSessionConfigurationUpdateAsynchronously:(BOOL)arg0 ;
-(void)serviceManager:(id)arg0 didPerformInServiceActivityWithIdentifier:(id)arg1 completed:(BOOL)arg2 items:(id)arg3 error:(id)arg4 ;
-(void)serviceManager:(id)arg0 didUpdateAirDropTransferWithChange:(id)arg1 ;
-(void)serviceManager:(id)arg0 performActivity:(id)arg1 ;
-(void)serviceManager:(id)arg0 performAirdropViewActivityWithNoContentView:(BOOL)arg1 ;
-(void)serviceManager:(id)arg0 performUserDefaultsActivityWithContext:(id)arg1 ;
-(void)serviceManager:(id)arg0 willPerformActivityInServiceForRequest:(id)arg1 completion:(id)arg2 ;
-(void)serviceManagerDidChangeConnectionState:(id)arg0 ;
-(void)sessionConfigurationDidChangeForSession:(id)arg0 ;
-(void)setWantsCollaborativeSession:(BOOL)arg0 ;
-(void)shareStatusForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)showOptionsDidChangeForSession:(id)arg0 ;
-(void)startSession;
-(void)stopSession;
-(void)toggleUserDefaultsActivityWithIdentifier:(id)arg0 activityCategory:(NSInteger)arg1 ;
-(void)updateSessionWithContext:(id)arg0 ;
-(void)updateUserDefaultsFavorites:(id)arg0 activityCategory:(NSInteger)arg1 ;


@end


#endif