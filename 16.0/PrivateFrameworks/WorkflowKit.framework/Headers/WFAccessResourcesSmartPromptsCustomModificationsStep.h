// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFACCESSRESOURCESSMARTPROMPTSCUSTOMMODIFICATIONSSTEP_H
#define WFACCESSRESOURCESSMARTPROMPTSCUSTOMMODIFICATIONSSTEP_H

@class NSDictionary, NSString;
@protocol WFProgressiveMigrationCustomModificationsStep;

#import <Foundation/Foundation.h>


@interface WFAccessResourcesSmartPromptsCustomModificationsStep : NSObject <WFProgressiveMigrationCustomModificationsStep>



@property (readonly, nonatomic) NSDictionary *accessResourceIdentifiersByContentDestination; // ivar: _accessResourceIdentifiersByContentDestination
@property (readonly, nonatomic) NSDictionary *actionIdentifiersByContentDestination; // ivar: _actionIdentifiersByContentDestination
@property (readonly, nonatomic) NSDictionary *contentDestinationsByAccessResourceIdentifier; // ivar: _contentDestinationsByAccessResourceIdentifier
@property (readonly, nonatomic) NSDictionary *contentDestinationsByActionIdentifier; // ivar: _contentDestinationsByActionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)performModificationsWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)shortcutHasSmartPromptsData:(id)arg0 context:(id)arg1 ;
-(id)actionIdentifiersThatRequireMigrationForAccessResourceIdentifiers:(id)arg0 ;
-(id)bundleIdentifierForIntentBasedActionIdentifier:(id)arg0 accessResourceIdentifiers:(id)arg1 ;
-(id)contentLocationForActionIdentifier:(id)arg0 statesByAccessResourceIdentifier:(id)arg1 ;
-(id)extractBundleIdentifierFromIntentsAccessResourceIdentifier:(id)arg0 ;
-(id)fetchMigrationEligibleActionUUIDsForWorkflow:(id)arg0 context:(id)arg1 workflowAccessResourceIdentifiers:(id)arg2 ;
-(id)fetchStatesByAccessResourceIdentifierForWorkflow:(id)arg0 context:(id)arg1 ;
-(void)migrateAccessResourcesToSmartPromptsForWorkflow:(id)arg0 context:(id)arg1 ;


@end


#endif