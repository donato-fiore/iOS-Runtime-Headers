// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMCRMERGEABLEORDEREDSET_H
#define REMCRMERGEABLEORDEREDSET_H

@class NSOrderedSet, NSMutableArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CRDocument.h"
#import "REMReplicaIDSource.h"

@interface REMCRMergeableOrderedSet : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) CRDocument *document; // ivar: _document
@property (readonly, nonatomic) NSOrderedSet *orderedSet;
@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource; // ivar: _replicaIDSource
@property (readonly, nonatomic) NSMutableArray *undos; // ivar: _undos


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)indexOfEqualObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReplicaIDSource:(id)arg0 document:(id)arg1 ;
-(id)initWithReplicaIDSource:(id)arg0 document:(id)arg1 undos:(id)arg2 ;
-(id)initWithReplicaIDSource:(id)arg0 orderedSet:(id)arg1 ;
-(id)initWithReplicaIDSource:(id)arg0 serializedData:(id)arg1 error:(*id)arg2 ;
-(id)mergedOrderedSetWithOrderedSet:(id)arg0 error:(*id)arg1 ;
-(id)mutableOrderedSet;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)serializedData;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif