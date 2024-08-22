// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORYCOLLECTIONSETTINGITEM_H
#define HMACCESSORYCOLLECTIONSETTINGITEM_H

@class HMFUnfairLock, NSUUID, NSData;
@protocol NSCopying, NSSecureCoding, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessoryCollectionSetting.h"

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSData *serializedValue; // ivar: _serializedValue
@property (weak) HMAccessoryCollectionSetting *setting; // ivar: _setting
@property (readonly, copy) NSObject<NSObject><NSCopying><NSSecureCoding> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 value:(id)arg1 ;
-(id)initWithValue:(id)arg0 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif