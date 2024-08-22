// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLOUDFEEDASSETSENTRY_H
#define PLCLOUDFEEDASSETSENTRY_H

@class NSOrderedSet, NSMutableOrderedSet;


#import "PLCloudFeedEntry.h"

@interface PLCloudFeedAssetsEntry : PLCloudFeedEntry

@property (retain, nonatomic) NSOrderedSet *entryAssets;
@property (readonly, weak, nonatomic) NSMutableOrderedSet *mutableEntryAssets;


+(id)entityName;
-(BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg0 ;


@end


#endif