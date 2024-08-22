// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLOUDFEEDCOMMENTSENTRY_H
#define PLCLOUDFEEDCOMMENTSENTRY_H

@class NSString, NSOrderedSet, NSMutableOrderedSet;


#import "PLCloudFeedEntry.h"

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (retain, nonatomic) NSString *entryCloudAssetGUID;
@property (retain, nonatomic) NSOrderedSet *entryComments;
@property (retain, nonatomic) NSOrderedSet *entryLikeComments;
@property (readonly, weak, nonatomic) NSMutableOrderedSet *mutableEntryComments;
@property (readonly, weak, nonatomic) NSMutableOrderedSet *mutableEntryLikeComments;


+(id)entityName;
-(BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg0 ;


@end


#endif