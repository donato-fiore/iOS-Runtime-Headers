// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRITASKRECORD_H
#define TRITASKRECORD_H

@class NSArray, NSDate, NSNumber;
@protocol NSCopying, NSSecureCoding, TRITask;

#import <Foundation/Foundation.h>


@interface TRITaskRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *dependencies; // ivar: _dependencies
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSArray *tags; // ivar: _tags
@property (readonly, nonatomic) NSObject<TRITask> *task; // ivar: _task
@property (readonly, nonatomic) NSNumber *taskId; // ivar: _taskId


+(BOOL)supportsSecureCoding;
+(id)taskRecordWithTaskId:(id)arg0 task:(id)arg1 startDate:(id)arg2 dependencies:(id)arg3 tags:(id)arg4 ;
+(void)load;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTaskRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementDependencies:(id)arg0 ;
-(id)copyWithReplacementStartDate:(id)arg0 ;
-(id)copyWithReplacementTags:(id)arg0 ;
-(id)copyWithReplacementTask:(id)arg0 ;
-(id)copyWithReplacementTaskId:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskId:(id)arg0 task:(id)arg1 startDate:(id)arg2 dependencies:(id)arg3 tags:(id)arg4 ;
-(void)_swizzledEncodeWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif