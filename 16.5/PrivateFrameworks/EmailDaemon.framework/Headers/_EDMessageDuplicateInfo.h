// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EDMESSAGEDUPLICATEINFO_H
#define _EDMESSAGEDUPLICATEINFO_H

@class NSMutableArray, NSMutableSet;
@protocol EDPersistedMessage;

#import <Foundation/Foundation.h>

#import "EDMailboxProvider.h"

@interface _EDMessageDuplicateInfo : NSObject

@property (retain, nonatomic) NSMutableArray *dates; // ivar: _dates
@property (retain, nonatomic) NSMutableArray *flags; // ivar: _flags
@property (retain, nonatomic) EDMailboxProvider *mailboxProvider; // ivar: _mailboxProvider
@property (retain, nonatomic) NSMutableSet *mailboxes; // ivar: _mailboxes
@property (retain, nonatomic) NSObject<EDPersistedMessage> *primaryPersistedMessage; // ivar: _primaryPersistedMessage
@property (retain, nonatomic) NSMutableArray *senderBuckets; // ivar: _senderBuckets


-(NSInteger)combinedSenderBucket;
-(id)combinedDate;
-(id)combinedMailboxes;
-(id)combinedMessageFlags;
-(id)initWithMailboxProvider:(id)arg0 ;
-(void)addMessage:(id)arg0 ;


@end


#endif