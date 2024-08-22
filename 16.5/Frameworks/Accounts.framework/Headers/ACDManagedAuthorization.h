// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACDMANAGEDAUTHORIZATION_H
#define ACDMANAGEDAUTHORIZATION_H

@class NSManagedObject, NSString;


#import "ACDManagedAccountType.h"

@interface ACDManagedAuthorization : NSManagedObject

@property (retain, nonatomic) ACDManagedAccountType *accountType;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *grantedPermissions;
@property (retain, nonatomic) id *options;




@end


#endif