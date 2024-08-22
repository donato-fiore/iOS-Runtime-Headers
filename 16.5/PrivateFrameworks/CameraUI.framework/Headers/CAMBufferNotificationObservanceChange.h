// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMBUFFERNOTIFICATIONOBSERVANCECHANGE_H
#define CAMBUFFERNOTIFICATIONOBSERVANCECHANGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CAMBufferObservanceChange.h"

@interface CAMBufferNotificationObservanceChange : CAMBufferObservanceChange

@property (readonly, copy, nonatomic) NSString *notification; // ivar: _notification
@property (readonly, weak, nonatomic) NSObject *object; // ivar: _object


-(id)initWithNotification:(id)arg0 object:(id)arg1 ;


@end


#endif