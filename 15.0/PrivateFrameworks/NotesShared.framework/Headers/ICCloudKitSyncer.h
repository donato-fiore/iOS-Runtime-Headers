// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCLOUDKITSYNCER_H
#define ICCLOUDKITSYNCER_H

@protocol ICCloudKitSyncerDelegate;

#import <Foundation/Foundation.h>


@interface ICCloudKitSyncer : NSObject

@property (weak, nonatomic) NSObject<ICCloudKitSyncerDelegate> *delegate; // ivar: _delegate


-(void)saveUnsyncedObjects;
-(void)saveUnsyncedObjectsWithRetryCount:(NSUInteger)arg0 completionBlock:(id)arg1 ;


@end


#endif