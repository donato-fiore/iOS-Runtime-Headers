// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EDMESSAGEDUPLICATEINFO_H
#define _EDMESSAGEDUPLICATEINFO_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>

#import "EDMailboxProvider.h"

@interface _EDMessageDuplicateInfo : NSObject

@property (retain, nonatomic) NSMutableArray *dates; // ivar: _dates
@property (retain, nonatomic) NSMutableArray *flags; // ivar: _flags
@property (retain, nonatomic) EDMailboxProvider *mailboxProvider; // ivar: _mailboxProvider
@property (retain, nonatomic) NSMutableSet *mailboxes; // ivar: _mailboxes


-(id)combinedDate;
-(id)combinedMailboxes;
-(id)combinedMessageFlags;
-(id)initWithMailboxProvider:(id)arg0 ;
-(void)addMessage:(id)arg0 ;


@end


#endif