// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKGENERICCONDITION_H
#define CKGENERICCONDITION_H

@class NSString, NSPredicate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKGenericCondition : NSObject <NSCopying, NSSecureCoding>

 {
    ? type;
    ? negated;
    ? $__lazy_storage_$_sql;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSPredicate *predicate;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(BOOL)evaluateOn:(id)arg0 ;
-(id)and:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMatchType:(NSInteger)arg0 value:(id)arg1 negated:(BOOL)arg2 ;
-(id)initWithValue:(BOOL)arg0 ;
-(id)or:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif