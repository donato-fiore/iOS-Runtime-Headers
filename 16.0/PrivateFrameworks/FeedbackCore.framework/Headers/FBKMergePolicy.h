// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKMERGEPOLICY_H
#define FBKMERGEPOLICY_H

@class NSMergePolicy;



@interface FBKMergePolicy : NSMergePolicy

@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)resolveConflicts:(id)arg0 error:(*id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif