// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQUEUECONTROLLERBEHAVIORPODCASTSIDENTIFIERCOMPONENTS_H
#define _MPCQUEUECONTROLLERBEHAVIORPODCASTSIDENTIFIERCOMPONENTS_H

@class NSString;
@protocol MPCQueueControllerItemIdentifierComponents;

#import <Foundation/Foundation.h>


@interface _MPCQueueControllerBehaviorPodcastsIdentifierComponents : NSObject <MPCQueueControllerItemIdentifierComponents>

 {
    ? contentItemID;
    ? sectionID;
    ? itemID;
}


@property (nonatomic, readonly) unsigned short behaviorFlags;
@property (nonatomic, copy) NSString *contentItemID;
@property (nonatomic) BOOL isPlaceholder; // ivar: isPlaceholder
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, copy) NSString *sectionID;


-(id)init;


@end


#endif