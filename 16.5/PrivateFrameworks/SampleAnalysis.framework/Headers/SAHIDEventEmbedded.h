// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAHIDEVENTEMBEDDED_H
#define SAHIDEVENTEMBEDDED_H



#import "SAHIDEvent.h"

@interface SAHIDEventEmbedded : SAHIDEvent



+(id)classDictionaryKey;
+(void)parseKTrace:(struct ktrace_session *)arg0 findingHIDEvents:(id)arg1 ;
-(CGFloat)thresholdToGroupSameEventType;
-(id)hidEventTypeString;


@end


#endif