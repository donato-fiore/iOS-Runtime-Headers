// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUSTOMCATEGORY_H
#define CUSTOMCATEGORY_H

@class NSManagedObject, NSString;



@interface CustomCategory : NSManagedObject

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *category;


+(id)fetchRequest;


@end


#endif