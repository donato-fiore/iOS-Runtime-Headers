// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBACKGROUNDTASK_H
#define HMDBACKGROUNDTASK_H

@class HMFObject, NSDate, NSString;



@interface HMDBackgroundTask : HMFObject

@property (readonly, copy, nonatomic) NSDate *expectedFireDate; // ivar: _expectedFireDate
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDate *scheduledDate; // ivar: _scheduledDate


-(id)attributeDescriptions;
-(id)initWithIdentifier:(id)arg0 expectedFireDate:(id)arg1 scheduledDate:(id)arg2 ;


@end


#endif