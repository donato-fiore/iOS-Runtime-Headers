// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECLOCALMESSAGEACTION_H
#define ECLOCALMESSAGEACTION_H

@class NSString, NSURL;
@protocol ECLocalMessageActionBuilder;

#import <Foundation/Foundation.h>


@interface ECLocalMessageAction : NSObject <ECLocalMessageActionBuilder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *mailboxURL; // ivar: _mailboxURL
@property (retain, nonatomic) NSString *messageActionPersistentID; // ivar: _messageActionPersistentID
@property (readonly) Class superclass;
@property (nonatomic) BOOL userInitiated; // ivar: _userInitiated




@end


#endif