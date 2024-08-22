// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSNAPSHOTSCHEDULER_H
#define MTSNAPSHOTSCHEDULER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTSnapshotScheduler : NSObject {
    NSString *_bundleID;
}




+(CGFloat)_quiescingWindow;
-(id)initWithBundleID:(id)arg0 ;
-(void)_performScheduleSnapshot;
-(void)scheduleSnapshot;


@end


#endif