// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCBEHAVIOR_H
#define HDCLOUDSYNCBEHAVIOR_H


#import <Foundation/Foundation.h>


@interface HDCloudSyncBehavior : NSObject

@property (readonly, nonatomic) BOOL shouldPull; // ivar: _shouldPull
@property (readonly, nonatomic) BOOL shouldPush; // ivar: _shouldPush
@property (readonly, nonatomic) BOOL shouldSyncAttachments; // ivar: _shouldSyncAttachments
@property (readonly, nonatomic) BOOL shouldSyncMedicalID; // ivar: _shouldSyncMedicalID
@property (readonly, nonatomic) BOOL shouldSyncSummarySharing; // ivar: _shouldSyncSummarySharing


-(id)initWithProfile:(id)arg0 ;


@end


#endif