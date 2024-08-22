// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECTRANSFERUNDOWNLOADEDMESSAGEACTION_H
#define ECTRANSFERUNDOWNLOADEDMESSAGEACTION_H

@class NSString, NSURL, NSArray;
@protocol ECTransferUndownloadedMessageActionBuilder;


#import "ECLocalMessageAction.h"

@interface ECTransferUndownloadedMessageAction : ECLocalMessageAction <ECTransferUndownloadedMessageActionBuilder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *destinationMailboxURL; // ivar: _destinationMailboxURL
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *itemsToDelete; // ivar: _itemsToDelete
@property (retain, nonatomic) NSURL *mailboxURL;
@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (copy, nonatomic) NSString *oldestPersistedRemoteID; // ivar: _oldestPersistedRemoteID
@property (retain, nonatomic) NSURL *sourceMailboxURL; // ivar: _sourceMailboxURL
@property (readonly) Class superclass;
@property (nonatomic) NSInteger transferType; // ivar: _transferType
@property (nonatomic) BOOL userInitiated;


-(id)initWithBuilder:(id)arg0 ;
-(void)updateWithCompletedCopyItems:(id)arg0 ;


@end


#endif