// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSORYCOLLECTIONSETTINGITEM_H
#define HMACCESSORYCOLLECTIONSETTINGITEM_H

@class NSUUID, NSData;
@protocol NSCopying, NSSecureCoding, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessoryCollectionSetting.h"

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSData *serializedValue; // ivar: _serializedValue
@property (weak) HMAccessoryCollectionSetting *setting; // ivar: _setting
@property (readonly, copy) NSObject<NSObject><NSCopying><NSSecureCoding> *value; // ivar: _value


+(BOOL)requiresCustomItemValueClassesToDecodeForKeyPath:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldBlockValueDecode;
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