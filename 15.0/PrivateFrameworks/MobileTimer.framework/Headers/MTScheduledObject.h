// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTSCHEDULEDOBJECT_H
#define MTSCHEDULEDOBJECT_H

@class NSString;
@protocol NAEquatable, NSCopying, MTScheduleable;

#import <Foundation/Foundation.h>

#import "MTTrigger.h"

@interface MTScheduledObject : NSObject <NAEquatable, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isVisible;
@property (copy, nonatomic) NSObject<MTScheduleable> *scheduleable; // ivar: _scheduleable
@property (readonly) Class superclass;
@property (copy, nonatomic) MTTrigger *trigger; // ivar: _trigger
@property (readonly, nonatomic) NSUInteger type;


+(NSUInteger)scheduledTypeForTriggerType:(NSUInteger)arg0 ;
+(id)scheduledObjectForScheduleable:(id)arg0 trigger:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScheduledObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithScheduleable:(id)arg0 trigger:(id)arg1 ;


@end


#endif