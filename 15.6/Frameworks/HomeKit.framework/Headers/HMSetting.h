// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMSETTING_H
#define HMSETTING_H

@class NSUUID, NSString;
@protocol NSSecureCoding, HMSettingManager;

#import <Foundation/Foundation.h>

#import "HMSettingValue.h"

@interface HMSetting : NSObject <NSSecureCoding>



@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMSettingValue *internalValue;
@property (copy) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy) NSString *localizedTitle;
@property (copy) NSString *name; // ivar: _name
@property NSUInteger properties; // ivar: _properties
@property (weak) NSObject<HMSettingManager> *settingManager; // ivar: _settingManager
@property NSInteger type; // ivar: _type
@property (copy) id *value; // ivar: _value
@property (retain) Class valueClass; // ivar: _valueClass
@property (readonly, getter=isWritable) BOOL writable;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 value:(id)arg3 properties:(NSUInteger)arg4 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 value:(id)arg3 properties:(NSUInteger)arg4 ;
-(id)initWithInternal;
-(id)valueForUpdate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)merge:(id)arg0 ;
-(void)updateValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif