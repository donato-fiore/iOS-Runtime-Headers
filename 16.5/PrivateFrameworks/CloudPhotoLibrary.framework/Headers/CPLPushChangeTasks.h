// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLPUSHCHANGETASKS_H
#define CPLPUSHCHANGETASKS_H

@class NSDictionary, NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying>

 {
    NSDictionary *_tasksByType;
    NSMutableDictionary *_mutableTasksByType;
}


@property (readonly, nonatomic) BOOL hasTasks;


+(BOOL)supportsSecureCoding;
+(id)descriptionForTaskType:(NSInteger)arg0 ;
-(id)_descriptionFromTasksByType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initEmpty;
-(id)initWithCoder:(id)arg0 ;
-(id)invalidRecordIdentifiers;
-(id)invalidRecordScopedIdentifiers;
-(void)_commitTasks;
-(void)addTask:(NSInteger)arg0 forRecordWithScopedIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateScopedTasksWithBlock:(id)arg0 ;
-(void)enumerateTasksWithBlock:(id)arg0 ;


@end


#endif