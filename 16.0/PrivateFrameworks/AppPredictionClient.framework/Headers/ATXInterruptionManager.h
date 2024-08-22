// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINTERRUPTIONMANAGER_H
#define ATXINTERRUPTIONMANAGER_H

@protocol ATXModeEntityScorerProtocol, ATXNotificationSettingsReaderProtocol;

#import <Foundation/Foundation.h>

#import "ATXDNDModeConfigurationClient.h"
#import "ATXNotificationManagementMAConstants.h"
#import "ATXTrainDenyListWithDenyListModels.h"

@interface ATXInterruptionManager : NSObject {
    id<ATXModeEntityScorerProtocol> *_modesModels;
    id<ATXNotificationSettingsReaderProtocol> *_notificationSettingsReader;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
    ATXNotificationManagementMAConstants *_notificationManagementConstants;
    ATXTrainDenyListWithDenyListModels *_trainedDenyListWithDenyListModels;
}




-(BOOL)appSatisfiesRelevanceCriteriaForAllowOrSilenceList:(id)arg0 ;
-(BOOL)contactSatisfiesRelevanceCriteriaForSilenceList:(id)arg0 ;
-(BOOL)trainedContactDenyListWithDenyListModel;
-(id)init;
-(id)initWithModesModels:(id)arg0 notificationSettingsReader:(id)arg1 modeConfigurationClient:(id)arg2 ;
-(id)recommendedAllowedAppsForDNDMode:(id)arg0 ;
-(id)recommendedAllowedAppsForDNDModeSemanticType:(NSInteger)arg0 ;
-(id)recommendedAllowedAppsForMode:(NSUInteger)arg0 ;
-(id)recommendedAllowedContactsForContactScores:(id)arg0 ;
-(id)recommendedDeniedAppsForMode:(NSUInteger)arg0 ;
-(id)recommendedDeniedContactsForMode:(NSUInteger)arg0 ;
-(void)recommendedAllowedAppsForDNDMode:(id)arg0 reply:(id)arg1 ;
-(void)recommendedAllowedAppsForDNDModeSemanticType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAllowedAppsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAllowedContactsForDNDMode:(id)arg0 reply:(id)arg1 ;
-(void)recommendedAllowedContactsForDNDModeSemanticType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAllowedContactsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateAllowedAppsForDNDMode:(id)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateAllowedAppsForDNDModeSemanticType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateAllowedAppsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateAllowedContactsForDNDMode:(id)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateAllowedContactsForDNDModeSemanticType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateAllowedContactsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateDeniedAppsForDNDMode:(id)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateDeniedAppsForDNDModeSemanticType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateDeniedAppsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateDeniedContactsForDNDMode:(id)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateDeniedContactsForDNDModeSemanticType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAndCandidateDeniedContactsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)recommendedDeniedAppsForDNDMode:(id)arg0 reply:(id)arg1 ;
-(void)recommendedDeniedAppsForDNDModeSemanticType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)recommendedDeniedAppsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)recommendedDeniedContactsForDNDMode:(id)arg0 reply:(id)arg1 ;
-(void)recommendedDeniedContactsForDNDModeSemanticType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)recommendedDeniedContactsForMode:(NSUInteger)arg0 reply:(id)arg1 ;


@end


#endif