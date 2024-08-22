// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSEICATEGORY_H
#define CLSEICATEGORY_H

@class NSManagedObject, NSSet, NSString;


#import "CLSEICategory.h"

@interface CLSEICategory : NSManagedObject

@property (retain, nonatomic) NSSet *events;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) CLSEICategory *parentCategory;
@property (copy, nonatomic) NSSet *subCategories;




@end


#endif