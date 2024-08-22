// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTINUITYCAPTURESTATEMACHINEEVENT_H
#define CMCONTINUITYCAPTURESTATEMACHINEEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CMContinuityCaptureStateMachineEvent : NSObject

@property (readonly) id *action; // ivar: _action
@property (readonly) BOOL isEntry; // ivar: _isEntry
@property (readonly, retain) NSString *name; // ivar: _name


-(id)description;
-(id)initWithName:(id)arg0 isEntry:(BOOL)arg1 eventAction:(id)arg2 ;


@end


#endif