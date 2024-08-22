// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFDURATIONEVENTBUILDER_H
#define HFDURATIONEVENTBUILDER_H



#import "HFEventBuilder.h"

@interface HFDurationEventBuilder : HFEventBuilder

@property (nonatomic) CGFloat duration; // ivar: _duration


-(id)buildNewEventsFromCurrentState;
-(id)compareToObject:(id)arg0 ;
-(id)comparisonKey;
-(id)description;
-(id)eventType;
-(id)initWithEvent:(id)arg0 ;


@end


#endif