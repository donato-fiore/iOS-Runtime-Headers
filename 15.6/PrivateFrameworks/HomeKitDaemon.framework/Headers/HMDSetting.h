// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSETTING_H
#define HMDSETTING_H

@class NSMutableArray, NSString, NSUUID, HMSettingValue, NSNumber;
@protocol HMDSettingBaseProtocol, HMFLocking;

#import <Foundation/Foundation.h>


@interface HMDSetting : NSObject <HMDSettingBaseProtocol>

 {
    id<HMFLocking> *_lock;
}


@property (retain) NSMutableArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (copy) HMSettingValue *internalValue; // ivar: _internalValue
@property (copy) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (copy) NSNumber *properties; // ivar: _properties
@property (getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (readonly) Class superclass;
@property (copy) NSNumber *type; // ivar: _type
@property (readonly, copy) id *value;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)settingValueWithModel:(id)arg0 ;
-(BOOL)isValidValue:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateWithSettingValue:(id)arg0 ;
-(BOOL)wouldValueUpdate:(id)arg0 ;
-(id)constraintsByKeyPathWithCurrentKeyPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 name:(id)arg2 properties:(id)arg3 type:(id)arg4 value:(id)arg5 constraints:(id)arg6 ;
-(id)initWithModel:(id)arg0 ;
-(id)logIdentifier;
-(void)addConstraint:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif