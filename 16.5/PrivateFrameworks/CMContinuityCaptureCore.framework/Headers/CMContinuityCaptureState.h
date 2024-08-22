// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCONTINUITYCAPTURESTATE_H
#define CMCONTINUITYCAPTURESTATE_H

@class NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface CMContinuityCaptureState : NSObject

@property (copy, nonatomic) id *entryAction; // ivar: _entryAction
@property (copy, nonatomic) id *exitAction; // ivar: _exitAction
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableSet *pendingEvents; // ivar: _pendingEvents


-(id)description;
// -(id)initWithAttributes:(id)arg0 entryAction:(id)arg1 exitAction:(unk)arg2  ;


@end


#endif