// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DURATIONGROUP_H
#define DURATIONGROUP_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface DurationGroup : NSObject

@property (retain) NSDate *end; // ivar: _end
@property (readonly) NSUInteger groupId; // ivar: _groupId
@property (retain) NSDate *start; // ivar: _start
@property BOOL wasChanged; // ivar: _wasChanged


-(id)description;
-(id)initWithStart:(id)arg0 end:(id)arg1 ;


@end


#endif