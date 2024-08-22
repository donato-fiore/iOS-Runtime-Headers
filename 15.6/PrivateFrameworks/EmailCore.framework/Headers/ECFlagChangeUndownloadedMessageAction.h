// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECFLAGCHANGEUNDOWNLOADEDMESSAGEACTION_H
#define ECFLAGCHANGEUNDOWNLOADEDMESSAGEACTION_H

@class NSString, NSURL;
@protocol ECFlagChangeUndownloadedMessageActionBuilder;


#import "ECLocalMessageAction.h"
#import "ECMessageFlagChange.h"

@interface ECFlagChangeUndownloadedMessageAction : ECLocalMessageAction <ECFlagChangeUndownloadedMessageActionBuilder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ECMessageFlagChange *flagChange; // ivar: _flagChange
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (copy, nonatomic) NSString *oldestPersistedRemoteID; // ivar: _oldestPersistedRemoteID
@property (readonly) Class superclass;
@property (nonatomic) BOOL userInitiated;


-(id)initWithBuilder:(id)arg0 ;


@end


#endif