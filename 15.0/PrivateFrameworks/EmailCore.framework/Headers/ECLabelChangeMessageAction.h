// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECLABELCHANGEMESSAGEACTION_H
#define ECLABELCHANGEMESSAGEACTION_H

@class NSString, NSSet, NSURL, NSArray;
@protocol ECLabelChangeMessageActionBuilder;


#import "ECLocalMessageAction.h"

@interface ECLabelChangeMessageAction : ECLocalMessageAction <ECLabelChangeMessageActionBuilder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *labelsToAdd; // ivar: _labelsToAdd
@property (copy, nonatomic) NSSet *labelsToRemove; // ivar: _labelsToRemove
@property (retain, nonatomic) NSURL *mailboxURL;
@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (copy, nonatomic) NSArray *messages; // ivar: _messages
@property (copy, nonatomic) NSSet *remoteIDs; // ivar: _remoteIDs
@property (readonly) Class superclass;
@property (nonatomic) BOOL userInitiated;


-(id)initWithBuilder:(id)arg0 ;


@end


#endif