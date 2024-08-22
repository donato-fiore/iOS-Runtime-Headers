// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSKEYCHAINGENERICPASSWORD_H
#define VSKEYCHAINGENERICPASSWORD_H

@class NSString, NSDate, NSNumber;


#import "VSKeychainItem.h"

@interface VSKeychainGenericPassword : VSKeychainItem

@property (copy, nonatomic) NSString *accessGroup;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *comment;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSNumber *creatorCode;
@property (copy, nonatomic) NSString *generic;
@property (nonatomic, getter=isInvisible) BOOL invisible;
@property (copy, nonatomic) NSString *itemDescription;
@property (copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (nonatomic, getter=isNegative) BOOL negative;
@property (copy, nonatomic) NSString *service;
@property (nonatomic, getter=isSynchronizable) BOOL synchronizable;
@property (copy, nonatomic) NSNumber *typeCode;
@property (copy, nonatomic) NSString *viewHint;


-(id)_faultWhileAccessingPrimitiveValueForKey:(id)arg0 ;
-(void)_notifyWhileSettingPrimitiveValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif