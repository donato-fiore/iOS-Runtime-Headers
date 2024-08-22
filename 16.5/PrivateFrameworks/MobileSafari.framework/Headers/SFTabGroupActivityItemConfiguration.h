// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFTABGROUPACTIVITYITEMCONFIGURATION_H
#define SFTABGROUPACTIVITYITEMCONFIGURATION_H

@class CKShare, LPLinkMetadata, NSMutableArray, NSArray, NSString, NSItemProvider, WBTabGroup, WBTabGroupManager;
@protocol UIActivityItemsConfigurationReading;

#import <Foundation/Foundation.h>


@interface SFTabGroupActivityItemConfiguration : NSObject <UIActivityItemsConfigurationReading>

 {
    CKShare *_existingShare;
    LPLinkMetadata *_linkMetadata;
    NSMutableArray *_pendingShareCompletionHandlers;
}


@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (readonly, copy, nonatomic) NSArray *itemProvidersForActivityItemsConfiguration;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WBTabGroup *tabGroup; // ivar: _tabGroup
@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager; // ivar: _tabGroupManager


-(id)activityItemsConfigurationMetadataForItemAtIndex:(NSInteger)arg0 key:(id)arg1 ;
-(id)activityItemsConfigurationMetadataForKey:(id)arg0 ;
-(id)initWithTabGroup:(id)arg0 inTabGroupManager:(id)arg1 existingShare:(id)arg2 icon:(id)arg3 ;
-(void)_beginSharingTabGroupWithCompletionHandler:(id)arg0 ;
-(void)_presentSharedTabGroupsManateePrompt;
-(void)dealloc;
-(void)updateMetadataIcon:(id)arg0 ;


@end


#endif