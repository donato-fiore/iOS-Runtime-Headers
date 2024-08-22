// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTSECTIONCONFIGURATIONINTERNAL_H
#define BLTSECTIONCONFIGURATIONINTERNAL_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BLTSectionConfigurationInternal : NSObject {
    NSDictionary *_configurations;
}




-(BOOL)applyAllowListToChildSections:(id)arg0 ;
-(BOOL)hasSectionIDDisplayedCriticalBulletins:(id)arg0 ;
-(BOOL)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg0 ;
-(BOOL)hasSectionIDOptedOutOfNotificationTuning:(id)arg0 ;
-(BOOL)hasSectionIDOptedOutOfSettingsCoordination:(id)arg0 ;
-(BOOL)hasSectionIDOptedOutOfSubtitleRemovalForOlderWatches:(id)arg0 ;
-(BOOL)hasSectionIDOptedOutOfWaitForUserIdle:(id)arg0 ;
-(BOOL)setCoordinationType:(NSUInteger)arg0 sectionID:(id)arg1 ;
-(BOOL)shouldSectionIDAlwaysAlert:(id)arg0 category:(id)arg1 ;
-(BOOL)shouldSectionIDSettingsAlwaysSync:(id)arg0 ;
-(BOOL)shouldUsePhoneExpirationDateForSectionID:(id)arg0 ;
-(NSUInteger)coordinationTypeForSectionID:(id)arg0 subtype:(NSInteger)arg1 ;
-(NSUInteger)coordinationTypeForSectionID:(id)arg0 subtype:(NSInteger)arg1 category:(id)arg2 ;
-(NSUInteger)legacyMapLocationForSectionID:(id)arg0 ;
-(id)_loadConfigurations;
-(id)additionalBridgeSectionIDsForSectionID:(id)arg0 ;
-(id)init;
-(id)watchVersionThatUsesAttachmentURLForSectionID:(id)arg0 ;
-(id)watchVersionThatUsesUserInfoForContextForSectionID:(id)arg0 ;


@end


#endif