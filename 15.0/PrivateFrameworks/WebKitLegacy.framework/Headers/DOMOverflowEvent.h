// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMOVERFLOWEVENT_H
#define DOMOVERFLOWEVENT_H



#import "DOMEvent.h"

@interface DOMOverflowEvent : DOMEvent

@property (readonly) BOOL horizontalOverflow;
@property (readonly) unsigned short orient;
@property (readonly) BOOL verticalOverflow;


-(void)initOverflowEvent:(unsigned short)arg0 horizontalOverflow:(BOOL)arg1 verticalOverflow:(BOOL)arg2 ;


@end


#endif