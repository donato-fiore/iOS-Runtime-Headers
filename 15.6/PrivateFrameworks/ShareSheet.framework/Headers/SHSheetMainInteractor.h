// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHEETMAININTERACTOR_H
#define SHSHEETMAININTERACTOR_H

@class NSString;
@protocol SHSheetServiceManagerDelegate, SHSheetSessionDelegate, SHSheetActivityPerformerDelegate, SHSheetMainInteractorInterface, SHSheetActivityPerformerPresentationInterface, SHSheetMainInteractorDelegate;

#import <Foundation/Foundation.h>

#import "SHSheetActivityPerformer.h"
#import "SHSheetServiceManager.h"
#import "SHSheetSession.h"

@interface SHSheetMainInteractor : NSObject <SHSheetServiceManagerDelegate, SHSheetSessionDelegate, SHSheetActivityPerformerDelegate, SHSheetMainInteractorInterface>



@property (retain, nonatomic) SHSheetActivityPerformer *activityPerformer; // ivar: _activityPerformer
@property (weak, nonatomic) NSObject<SHSheetActivityPerformerPresentationInterface> *activityPresentationController; // ivar: _activityPresentationController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHSheetMainInteractorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSessionStarted;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SHSheetServiceManager *serviceManager; // ivar: _serviceManager
@property (retain, nonatomic) SHSheetSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)_prepareActivityProxyForRequest:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)linkMetadataForActivityPerformer:(id)arg0 ;
-(void)_didPerformActivityWithResult:(id)arg0 ;
-(void)_performActivity:(id)arg0 ;
-(void)_recordActivityInteractionForResult:(id)arg0 ;
-(void)_recordActivityViewControllerInteraction;
-(void)_runActivity:(id)arg0 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)clearActivityForResult:(id)arg0 ;
-(void)favoriteUserDefaultsActivity:(BOOL)arg0 withIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)headerMetadataDidChangeForSession:(id)arg0 ;
-(void)longPressShareActivityWithIdentifier:(id)arg0 ;
-(void)performActionActivityWithIdentifier:(id)arg0 ;
-(void)performActivity:(id)arg0 ;
-(void)performActivityWithRequest:(id)arg0 forExtension:(id)arg1 completion:(id)arg2 ;
-(void)performEditAction;
-(void)performPeopleSuggestion:(id)arg0 ;
-(void)performPersonSuggestionWithIdentifier:(id)arg0 ;
-(void)performShareActivityWithIdentifier:(id)arg0 ;
-(void)performUserDefaultsActivityWithIdentifier:(id)arg0 activityCategory:(NSInteger)arg1 ;
-(void)preheatActivitiesIfNeeded;
-(void)removePersonSuggestionWithIdentifier:(id)arg0 ;
-(void)requestSessionConfigurationUpdateAsynchronously:(BOOL)arg0 ;
-(void)serviceManager:(id)arg0 didUpdateAirdropTransferWithContext:(id)arg1 ;
-(void)serviceManager:(id)arg0 performActivity:(id)arg1 ;
-(void)serviceManager:(id)arg0 performAirdropViewActivityWithNoContentView:(BOOL)arg1 ;
-(void)serviceManager:(id)arg0 performUserDefaultsActivityWithContext:(id)arg1 ;
-(void)serviceManager:(id)arg0 willPerformActivityInServiceForRequest:(id)arg1 completion:(id)arg2 ;
-(void)serviceManagerDidChangeConnectionState:(id)arg0 ;
-(void)sessionConfigurationDidChangeForSession:(id)arg0 ;
-(void)startSession;
-(void)stopSession;
-(void)toggleUserDefaultsActivityWithIdentifier:(id)arg0 activityCategory:(NSInteger)arg1 ;
-(void)updateSessionWithContext:(id)arg0 ;
-(void)updateUserDefaultsFavorites:(id)arg0 activityCategory:(NSInteger)arg1 ;
-(void)wantsObjectManipulationDidChangeForSession:(id)arg0 ;


@end


#endif