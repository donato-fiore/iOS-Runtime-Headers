// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECTRANSFERMESSAGEACTION_H
#define ECTRANSFERMESSAGEACTION_H

@class NSMutableOrderedSet, NSString, NSURL, NSArray;
@protocol ECTransferMessageActionBuilder;


#import "ECLocalMessageAction.h"

@interface ECTransferMessageAction : ECLocalMessageAction <ECTransferMessageActionBuilder>

 {
    NSMutableOrderedSet *_itemsToDownload;
    NSMutableOrderedSet *_itemsToCopy;
    NSMutableOrderedSet *_itemsToDelete;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *destinationMailboxURL; // ivar: _destinationMailboxURL
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *itemsToCopy;
@property (retain, nonatomic) NSArray *itemsToDelete;
@property (retain, nonatomic) NSArray *itemsToDownload;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (retain, nonatomic) NSURL *sourceMailboxURL; // ivar: _sourceMailboxURL
@property (readonly) Class superclass;
@property (nonatomic) NSInteger transferType; // ivar: _transferType
@property (nonatomic) BOOL userInitiated;


-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(void)updateWithCompletedItems:(id)arg0 forPhase:(NSInteger)arg1 ;
-(void)updateWithFailedItems:(id)arg0 forPhase:(NSInteger)arg1 ;


@end


#endif