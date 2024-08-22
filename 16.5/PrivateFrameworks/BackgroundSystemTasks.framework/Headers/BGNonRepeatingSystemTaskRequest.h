// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BGNONREPEATINGSYSTEMTASKREQUEST_H
#define BGNONREPEATINGSYSTEMTASKREQUEST_H



#import "BGSystemTaskRequest.h"

@interface BGNonRepeatingSystemTaskRequest : BGSystemTaskRequest

@property (nonatomic) CGFloat scheduleAfter; // ivar: _scheduleAfter
@property (nonatomic) CGFloat trySchedulingBefore; // ivar: _trySchedulingBefore


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif