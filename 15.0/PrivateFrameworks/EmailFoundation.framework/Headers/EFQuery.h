// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFQUERY_H
#define EFQUERY_H

@class NSString, NSPredicate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface EFQuery : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSUInteger queryOptions; // ivar: _queryOptions
@property (readonly, copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (readonly, nonatomic) Class targetClass; // ivar: _targetClass


+(BOOL)supportsSecureCoding;
-(BOOL)_isEqualToQuery:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTargetClass:(Class)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)initWithTargetClass:(Class)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 queryOptions:(NSUInteger)arg3 label:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif