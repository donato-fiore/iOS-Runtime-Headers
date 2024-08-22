// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC29MAPSSYNCCLOUDKITSTATEPROVIDER_H
#define _TTC8MAPSSYNC29MAPSSYNCCLOUDKITSTATEPROVIDER_H

@class NSDate, NSError;

#import <Foundation/Foundation.h>


@interface _TtC8MapsSync29MapsSyncCloudKitStateProvider : NSObject {
    ? lastSyncDate;
    ? lastPersistedSyncDate;
}


@property (nonatomic, copy) NSDate *lastPersistedSyncDate;
@property (nonatomic, copy) NSDate *lastSyncDate;
@property (nonatomic, retain) NSError *lastSyncError; // ivar: lastSyncError


-(id)init;
-(void)consumeCloudKitEventWithEvent:(id)arg0 ;
-(void)handleSuccessfulCKEventWithDate:(id)arg0 ;


@end


#endif