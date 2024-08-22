// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFIMAPMAILBOXDELETIONQUEUEENTRY_H
#define _MFIMAPMAILBOXDELETIONQUEUEENTRY_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "IMAPAccount.h"

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject

@property (retain) IMAPAccount *account; // ivar: account
@property (copy) NSArray *paths; // ivar: paths
@property (copy) NSArray *urls; // ivar: urls




@end


#endif