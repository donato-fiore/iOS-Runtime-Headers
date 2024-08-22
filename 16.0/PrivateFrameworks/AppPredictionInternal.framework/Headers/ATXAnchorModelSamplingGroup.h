// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELSAMPLINGGROUP_H
#define ATXANCHORMODELSAMPLINGGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ATXAnchorModelSamplingGroup : NSObject

@property (readonly, nonatomic) NSArray *anchorWhitelist; // ivar: _anchorWhitelist
@property (readonly, nonatomic) NSInteger samplingGroupId; // ivar: _samplingGroupId


+(NSInteger)assignSamplingGroupToUserAndPersistToDefaults:(id)arg0 ;
+(NSInteger)selectSamplingGroupForUser;
+(NSUInteger)numSamplingGroups;
+(id)getSamplingGroupForDataCollection;
+(id)samplingGroupFromSamplingGroupId:(NSInteger)arg0 ;
+(void)resetSamplingGroupAssignmentForUser;
-(id)description;
-(id)init;
-(id)initWithAnchorWhitelist:(id)arg0 samplingGroupId:(NSInteger)arg1 ;


@end


#endif