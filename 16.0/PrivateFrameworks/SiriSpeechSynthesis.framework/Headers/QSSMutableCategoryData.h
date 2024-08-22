// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLECATEGORYDATA_H
#define QSSMUTABLECATEGORYDATA_H

@class NSArray, NSString;


#import "QSSCategoryData.h"

@interface QSSMutableCategoryData : QSSCategoryData

@property (copy, nonatomic) NSArray *category_data;
@property (copy, nonatomic) NSString *category_name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif