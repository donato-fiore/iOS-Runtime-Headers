// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHPENDINGEVENTTOPERFORM_H
#define BLSHPENDINGEVENTTOPERFORM_H

@class NSString, BLSBacklightChangeEvent;
@protocol BLSHPendingOperation;

#import <Foundation/Foundation.h>

#import "BLSHPresentationDateSpecifier.h"

@interface BLSHPendingEventToPerform : NSObject <BLSHPendingOperation>



@property (getter=isCompleted) BOOL completed; // ivar: _completed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BLSHPresentationDateSpecifier *initialSpecifier; // ivar: _initialSpecifier
@property (getter=isStarted) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (readonly) BLSBacklightChangeEvent *triggerEvent; // ivar: _triggerEvent
@property (readonly) NSInteger type;
@property (getter=didUpdateInitialState) BOOL updatedInitialState; // ivar: _updatedInitialState


-(id)initWithTriggerEvent:(id)arg0 withInitialSpecifier:(id)arg1 ;


@end


#endif