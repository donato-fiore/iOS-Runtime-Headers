// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSHOWDIALOGEVENT_H
#define WFSHOWDIALOGEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFShowDialogEvent : WFEvent

@property (copy, nonatomic) NSString *automationType; // ivar: _automationType
@property (copy, nonatomic) NSString *dialogType; // ivar: _dialogType
@property (copy, nonatomic) NSString *dismissalType; // ivar: _dismissalType
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *presentationStyle; // ivar: _presentationStyle


+(Class)codableEventClass;


@end


#endif