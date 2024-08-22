// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPMUTABLEKEYCHAINITEM_H
#define HAPMUTABLEKEYCHAINITEM_H

@class NSString, NSDate, NSData, NSNumber;


#import "HAPKeychainItem.h"

@interface HAPMutableKeychainItem : HAPKeychainItem

@property (retain, nonatomic) NSString *accessGroup;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSData *genericData;
@property (retain, nonatomic) NSString *itemDescription;
@property (retain, nonatomic) NSString *label;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSData *valueData;
@property (retain, nonatomic) NSString *viewHint;


-(id)initWithPairingIdentity:(id)arg0 ;


@end


#endif