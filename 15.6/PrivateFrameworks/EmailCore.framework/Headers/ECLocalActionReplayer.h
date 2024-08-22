// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECLOCALACTIONREPLAYER_H
#define ECLOCALACTIONREPLAYER_H

@class NSString, NSError;
@protocol EFLoggable, ECLocalActionReplayerDelegate;

#import <Foundation/Foundation.h>

#import "ECLocalMessageAction.h"

@interface ECLocalActionReplayer : NSObject <EFLoggable>



@property (retain, nonatomic) ECLocalMessageAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ECLocalActionReplayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)failActionWithError:(id)arg0 ;
-(id)init;
-(id)initWithAction:(id)arg0 ;
-(id)replayAction;


@end


#endif