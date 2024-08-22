// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGLYPHSELECTIONEVENT_H
#define WFGLYPHSELECTIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFGlyphSelectionEvent : WFEvent

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL searchActive; // ivar: _searchActive


+(Class)codableEventClass;


@end


#endif