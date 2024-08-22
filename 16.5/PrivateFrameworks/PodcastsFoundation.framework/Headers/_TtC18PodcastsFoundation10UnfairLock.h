// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATION10UNFAIRLOCK_H
#define _TTC18PODCASTSFOUNDATION10UNFAIRLOCK_H

@class SwiftObject;
@protocol NSLocking;



@interface _TtC18PodcastsFoundation10UnfairLock : SwiftObject <NSLocking>

 {
    ? unfairLock;
}




-(void)lock;
-(void)unlock;


@end


#endif