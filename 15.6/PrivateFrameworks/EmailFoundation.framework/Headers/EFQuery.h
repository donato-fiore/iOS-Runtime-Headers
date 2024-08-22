// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFQUERY_H
#define EFQUERY_H

@class NSString, NSPredicate, NSArray;
@protocol EFLoggable, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface EFQuery : NSObject <EFLoggable, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSUInteger queryOptions; // ivar: _queryOptions
@property (readonly, copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (readonly) Class superclass;
@property (readonly, nonatomic) Class targetClass; // ivar: _targetClass


+(BOOL)_isValidSortDescriptor:(id)arg0 forTargetClass:(Class)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)log;
+(void)addValidSortDescriptorKeyPaths:(id)arg0 forTargetClass:(Class)arg1 ;
-(BOOL)_isEqualToQuery:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTargetClass:(Class)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)initWithTargetClass:(Class)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 queryOptions:(NSUInteger)arg3 label:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif