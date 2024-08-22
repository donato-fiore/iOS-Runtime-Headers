// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPBEACONROLECATEGORY_H
#define SPBEACONROLECATEGORY_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPBeaconRoleCategory : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *category; // ivar: _category
@property (nonatomic) NSInteger categoryId; // ivar: _categoryId
@property (copy, nonatomic) NSArray *roles; // ivar: _roles


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCategoryId:(NSInteger)arg0 category:(id)arg1 roles:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif