// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EDLAZYWRAPPEDMESSAGE_H
#define _EDLAZYWRAPPEDMESSAGE_H

@class EDWrappedMessage;


#import "EDMessagePersistence.h"

@interface _EDLazyWrappedMessage : EDWrappedMessage

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence


-(NSInteger)databaseID;
-(id)initWithMessage:(id)arg0 messagePersistence:(id)arg1 ;


@end


#endif