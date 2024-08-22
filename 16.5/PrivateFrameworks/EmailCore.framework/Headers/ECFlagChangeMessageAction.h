// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECFLAGCHANGEMESSAGEACTION_H
#define ECFLAGCHANGEMESSAGEACTION_H

@class NSString, NSURL, NSArray, NSSet;
@protocol ECFlagChangeMessageActionBuilder;


#import "ECLocalMessageAction.h"
#import "ECMessageFlagChange.h"

@interface ECFlagChangeMessageAction : ECLocalMessageAction <ECFlagChangeMessageActionBuilder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ECMessageFlagChange *flagChange; // ivar: _flagChange
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (copy, nonatomic) NSArray *messages; // ivar: _messages
@property (copy, nonatomic) NSSet *remoteIDs; // ivar: _remoteIDs
@property (readonly) Class superclass;
@property (nonatomic) BOOL userInitiated;


-(id)initWithBuilder:(id)arg0 ;


@end


#endif