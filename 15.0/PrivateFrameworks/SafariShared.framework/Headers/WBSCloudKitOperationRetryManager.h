// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCLOUDKITOPERATIONRETRYMANAGER_H
#define WBSCLOUDKITOPERATIONRETRYMANAGER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface WBSCloudKitOperationRetryManager : NSObject {
    NSDate *_dateRetryWasFirstRequested;
    NSUInteger _numberOfRetries;
}


@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(NSInteger)scheduleRetryIfNeededForError:(id)arg0 usingBlock:(id)arg1 ;
-(id)init;


@end


#endif