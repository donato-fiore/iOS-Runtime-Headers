// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSQUERYSPECIFICATION_H
#define CLSQUERYSPECIFICATION_H

@class NSString, NSPredicate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSQuerySpecification : NSObject <NSSecureCoding>

 {
    NSUInteger _offset;
}


@property (readonly, nonatomic) NSString *entityName; // ivar: _entityName
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (nonatomic) NSUInteger observerOptions; // ivar: _observerOptions
@property (readonly, copy, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


+(BOOL)supportsSecureCoding;
+(id)querySpecificationWithObjectName:(id)arg0 predicate:(id)arg1 ;
+(id)querySpecificationWithObjectType:(Class)arg0 predicate:(id)arg1 ;
-(NSUInteger)offset;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectName:(id)arg0 predicate:(id)arg1 ;
-(id)initWithObjectType:(Class)arg0 predicate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setOffset:(NSUInteger)arg0 ;


@end


#endif