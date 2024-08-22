// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EDMESSAGECHANGEMANAGERFLAGCHANGE_H
#define _EDMESSAGECHANGEMANAGERFLAGCHANGE_H

@class ECMessageFlagChange;
@protocol EDPersistedMessage;

#import <Foundation/Foundation.h>


@interface _EDMessageChangeManagerFlagChange : NSObject

@property (retain, nonatomic) ECMessageFlagChange *localChange; // ivar: _localChange
@property (retain, nonatomic) NSObject<EDPersistedMessage> *message; // ivar: _message
@property (retain, nonatomic) ECMessageFlagChange *serverChange; // ivar: _serverChange




@end


#endif