// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FASUGGESTIONSTABLEVIEWDECORATOR_H
#define FASUGGESTIONSTABLEVIEWDECORATOR_H

@class RUITableView, NSArray, FAInviteContext, RemoteUIController, FAInviteSuggestions, NSSet, CNContactStore, NSString;
@protocol FAInviteControllerDelegate, FAInviteConfigurationController;


#import "FATableViewDecorator.h"
#import "FAProfilePictureStore.h"

@interface FASuggestionsTableViewDecorator : FATableViewDecorator <FAInviteControllerDelegate>

 {
    RUITableView *_remoteTableViewController;
    FAProfilePictureStore *_familySuggestionsPictureStore;
    NSArray *_recommendedFamilyMembers;
    NSArray *_emergencyContacts;
    FAInviteContext *_context;
    NSObject<FAInviteConfigurationController> *_inviteConfigurationController;
    RemoteUIController *_viewController;
    FAInviteSuggestions *_suggester;
    NSSet *_invitedHandles;
    CNContactStore *_contactStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldShowSuggestionsInPage:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)accessoryViewFor:(id)arg0 ;
-(id)indexFor:(id)arg0 ;
-(id)indexForSuggestionsSection;
-(id)initWithTableView:(id)arg0 ruiTableView:(id)arg1 pictureStore:(id)arg2 recommendations:(id)arg3 emergencyContacts:(id)arg4 context:(id)arg5 viewController:(id)arg6 suggester:(id)arg7 ;
-(id)inviteButtonForSuggestion;
-(id)inviteSentImageForSuggestion;
-(id)relationForContact:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)didTapInviteButtonInCell:(id)arg0 ;
-(void)inviteController:(id)arg0 didFinishWithStatus:(NSUInteger)arg1 recipients:(id)arg2 userInfo:(id)arg3 error:(id)arg4 ;
-(void)sendSuggestionFeedbackFor:(id)arg0 ;
-(void)setupInviteConfiguratioControllerFor:(NSInteger)arg0 contactHandle:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateSuggestionCellFor:(id)arg0 ;


@end


#endif