// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMESSAGESTOTRACK_H
#define IMMESSAGESTOTRACK_H

@class NSMutableOrderedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMMessagesToTrack : NSObject

@property (readonly, nonatomic) NSUInteger currentNumberOfMessages;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, nonatomic) NSUInteger maxNumberOfMessages;
@property (retain, nonatomic) NSMutableOrderedSet *recentMessageIDs; // ivar: _recentMessageIDs


+(id)sharedInstance;
-(id)init;
-(void)addMessagesID:(id)arg0 ;
-(void)containsMessageID:(id)arg0 completion:(id)arg1 ;


@end


#endif