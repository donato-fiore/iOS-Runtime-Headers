// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDMANAGEDACCOUNTPROPERTY_H
#define ACDMANAGEDACCOUNTPROPERTY_H

@class NSManagedObject, NSString;


#import "ACDManagedAccount.h"

@interface ACDManagedAccountProperty : NSManagedObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) ACDManagedAccount *owner;
@property (retain, nonatomic) id *value;




@end


#endif