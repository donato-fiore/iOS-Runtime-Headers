// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMPHOTOSMEMORIESLIBRARYNODE_H
#define _BMPHOTOSMEMORIESLIBRARYNODE_H

@class BMLibraryNode;



@interface _BMPhotosMemoriesLibraryNode : BMLibraryNode



+(id)AddToMemories;
+(id)Curation;
+(id)MoviePlayed;
+(id)Notification;
+(id)Viewed;
+(id)configurationForAddToMemories;
+(id)configurationForCuration;
+(id)configurationForMoviePlayed;
+(id)configurationForNotification;
+(id)configurationForViewed;
+(id)identifier;
+(id)storeConfigurationForAddToMemories;
+(id)storeConfigurationForCuration;
+(id)storeConfigurationForMoviePlayed;
+(id)storeConfigurationForNotification;
+(id)storeConfigurationForViewed;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForAddToMemories;
+(id)syncPolicyForCuration;
+(id)syncPolicyForMoviePlayed;
+(id)syncPolicyForNotification;
+(id)syncPolicyForViewed;
+(id)validKeyPaths;


@end


#endif