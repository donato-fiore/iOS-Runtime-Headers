// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCATEGORYACCESSORYTYPE_H
#define HFCATEGORYACCESSORYTYPE_H

@class NSString;


#import "HFAccessoryType.h"

@interface HFCategoryAccessoryType : HFAccessoryType

@property (readonly, nonatomic) NSString *categoryType; // ivar: _categoryType


+(id)na_identity;
-(id)debugDescription;
-(id)description;
-(id)initWithCategoryType:(id)arg0 ;
-(id)localizedCategory;


@end


#endif