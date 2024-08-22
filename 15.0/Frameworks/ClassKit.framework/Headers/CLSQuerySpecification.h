// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSQUERYSPECIFICATION_H
#define CLSQUERYSPECIFICATION_H

@class NSPredicate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSQuerySpecification : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 sortDescriptors:(id)arg1 state:(NSUInteger)arg2 limit:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif