// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCUSTOMDONATION_H
#define PPCUSTOMDONATION_H


#import <Foundation/Foundation.h>


@interface PPCustomDonation : NSObject



+(BOOL)donateLabeledStrings:(id)arg0 bundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 error:(*id)arg4 ;
+(BOOL)donateNotification:(id)arg0 error:(*id)arg1 ;
+(BOOL)donateParsecNamedEntitiesAndTopics:(id)arg0 rawQuery:(id)arg1 reformulatedQuery:(id)arg2 source:(id)arg3 error:(*id)arg4 ;
+(BOOL)donatePhotosLocationNamedEntities:(id)arg0 bundleId:(id)arg1 error:(*id)arg2 ;
+(BOOL)donatePhotosNamedEntities:(id)arg0 bundleId:(id)arg1 date:(id)arg2 error:(*id)arg3 ;
+(BOOL)donatePhotosOneUpLocationNamedEntities:(id)arg0 bundleId:(id)arg1 error:(*id)arg2 ;
+(BOOL)donatePhotosTopics:(id)arg0 bundleId:(id)arg1 date:(id)arg2 error:(*id)arg3 ;
+(BOOL)donateSiriQuery:(id)arg0 results:(id)arg1 error:(*id)arg2 ;


@end


#endif