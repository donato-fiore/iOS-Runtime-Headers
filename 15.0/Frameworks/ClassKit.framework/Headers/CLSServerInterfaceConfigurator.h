// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSSERVERINTERFACECONFIGURATOR_H
#define CLSSERVERINTERFACECONFIGURATOR_H

@class NSXPCInterface, NSSet;

#import <Foundation/Foundation.h>


@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
    NSSet *_sortDescriptorsSet;
}




-(id)configureServerInterface;
-(id)init;
-(void)configureAdminRequestAPI;
-(void)configureAppsAPI;
-(void)configureAssetSupportAPI;
-(void)configureAuthorizationStatusAPI;
-(void)configureClassAPI;
-(void)configureCollaborationStateAPI;
-(void)configureCollectionsAPI;
-(void)configureContextAPI;
-(void)configureDashboardAppAPI;
-(void)configureDataObserverAPI;
-(void)configureFeatureAvailabilityAPI;
-(void)configureHandoutAPI;
-(void)configureProgressReportingAPI;
-(void)configureQueryAPI;
-(void)configureSaveAPI;
-(void)configureStudentActivityAPI;
-(void)configureSurveyAnswerAPI;
-(void)configureUserNotificationAPI;
-(void)configureUtilityServerAPI;


@end


#endif