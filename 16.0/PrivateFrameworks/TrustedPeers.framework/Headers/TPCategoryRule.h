// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPCATEGORYRULE_H
#define TPCATEGORYRULE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TPCategoryRule : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSString *prefix; // ivar: _prefix


+(BOOL)supportsSecureCoding;
+(id)ruleWithPrefix:(id)arg0 category:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCategoryRule:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif