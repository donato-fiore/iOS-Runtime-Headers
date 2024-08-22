// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCLOUDDOWNLOADBATCHDETAILS_H
#define PLCLOUDDOWNLOADBATCHDETAILS_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface PLCloudDownloadBatchDetails : NSObject

@property (copy, nonatomic) NSArray *cmmUUIDsToNotify; // ivar: _cmmUUIDsToNotify
@property (copy, nonatomic) NSSet *confirmedResourceIDs; // ivar: _confirmedResourceIDs
@property (nonatomic) BOOL hasResourceChanges; // ivar: _hasResourceChanges
@property (nonatomic) BOOL needsWidgetTimelineReload; // ivar: _needsWidgetTimelineReload
@property (nonatomic) NSInteger numberOfPhotos; // ivar: _numberOfPhotos
@property (nonatomic) NSInteger numberOfVideos; // ivar: _numberOfVideos


-(void)unionBatchDetails:(id)arg0 ;


@end


#endif