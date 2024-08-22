// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLBACKGROUNDTASK_H
#define MLBACKGROUNDTASK_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLBackgroundTask : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *taskIdentifier; // ivar: _taskIdentifier


+(BOOL)cancelAllTasks;
+(BOOL)cancelTaskWithIdentifier:(id)arg0 ;
+(BOOL)scheduleTask:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(BOOL)taskIsScheduledWithIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)activityForScheduling;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif