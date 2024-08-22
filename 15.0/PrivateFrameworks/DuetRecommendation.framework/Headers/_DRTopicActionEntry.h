// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DRTOPICACTIONENTRY_H
#define _DRTOPICACTIONENTRY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface _DRTopicActionEntry : NSObject

@property (readonly) NSUInteger action; // ivar: _action
@property (readonly, retain) NSString *topic; // ivar: _topic
@property (readonly, retain) NSDate *when; // ivar: _when


-(id)description;
-(id)initWithTopic:(id)arg0 when:(id)arg1 action:(NSUInteger)arg2 ;


@end


#endif