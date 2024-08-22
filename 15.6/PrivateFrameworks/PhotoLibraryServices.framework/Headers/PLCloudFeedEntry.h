// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDFEEDENTRY_H
#define PLCLOUDFEEDENTRY_H

@class NSURL, NSString, NSDate, NSNumber;


#import "PLManagedObject.h"

@interface PLCloudFeedEntry : PLManagedObject

@property (readonly, weak, nonatomic) NSURL *URIRepresentation;
@property (retain, nonatomic) NSString *entryAlbumGUID;
@property (retain, nonatomic) NSDate *entryDate;
@property (retain, nonatomic) NSString *entryInvitationRecordGUID;
@property (readonly, nonatomic) NSInteger entryPriority;
@property (retain, nonatomic) NSNumber *entryPriorityNumber;
@property (readonly, nonatomic) NSInteger entryType;
@property (retain, nonatomic) NSNumber *entryTypeNumber;


+(id)_recentEntriesInLibrary:(id)arg0 forEntity:(id)arg1 usingPredicate:(id)arg2 earliestDate:(id)arg3 latestDate:(id)arg4 limit:(NSInteger)arg5 sortDescriptors:(id)arg6 ;
+(id)additionalPrediateForFilter:(NSInteger)arg0 ;
+(id)allEntriesInLibrary:(id)arg0 ;
+(id)allEntriesInManagedObjectContext:(id)arg0 ;
+(id)entityForFilter:(NSInteger)arg0 inManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)entriesSortDescriptorsAscending:(BOOL)arg0 ;
+(id)entryWithURIRepresentation:(id)arg0 inLibrary:(id)arg1 ;
+(id)filterPredicateForFilter:(NSInteger)arg0 ;
+(id)firstEntryWithType:(NSInteger)arg0 albumGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)notificationPredicateForFilter:(NSInteger)arg0 ;
+(id)recentAssetsEntriesInLibrary:(id)arg0 limit:(NSInteger)arg1 ;
+(id)recentEntriesInLibrary:(id)arg0 earliestDate:(id)arg1 latestDate:(id)arg2 limit:(NSInteger)arg3 filter:(NSInteger)arg4 sortDescriptors:(id)arg5 ;
-(BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg0 ;


@end


#endif