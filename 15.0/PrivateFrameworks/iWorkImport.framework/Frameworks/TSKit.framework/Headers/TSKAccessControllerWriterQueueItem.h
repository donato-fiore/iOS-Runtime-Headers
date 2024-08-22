// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKACCESSCONTROLLERWRITERQUEUEITEM_H
#define TSKACCESSCONTROLLERWRITERQUEUEITEM_H

@class NSThread;

#import <Foundation/Foundation.h>


@interface TSKAccessControllerWriterQueueItem : NSObject

@property (readonly, nonatomic) BOOL didTakePriority;
@property (readonly, nonatomic) NSThread *threadIdentifier; // ivar: _threadIdentifier


+(id)priorityPrimaryThreadWriterQueueItemForAccessController:(id)arg0 ;
+(id)writerQueueItemWithThreadIdentifier:(id)arg0 ;
-(id)description;
-(id)initWithThreadIdentifier:(id)arg0 ;


@end


#endif