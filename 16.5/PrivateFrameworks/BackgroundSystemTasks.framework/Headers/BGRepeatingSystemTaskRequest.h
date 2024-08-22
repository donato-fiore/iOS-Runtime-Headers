// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BGREPEATINGSYSTEMTASKREQUEST_H
#define BGREPEATINGSYSTEMTASKREQUEST_H



#import "BGSystemTaskRequest.h"

@interface BGRepeatingSystemTaskRequest : BGSystemTaskRequest

@property (nonatomic) CGFloat interval; // ivar: _interval
@property (nonatomic) CGFloat minDurationBetweenInstances; // ivar: _minDurationBetweenInstances


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif