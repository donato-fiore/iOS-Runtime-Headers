// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSORTEDQUERYANCHOR_H
#define HKSORTEDQUERYANCHOR_H

@class NSNumber, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKSortedQueryAnchor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *objectID; // ivar: _objectID
@property (readonly, copy, nonatomic) NSArray *sortConstraints; // ivar: _sortConstraints


+(BOOL)supportsSecureCoding;
+(id)sortConstraintsWithSortDescriptors:(id)arg0 sample:(id)arg1 ;
+(id)sortedQueryAnchorRelaxingConstraintsWithAnchor:(id)arg0 error:(*id)arg1 ;
+(id)sortedQueryAnchorWithSortDescriptors:(id)arg0 ;
+(id)sortedQueryAnchorWithSortDescriptors:(id)arg0 followingSample:(id)arg1 objectID:(NSInteger)arg2 ;
+(id)sortedQueryAnchorWithSortDescriptors:(id)arg0 includingSample:(id)arg1 objectID:(NSInteger)arg2 ;
+(id)sortedQueryAnchorWithSortDescriptors:(id)arg0 objectID:(NSInteger)arg1 ;
-(BOOL)canRelax;
-(BOOL)isCompatibleWithSortDescriptors:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSortConstraints:(id)arg0 objectID:(id)arg1 ;
-(id)predicate;
-(id)querySortDescriptors;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif