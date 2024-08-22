// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDMANAGEDDATACLASS_H
#define ACDMANAGEDDATACLASS_H

@class NSManagedObject, NSSet, NSString;



@interface ACDManagedDataclass : NSManagedObject

@property (retain, nonatomic) NSSet *enabledAccounts;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *provisionedAccounts;
@property (retain, nonatomic) NSSet *supportedTypes;
@property (retain, nonatomic) NSSet *syncableTypes;




@end


#endif