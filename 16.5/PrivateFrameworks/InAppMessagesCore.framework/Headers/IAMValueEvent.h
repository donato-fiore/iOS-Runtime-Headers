// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IAMVALUEEVENT_H
#define IAMVALUEEVENT_H

@protocol NSCopying;


#import "IAMEvent.h"

@interface IAMValueEvent : IAMEvent

@property (copy, nonatomic) NSObject<NSCopying> *value; // ivar: value


-(id)initWithName:(id)arg0 value:(id)arg1 ;


@end


#endif