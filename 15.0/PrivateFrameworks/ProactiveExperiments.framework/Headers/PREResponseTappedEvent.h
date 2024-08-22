// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRERESPONSETAPPEDEVENT_H
#define PRERESPONSETAPPEDEVENT_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "PREResponsesGeneratedEvent.h"

@interface PREResponseTappedEvent : NSObject

@property (nonatomic) BOOL hasQuestionMark; // ivar: _hasQuestionMark
@property (nonatomic) int inputMethod; // ivar: _inputMethod
@property (retain, nonatomic) PREResponsesGeneratedEvent *responsesGeneratedEvent; // ivar: _responsesGeneratedEvent
@property (retain, nonatomic) NSNumber *selectedPosition; // ivar: _selectedPosition
@property (retain, nonatomic) NSString *selectedResponse; // ivar: _selectedResponse
@property (nonatomic) NSUInteger timeToTap; // ivar: _timeToTap




@end


#endif