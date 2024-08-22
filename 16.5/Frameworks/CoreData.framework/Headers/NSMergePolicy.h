// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMERGEPOLICY_H
#define NSMERGEPOLICY_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSMergePolicy : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSUInteger _type;
    *void _reserved2;
    *void _reserved3;
}


@property (readonly) NSUInteger mergeType;


+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)supportsSecureCoding;
+(id)errorMergePolicy;
+(id)mergeByPropertyObjectTrumpMergePolicy;
+(id)mergeByPropertyStoreTrumpMergePolicy;
+(id)overwriteMergePolicy;
+(id)rollbackMergePolicy;
+(void)initialize;
-(BOOL)resolveConflicts:(id)arg0 error:(*id)arg1 ;
-(BOOL)resolveConstraintConflicts:(id)arg0 error:(*id)arg1 ;
-(BOOL)resolveOptimisticLockingVersionConflicts:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMergeType:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_mergeChangesObjectUpdatesTrumpForObject:(id)arg0 withRecord:(id)arg1 ;
-(void)_mergeChangesStoreUpdatesTrumpForObject:(id)arg0 withRecord:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeToManyRelationshipForSourceObject:(id)arg0 withOldSnapshot:(id)arg1 newSnapshot:(id)arg2 andAncestor:(id)arg3 andLegacyPath:(BOOL)arg4 ;


@end


#endif